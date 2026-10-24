using System.Collections.ObjectModel;

namespace VocabularyFlashcardsMauiApp
{
    public class Flashcard
    {
        public string EnglishWord { get; set; } = string.Empty;
        public string PolishTranslation { get; set; } = string.Empty;
    }

    public partial class MainPage : ContentPage
    {
        public ObservableCollection<Flashcard> Flashcards { get; set; }

        private Flashcard currentCard;

        private string translation = string.Empty;
        public string Translation
        {
            get { return translation; }
            set
            {
                translation = value;
                OnPropertyChanged();
            }
        }

        public MainPage()
        {
            Flashcards = new ObservableCollection<Flashcard>()
            {
                new Flashcard { EnglishWord = "apple", PolishTranslation = "jabłko" },
                new Flashcard { EnglishWord = "house", PolishTranslation = "dom" },
                new Flashcard { EnglishWord = "dog", PolishTranslation = "pies" },
                new Flashcard { EnglishWord = "book", PolishTranslation = "książka" },
                new Flashcard { EnglishWord = "bike", PolishTranslation = "rower" }
            };

            currentCard = Flashcards[0];

            InitializeComponent();
        }

        private void ShowTranslation_Clicked(object sender, EventArgs e)
        {
            if (currentCard != null)
            {
                Translation = currentCard.PolishTranslation;
            }
            else if (carouselCards.Position >= 0 && carouselCards.Position < Flashcards.Count)
            {
                Translation = Flashcards[carouselCards.Position].PolishTranslation;
            }
        }

        private void Carousel_CurrentItemChanged(object sender, CurrentItemChangedEventArgs e)
        {
            if (e.CurrentItem is Flashcard card)
            {
                currentCard = card;
            }

            Translation = string.Empty;
        }

        private void Reset_Clicked(object sender, EventArgs e)
        {
            carouselCards.Position = 0;
            carouselCards.ScrollTo(0);
            currentCard = Flashcards[0];
            Translation = string.Empty;
        }
    }
}
