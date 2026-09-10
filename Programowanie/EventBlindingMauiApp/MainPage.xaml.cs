namespace EventBlindingMauiApp
{
    public partial class MainPage : ContentPage
    {

        public MainPage()
        {
            InitializeComponent();
        }

        private void Slider_ValueChanged(object sender, ValueChangedEventArgs e)
        {
            if (rotationLabel is not null
                && sender is Slider slider)
            {
                rotationLabel.Rotation = slider.Value;

                labelValue.Text = slider.Value.ToString();
            }
        }

        private void Button_Clicked(object sender, EventArgs e)
        {
            resoultAlert.Text = alert.Text;
        }


        public string Message { get; set; }
        private string returmMessage;
        public string ReturmMessage
        {
            get { return returmMessage; }
            set 
            {
                returmMessage = value;
                OnPropertyChanged();
            }
        }
        private void Button_Clicked_1(object sender, EventArgs e)
        {
            ReturmMessage = Message;
        }
    }
}
