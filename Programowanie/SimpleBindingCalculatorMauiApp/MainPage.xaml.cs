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
            double firstN = Convert.ToDouble(firstNumber);
            double secoundN = Convert.ToDouble(secoundNumber);
            double suma = firstN + secoundN;
            double ruznica = firstN - secoundN;
            double iloczyn = firstN * secoundN;
            double iloraz = firstN / secoundN;

            string r = "Suma " + suma.ToString() + "\n";
            r += "Ruznica " + ruznica.ToString() + "\n";
            r += "Iloczyn " + iloczyn.ToString() + "\n";
            r += "Iloraz " + iloraz.ToString() + "\n";
            ReturnMessage = r;
        }
    }
}
