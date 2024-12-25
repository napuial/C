#define TRIG_PIN 9
#define ECHO_PIN 10

void setup() {
  // Inicjalizacja pinów
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  
  // Rozpoczęcie komunikacji szeregowej
  Serial.begin(9600);
}

void loop() {
  // Wysłanie impulsu na pin TRIG
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  // Odczytanie czasu powrotu sygnału na pin ECHO
  long duration = pulseIn(ECHO_PIN, HIGH);
  
  // Obliczanie odległości (w centymetrach)
  long distance = duration * 0.0344 / 2;
  
  // Wyświetlanie odległości na monitorze szeregowym
  Serial.print("Odległość: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Opóźnienie przed kolejnym pomiarem
  delay(500);
}
