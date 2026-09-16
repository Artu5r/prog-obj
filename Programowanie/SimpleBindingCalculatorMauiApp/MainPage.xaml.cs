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
            int suma = int.Parse(firstNumber) + int.Parse(secoundNumber);
            ReturnMessage = "Sma"suma.ToString();
        }
    }
}
