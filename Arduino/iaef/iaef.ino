const int photocell = A0;     //pin für Lichtsensor
const int l = 2;              //pin für LED
const int l2 = 4;
const int tast = 3;           //pin für Taster

int slave1 = 0;                   //Speicherort des Slaves




void setup() {
  pinMode(photocell, INPUT);          //pin Photocell
  pinMode(l, OUTPUT);                 //pin LED
  pinMode (tast, INPUT);              //pin Taster
  Serial.begin(9600);                 //Serieller Monitor
}


int slavefunction1() {                          //Abfrage der Photocell
  if (analogRead(photocell) > 1000) {
    slave1 = 1;
    return 1;

  }
  if (analogRead(photocell) < 1000) {
    slave1 = 2;
    return 2;
  }
}




void ask() {                          //Übersetzung des Signals in Serial Outputs
  if (slave1 == 1) {
    Serial.println("on");
    digitalWrite(l2, HIGH);
    return;
  }

  else if (slave1 == 2) {
    Serial.println("off");
    digitalWrite(l2, LOW);

    return;
  }


 }
void loop() {

  if (digitalRead(tast) == HIGH) {
    digitalWrite(l, HIGH);
    slavefunction1();                         //Function (slavefunction1() )
  }
  else if (digitalRead(tast) == LOW) {
    digitalWrite(l, LOW);
    slavefunction1();
  }

  ask();                                      // Function (ask() )
  delay(500);
  slave1 = 0;
}
