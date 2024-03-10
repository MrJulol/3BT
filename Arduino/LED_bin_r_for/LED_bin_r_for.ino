int LED[]{ 4, 5, 6, 7, 8, 9, 10, 11 };
int bin[]{ 0, 0, 0, 0, 0, 0, 0, 0 };
int num = 0;
String zahl = "";

void setup() {
  for (int i = 0; i <= 8; i++) {
    pinMode(LED[i], OUTPUT);
  }
  Serial.begin(9600);
}

void loop() {
  Serial.println("Gib eine Zahl von 1 - 255 ein");
  while (Serial.available() == 0) {}
  zahl = Serial.readString();
  num = zahl.toInt();

  for (int r = 0; r <= 8; r++) {
    bin[r] = num % 2;
    num = num / 2;
  }

  for (int e = 0; e <= 8; e++) {
    if (bin[e] == 1) {
      digitalWrite(LED[e], HIGH);
    } else if (bin[e] == 0) {
      digitalWrite(LED[e], LOW);
    }
  }
}