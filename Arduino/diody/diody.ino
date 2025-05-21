void setup() {
  pinMode(8, OUTPUT); //Dioda jako wyjście
  pinMode(4, OUTPUT); //Dioda jako wyjście
  pinMode(2, OUTPUT); //Dioda jako wyjście
  pinMode(7, INPUT_PULLUP); //Przycisk jako wejście
  digitalWrite(8, LOW); //Wyłączenie diody
}

void loop()
{
  if (digitalRead(7) == LOW) { //Jeśli przycisk wciśnięty
    digitalWrite(8, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(2, HIGH);
  } else { //Jeśli warunek nie został spełniony (przycisk nie jest wciśnięty)
    digitalWrite(8, LOW); //Wyłącz diodę
    digitalWrite(4, LOW); //Wyłącz diodę
    digitalWrite(2, LOW); //Wyłącz diodę
  }
}