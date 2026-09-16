namespace SimpleBindingCalculatorMauiApp
{
    public partial class MainPage : ContentPage
    {
        public MainPage()
        {
            InitializeComponent();
        }

        public string firstNumber { get; set; }
        public string secoundNumber { get; set; }
        private string returnMessage;
        public string ReturnMessage
        {
            get { return returnMessage; }
            set
            {
                returnMessage = value;
                OnPropertyChanged();
            }
        }

        private void Button_Clicked_1(object sender, EventArgs e)
        {
            if (firstNumber is not null 
                && secoundNumber is not null
                && double.TryParse(firstNumber, out double firstN)
                && double.TryParse(secoundNumber, out double secoundN))
            {
                double suma = firstN + secoundN;
                double ruznica = firstN - secoundN;
                double iloczyn = firstN * secoundN;
                double iloraz = firstN / secoundN;

                ReturnMessage = "Suma " + suma.ToString() + "\n";
                ReturnMessage += "Ruznica " + ruznica.ToString() + "\n";
                ReturnMessage += "Iloczyn " + iloczyn.ToString() + "\n";
                ReturnMessage += "Iloraz " + iloraz.ToString() + "\n";
            }
            else
            {
                ReturnMessage = "Niepoprawna liczba";
            }

        }
    }
}
