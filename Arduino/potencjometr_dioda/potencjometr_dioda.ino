// Numer analogowego pinu do którego podłączony jest potencjometr
#define POTENCJOMETR_PIN 0

//Numer cyfrowego pinu -PWM do którego podłączona jest dioda LED
#define LED_PIN 3

void setup()
{
  pinMode(LED_PIN, OUTPUT);
}

void loop()
{
  // Odczyt wartości z potencjometru
  int value = analogRead(POTENCJOMETR_PIN);
  // Przeskalowanie wartości pitencjometru na jasność PWM
  byte bright = map(value, 0, 1023, 0, 255);
  // Ustawianie jasności diody LED za pomocą wyjścia PWM
  analogWrite(LED_PIN, bright);
}