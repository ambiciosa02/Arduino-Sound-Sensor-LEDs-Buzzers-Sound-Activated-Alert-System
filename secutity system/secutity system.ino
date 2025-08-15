// Broches
const int soundSensorPin = A0;      // Capteur de son sur A0
const int buzzer1Pin = 8;           // Buzzer 1
const int buzzer2Pin = 9;           // Buzzer 2

// Broches des LEDs
const int ledPins[] = {2, 3, 4, 5, 6, 7};

const int soundThreshold = 28;     // Seuil de détection du bruit

void setup() {
  pinMode(buzzer1Pin, OUTPUT);
  pinMode(buzzer2Pin, OUTPUT);

  // Initialiser les LEDs
  for (int i = 0; i < 6; i++) {
    pinMode(ledPins[i], OUTPUT);
  }

  Serial.begin(9600); // Pour voir les valeurs dans le moniteur série
}

void loop() {
  int soundValue = analogRead(soundSensorPin);
  Serial.println("soundValue is: ");
  Serial.println(soundValue); // Affiche la valeur du son

  if (soundValue > soundThreshold) {
    // Activer buzzers et LEDs
    digitalWrite(buzzer1Pin, HIGH);
    digitalWrite(buzzer2Pin, HIGH);
    for (int i = 0; i < 6; i++) {
      digitalWrite(ledPins[i], HIGH);
    }
  } else {
    // Éteindre buzzers et LEDs
    digitalWrite(buzzer1Pin, LOW);
    digitalWrite(buzzer2Pin, LOW);
    for (int i = 0; i < 6; i++) {
      digitalWrite(ledPins[i], LOW);
    }
  }

   // Petite pause pour la stabilité
   delay(1000);
}
