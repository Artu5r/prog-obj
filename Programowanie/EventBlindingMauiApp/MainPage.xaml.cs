namespace EventBlindingMauiApp
{
    public partial class MainPage : ContentPage
    {
        int count = 0;

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
    }
}
