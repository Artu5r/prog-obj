using System.Collections.ObjectModel;

namespace HotelBookingMauiApp
{
    public partial class MainPage : ContentPage
    {
        private string fullName;
        public string FullName
        {
            get { return fullName; }
            set
            {
                fullName = value;
                OnPropertyChanged();
            }
        }

        private string email;
        public string Email
        {
            get { return email; }
            set
            {
                email = value;
                OnPropertyChanged();
            }
        }

        private DateTime minimumDate;
        public DateTime MinimumDate
        {
            get { return minimumDate; }
            set
            {
                minimumDate = value;
                OnPropertyChanged();
            }
        }

        private DateTime arrivalDate;
        public DateTime ArrivalDate
        {
            get { return arrivalDate; }
            set
            {
                arrivalDate = value;
                OnPropertyChanged();
            }
        }



        private int nights;
        public int Nights
        {
            get { return nights; }
            set
            {
                nights = value;
                OnPropertyChanged();
            }
        }


        private int persons;
        public int Persons
        {
            get { return persons; }
            set
            {
                persons = value;
                OnPropertyChanged();
            }
        }

        public string[]
            RoomCollection
        { get; set; }

        private string selectedRoom;
        public string SelectedRoom
        {
            get { return selectedRoom; }
            set
            {
                selectedRoom = value;
                OnPropertyChanged();
            }
        }

        private bool breakfast;
        public bool Breakfast
        {
            get { return breakfast; }
            set
            {
                breakfast = value;
                OnPropertyChanged();
            }
        }


        private bool parking;
        public bool Parking
        {
            get { return parking; }
            set
            {
                parking = value;
                OnPropertyChanged();
            }
        }

        private double discount;
        public double Discount
        {
            get { return discount; }
            set
            {
                discount = value;
                OnPropertyChanged();
            }
        }


        private string summary;
        public string Summary
        {
            get { return summary; }
            set
            {
                summary = value;
                OnPropertyChanged();
            }
        }

        private Command calculateRese;
        public Command CalculateRese
        {
            get
            {
                if (calculateRese == null)
                {
                    calculateRese = new Command(() => { CalculateCost(); });
                }
                return calculateRese;
            }
        }

        public MainPage()
        {
            MinimumDate = DateTime.Today;
            ArrivalDate = DateTime.Today;
            Nights = 1;
            Persons = 1;
            Breakfast = false;
            Parking = false;
            Discount = 0;
            RoomCollection = new string[]
            {
                "Pokój jednoosbowy",
                "Pokój dwuosobowy",
                "Apartament"
            };

            InitializeComponent();
        }

        void CalculateCost()
        {
            if (string.IsNullOrWhiteSpace(FullName))
            {
                Summary = "Błąd podaj imie lub nazwisko";
                return;
            }

            if (string.IsNullOrWhiteSpace(SelectedRoom))
            {
                Summary = "Błąd wybierz rodzaj pokoju";
                return;
            }

            if (string.IsNullOrWhiteSpace(Email))
            {
                Summary = "Uzupełnij adres email";
                return;
            }

            if (!Email.Contains(".") || !Email.Contains("@"))
            {
                Summary = "Podałeś niepoprawny adres Email";
                return;
            }

            if (string.IsNullOrWhiteSpace(SelectedRoom))
            {
                Summary = "Wybierz rodzaj pokoju";
                return;
            }

            if (ArrivalDate < DateTime.Today)
            {
                Summary = "Błąd data przyjazdu nie może być wcześniejsza niż dzisiaj";
                return;
            }


            double roomPrice = 0;

            switch (SelectedRoom)
            {
                case "Pokój jednoosobowy":
                    roomPrice = 200; break;
                case "Pokój dwuosobowy":
                    roomPrice = 300; break;
                case "Apartament":
                    roomPrice = 500; break;
            }

            double roomCost = Nights * Persons;
            double breakfastCost = 0;

            if (Breakfast)
            {
                breakfastCost = Nights * Persons * 40;
            }

            double parkingCost = 0;
            if (Parking)
            {
                parkingCost = Nights * 30;
            }

            double totalBeforeDiscount = roomCost + breakfastCost + parkingCost;
            double discountAmount = totalBeforeDiscount * Discount / 100;
            double totalCost = totalBeforeDiscount - discountAmount;


            Summary = $"Imię i nazwisko: {FullName}\n" +
                $"Data przyjazdu: {ArrivalDate}\n" +
                $"Liczba nocy: {Nights} \n" +
                $"Liczba osób: {Persons} \n" +
                $"Pokój: {SelectedRoom} \n" +
                $"Śniadanie: {(Breakfast ? "TAK" : "NIE")} \n" +
                $"Parking: {(Parking ? "TAK" : "NIE")} \n" +
                $"Rabat: {Discount}% \n" +
                $"Koszt pokoju: {Nights} x {roomPrice}zł = {roomCost}zł \n" +
                $"Śniadanie: {Nights} x {Persons} x 40zł = {breakfastCost}zł\n" +
                $"Parking: {Nights} x 30zł = {parkingCost}zł\n" +
                $"Cena przed rabatem: {totalBeforeDiscount}zł \n" +
                $"Rabat: {discountAmount:F2}zł \n" +
                $"Łączny koszt: {totalCost:F2}zł\n";
        }

    }
}

