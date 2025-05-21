// Pin, do którego podłączona jest dioda LED
const int ledPin = 13;  

// Definicja alfabetu Morse'a
String morseCode[] = {
  ".-", // A
  "-...", // B
  "-.-.", // C
  "-..", // D
  ".", // E
  "..-.", // F
  "--.", // G
  "....", // H
  "..", // I
  ".---", // J
  "-.-", // K
  ".-..", // L
  "--", // M
  "-.", // N
  "---", // O
  ".--.", // P
  "--.-", // Q
  ".-.", // R
  "...", // S
  "-", // T
  "..-", // U
  "...-", // V
  ".--", // W
  "-..-", // X
  "-.--", // Y
  "--.." // Z
};

void setup() {
  // Ustawienie pinu diody LED jako wyjście
  pinMode(ledPin, OUTPUT);
}

void loop() {
  String word = "test";

  for (int i = 0; i < word.length(); i++) {
    char letter = word[i];
    
    // Zmienna przechowująca indeks litery w alfabecie
    int index = letter - 'a'; // Zmiana na indeks alfabetu (np. 'a' -> 0, 'b' -> 1, ...)
    
    // Sprawdzenie, czy litera jest w zasięgu alfabetu
    if (index >= 0 && index < 26) {
      String morse = morseCode[index];
      
      // Przejście przez wszystkie znaki w kodzie Morse'a
      for (int j = 0; j < morse.length(); j++) {
        if (morse[j] == '.') {
          digitalWrite(ledPin, HIGH);  // Krótkie mignięcie (kropka)
          delay(200);                  // Długość mignięcia
        } else if (morse[j] == '-') {
          digitalWrite(ledPin, HIGH);  // Długie mignięcie (kreseczka)
          delay(600);                  // Długość mignięcia
        }
        
        digitalWrite(ledPin, LOW);    // Wyłączenie diody
        delay(200);                   // Przerwa pomiędzy znakami
      }
      
      delay(600);  // Przerwa pomiędzy literami
    }
  }
  
  delay(2000);  // Przerwa pomiędzy kolejnymi słowami
}
