const int taster = 4;                       //Pins für Taster und Übertragungskabel
const int cable = 5;

void setup() {
  pinMode(4, INPUT);                         //Pinmodes für Taster und Übertragungskabel
  pinMode(5, OUTPUT);
}

void loop() {
  if (digitalRead(taster) == HIGH) {         //Fragt ab, ob der Taster gedrückt ist
    digitalWrite(cable, HIGH);               //wenn ja, Übertragungskabel = HIGH
  }
  else {
    digitalWrite(cable, LOW)                 //wenn nein, Übertragungskabel = LOW
  }
}
