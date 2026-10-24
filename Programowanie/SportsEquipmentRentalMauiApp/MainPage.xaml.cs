using System.Collections.ObjectModel;

namespace SportsEquipmentRentalMauiApp
{
    public class Equipment
    {
        public string Name { get; set; } = string.Empty;
        public int PricePerDay { get; set; }
        public string PriceFormatted => $"{PricePerDay} zł za dzień";
    }

    public partial class MainPage : ContentPage
    {
        private string fullName = string.Empty;
        public string FullName
        {
            get { return fullName; }
            set
            {
                fullName = value;
                OnPropertyChanged();
            }
        }

        private int rentalDays;
        public int RentalDays
        {
            get { return rentalDays; }
            set
            {
                rentalDays = value;
                OnPropertyChanged();
            }
        }

        private bool hasInsurance;
        public bool HasInsurance
        {
            get { return hasInsurance; }
            set
            {
                hasInsurance = value;
                OnPropertyChanged();
            }
        }

        public ObservableCollection<Equipment> EquipmentCollection { get; set; }

        private Equipment? selectedEquipment;
        public Equipment? SelectedEquipment
        {
            get { return selectedEquipment; }
            set
            {
                selectedEquipment = value;
                OnPropertyChanged();
            }
        }

        private string summary = string.Empty;
        public string Summary
        {
            get { return summary; }
            set
            {
                summary = value;
                OnPropertyChanged();
            }
        }

        private Command? calculateCostCommand;
        public Command CalculateCostCommand
        {
            get
            {
                if (calculateCostCommand == null)
                {
                    calculateCostCommand = new Command(() => { CalculateCost(); });
                }
                return calculateCostCommand;
            }
        }

        public MainPage()
        {
            RentalDays = 1;
            HasInsurance = false;

            EquipmentCollection = new ObservableCollection<Equipment>()
            {
                new Equipment { Name = "Rower", PricePerDay = 40 },
                new Equipment { Name = "Hulajnoga", PricePerDay = 30 },
                new Equipment { Name = "Rolki", PricePerDay = 20 },
                new Equipment { Name = "Kajak", PricePerDay = 50 }
            };

            InitializeComponent();
        }

        private void Button_Clicked(object sender, EventArgs e)
        {
            CalculateCost();
        }

        void CalculateCost()
        {
            if (string.IsNullOrWhiteSpace(FullName) && SelectedEquipment == null)
            {
                Summary = "Błąd: Podaj imię i nazwisko oraz wybierz sprzęt.";
                return;
            }

            if (string.IsNullOrWhiteSpace(FullName))
            {
                Summary = "Błąd: Podaj imię i nazwisko klienta.";
                return;
            }

            if (SelectedEquipment == null)
            {
                Summary = "Błąd: Wybierz sprzęt z listy.";
                return;
            }

            int equipmentCost = RentalDays * SelectedEquipment.PricePerDay;
            int insuranceCost = HasInsurance ? RentalDays * 5 : 0;
            int totalCost = equipmentCost + insuranceCost;

            string insuranceText = HasInsurance ? "TAK" : "NIE";
            string insuranceCostLine = HasInsurance
                ? $"Ubezpieczenie: {RentalDays} × 5 zł = {insuranceCost} zł\n"
                : "Ubezpieczenie: 0 zł\n";

            Summary = $"Klient: {FullName}\n" +
                      $"Sprzęt: {SelectedEquipment.Name}\n" +
                      $"Liczba dni: {RentalDays}\n" +
                      $"Ubezpieczenie: {insuranceText}\n" +
                      $"Koszt sprzętu: {RentalDays} × {SelectedEquipment.PricePerDay} zł = {equipmentCost} zł\n" +
                      insuranceCostLine +
                      $"Łącznie: {totalCost} zł";
        }
    }
}
