int LED[] {2, 3, 4, 5, 6, 7, 8, 9};
int bin[] {0, 0, 0, 0, 0, 0, 0, 0};
int num = 0;



const int trigger = 10;
const int echo = 11;

long dauer = 0;
long dauers = 0;
long entfernung = 0;
long entfernungcm = 0;

void setup() {
  for (int i = 0; i <= 8; i++) {
    pinMode(LED[i], OUTPUT);
  }
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);

}

void loop() {
  digitalWrite(trigger, LOW);
  delay(5);
  digitalWrite(trigger, HIGH);
  delay(10);
  digitalWrite(trigger, LOW);
  dauer = pulseIn(echo, HIGH);
  entfernung = (dauer / 2) * 0.034184123151;
  if (entfernung >= 500 || entfernung <= 0) {
    Serial.println(" ");
  }
  else {
    Serial.print(entfernung);
    Serial.println(" cm");
  }
  num  = entfernung;
  for (int r = 0; r <= 8; r++) {
    bin[r] = num % 2;
    num = num / 2;
  }
  for (int e = 0; e <= 8; e++) {
    if (bin[e] == 1) {
      digitalWrite(LED[e], HIGH);
    }
    else if (bin[e] == 0) {
      digitalWrite(LED[e], LOW);
    }
  }
  delay(500);
}
