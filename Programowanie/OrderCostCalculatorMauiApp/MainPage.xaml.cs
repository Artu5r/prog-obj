using System.Collections.ObjectModel;

namespace OrderCostCalculatorMauiApp
{
    public partial class MainPage : ContentPage
    {
        public MainPage()
        {
            InitializeComponent();
            DeliveryMethods = new ObservableCollection<string>()
            {
                "Odbiór osobisty",
                "Kurier",
                "Paczkomat"
            };

            SelectedDeliveryMethod = DeliveryMethods.First();
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

        public ObservableCollection<string> DeliveryMethods { get; set; }
        private string selectedDeliveryMethod;
        public string SelectedDeliveryMethod
        {
            get { return selectedDeliveryMethod; }
            set { selectedDeliveryMethod = value; OnPropertyChanged(); }
        }

        private void Button_Clicked_1(object sender, EventArgs e)
        {

            double orderPrice = 0;
            if (productName is not null
                && pricePerPsc is not null
                && double.TryParse(pricePerPsc, out double pricePerpsc))
            {

                orderPrice = pricePerpsc * stepperValue;
                string fastDelivery;
                if (IsOn)
                { 
                    fastDelivery = "TAK";
                    orderPrice += 15;
                }
                else
                    fastDelivery = "NIE";

                ReturnMessage = $"Produkt: {productName}\n" +
                    $"Cena za sztukę: {pricePerpsc}\n" +
                    $"Liczba sztuk: {stepperValue}\n" +
                    $"Dostawa ekspresowa: {fastDelivery}\n" +
                    $"Wynik: {orderPrice}";
            }
            else
            {
                ReturnMessage = "Nieprawidlowe dane";
            }

        }

    }
}
