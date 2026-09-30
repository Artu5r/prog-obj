namespace OrderCostCalculatorMauiApp
{
    public partial class MainPage : ContentPage
    {
        int count = 0;

        public MainPage()
        {
            InitializeComponent();
        }

        public string productName { get; set; }
        public string pricePerPsc { get; set; }
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

        private int stepperValue;
        public int StepperValue
        {
            get { return stepperValue; }
            set { stepperValue = value; OnPropertyChanged(); }
        }

        private bool isOn;

        public bool IsOn
        {
            get { return isOn; }
            set { isOn = value; OnPropertyChanged(); }
        }

        private void Button_Clicked_1(object sender, EventArgs e)
        {
            if (productName is not null
                && pricePerPsc is not null
                && double.TryParse(productName, out double firstN)
                && double.TryParse(pricePerPsc, out double secoundN))
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
