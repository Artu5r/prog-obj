namespace FirstMauiApp
{
    public partial class MainPage : ContentPage
    {
        public MainPage()
        {
            InitializeComponent();
        }

        private void Button_Clicked(object sender, EventArgs e)
        {
            if (int.TryParse(firstNumberEntry.Text, out int firstNumber)
                && int.TryParse(secoundNumberEntry.Text, out int secoundNumber))
            {
                resoultLabel.Text = $"Wynik dodawania to {firstNumber + secoundNumber}";
                resoultLabel.BackgroundColor = Colors.Green;
                resoultLabel.TextColor = Colors.White;
            }
            else {
                resoultLabel.Text = $"Podales nieprawidlowe dane.";
                resoultLabel.BackgroundColor= Colors.Red;
                resoultLabel.TextColor = Colors.White;
            }
        }
    }
}
