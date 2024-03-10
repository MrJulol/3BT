const int cable = 5;                    //Pins für Led und Übertragungskabel
const int LED = 4;

void setup() {
  pinMode(4, OUTPUT);                    //Pinmodes für Led und Übertragungskabel
  pinMode(5, INPUT);
}

void loop() {
  if (digitalRead(cable) == HIGH) {       //Fragt ab ob der Übertragungskabel HIGH ist
    digitalWrite(LED, HIGH);              //wenn ja, stellt den Pin der Led auf HIGH
  }
  else {
    digitalWrite(LED, LOW);               //wenn nein, stellt den Pin der Led auf LOW
  }
}
