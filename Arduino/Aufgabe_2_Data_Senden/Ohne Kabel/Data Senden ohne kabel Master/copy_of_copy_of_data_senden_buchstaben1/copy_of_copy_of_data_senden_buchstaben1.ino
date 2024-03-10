const int l = 2;
const int starter = 8;
const int starter2 = 9;
const int tast = 7;
const int cal = 6;

char wort[] = "a";      // Wort eingeben
int size = 0;
int resize = 1;				 // Anzahl der Buchstaben


void setup() {
  pinMode (2, OUTPUT);
  pinMode (8, OUTPUT);
  pinMode (7, INPUT);
  pinMode (9, OUTPUT);
  pinMode (6, INPUT);


}

void loop() {


  if (digitalRead(cal) == HIGH) {
    digitalWrite (starter2 , HIGH);

    delay(1000);

    digitalWrite (starter2, LOW);
  }

  if (digitalRead(tast) == HIGH) {
    digitalWrite(starter, HIGH);
    if (wort[size] == 'a') {
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, LOW);
      delay(1000);
    }
    if (wort[size] == 'b') {
      digitalWrite(l, LOW);
      delay(1000);
      digitalWrite(l, LOW);
      delay(1000);
      digitalWrite(l, LOW);
      delay(1000);
      digitalWrite(l, LOW);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
    }
    if (wort[size] == 'c') {
      digitalWrite(l, LOW);
      delay(1000);
      digitalWrite(l, LOW);
      delay(1000);
      digitalWrite(l, LOW);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, LOW);
      delay(1000);
    }
    if (wort[size] == 'd') {
      digitalWrite(l, LOW);
      delay(1000);
      digitalWrite(l, LOW);
      delay(1000);
      digitalWrite(l, LOW);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
    }
    if (wort[size] == 'e') {
      digitalWrite(l, LOW);
      delay(1000);
      digitalWrite(l, LOW);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, LOW);
      delay(1000);
      digitalWrite(l, LOW);
      delay(1000);
    }
    if (wort[size] == 'f') {
      digitalWrite(l, LOW);
      delay(1000);
      digitalWrite(l, LOW);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, LOW);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
    }
    if (wort[size] == 'g') {
      digitalWrite(l, LOW);
      delay(1000);
      digitalWrite(l, LOW);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, LOW);
      delay(1000);
    }
    if (wort[size] == 'h') {
      digitalWrite(l, LOW);
      delay(1000);
      digitalWrite(l, LOW);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
    }
    if (wort[size] == 'i') {
      digitalWrite(l, LOW);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, LOW);
      delay(1000);
      digitalWrite(l, LOW);
      delay(1000);
      digitalWrite(l, LOW);
      delay(1000);
    }
    if (wort[size] == 'j') {
      digitalWrite(l, LOW);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, LOW);
      delay(1000);
      digitalWrite(l, LOW);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
    }
    if (wort[size] == 'k') {
      digitalWrite(l, LOW);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, LOW);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, LOW);
      delay(1000);
    }
    if (wort[size] == 'l') {
      digitalWrite(l, LOW);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, LOW);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
    }
    if (wort[size] == 'm') {
      digitalWrite(l, LOW);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, LOW);
      delay(1000);
      digitalWrite(l, LOW);
      delay(1000);
    }
    if (wort[size] == 'n') {
      digitalWrite(l, LOW);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, LOW);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
    }
    if (wort[size] == 'o') {
      digitalWrite(l, LOW);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, LOW);
      delay(1000);
    }
    if (wort[size] == 'p') {
      digitalWrite(l, LOW);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
    }
    if (wort[size] == 'q') {
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, LOW);
      delay(1000);
      digitalWrite(l, LOW);
      delay(1000);
      digitalWrite(l, LOW);
      delay(1000);
      digitalWrite(l, LOW);
      delay(1000);
    }
    if (wort[size] == 'r') {
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, LOW);
      delay(1000);
      digitalWrite(l, LOW);
      delay(1000);
      digitalWrite(l, LOW);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
    }
    if (wort[size] == 's') {
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, LOW);
      delay(1000);
      digitalWrite(l, LOW);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, LOW);
      delay(1000);
    }
    if (wort[size] == 't') {
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, LOW);
      delay(1000);
      digitalWrite(l, LOW);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
    }
    if (wort[size] == 'u') {
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, LOW);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, LOW);
      delay(1000);
      digitalWrite(l, LOW);
      delay(1000);
    }
    if (wort[size] == 'v') {
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, LOW);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, LOW);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
    }
    if (wort[size] == 'w') {
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, LOW);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, LOW);
      delay(1000);
    }
    if (wort[size] == 'x') {
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, LOW);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
    }
    if (wort[size] == 'y') {
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, LOW);
      delay(1000);
      digitalWrite(l, LOW);
      delay(1000);
      digitalWrite(l, LOW);
      delay(1000);
    }
    if (wort[size] == 'z') {
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, LOW);
      delay(1000);
      digitalWrite(l, LOW);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
    }
    if (wort[size] == '.') {
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, LOW);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, LOW);
      delay(1000);
    }
    if (wort[size] == ',') {
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, LOW);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
    }
    if (wort[size] == '!') {
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, LOW);
      delay(1000);
      digitalWrite(l, LOW);
      delay(1000);
    }
    if (wort[size] == '?') {
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, LOW);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
    }
    if (wort[size] == ' ') {
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);
      digitalWrite(l, HIGH);
      delay(1000);

    }





    size = size + 1;
    if (size == resize) {
      size = 0;
    }
    delay(500);
  }
  if (digitalRead(tast) == LOW) {
    digitalWrite(starter, LOW);
  }

}
