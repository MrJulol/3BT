const int photocell = A0;               //pin für Lichtsensor
const int l = 2;                        //pin für LED

int slave1 = 0;                         //Speicherorte des Slaves
int slave2 = 0;
int slave3 = 0;
int slave4 = 0;
int slave5 = 0;

const char wort[] = "e";                //Wort eingeben
int size = 0;                           //start[size] des Wortes
const int resize = 1;                   //Anzahl der Buchstaben im Wort (inklusive Leerzeichen)




void setup() {
  pinMode(photocell, INPUT);            //pin Photocell
  pinMode(l, OUTPUT);                   //pin LED


  Serial.begin(9600);                   //Serieller Monitor
}

int slavefunction() {                   //Funktion slavefunction()
  if (analogRead(photocell) > 1000) {   //Wenn der Wert des Lichtsensors > 1000 ist:
    return 1;                           //Wird 1 zurückgeben
  }
  if (analogRead(photocell) < 1000) {   //Wenn der WErt < 1000 ist:
    return 0;                           //Wird 0 zurückgeben
  }
}

void ask() {                             //Funktion ask()
  if (slave1 == 0) {                     //wenn slave1 = 0;
    if (slave2 == 0) {                   //wenn slave2 = 0;
      if (slave3 == 0) {                 //wenn slave3 = 0;
        if (slave4 == 0) {               //wenn slave4 = 0;
          if (slave5 = 0) {              //wenn slave5 = 0;
            //wird nichts ausgegeben da es keine Kombination ist
          }
          else if (slave5 == 1) {       //wenn slave5 = 1;
            digitalWrite('b');          //Wird b ausgegeben
            return;                     //und zum Loop zurückgekehrt
          }
        }
        else if (slave4 == 1) {         //wenn slave4 = 1;
          if (slave5 == 0) {            //wenn slave5 = 0;
            digitalWrite('c');          //wird c ausgegeben
            return;                     //und zum Loop zurückgekehrt
          }
          else if (slave5 == 1) {       //Die selben abfragen bis alle 32 Abgefragt sind
            digitalWrite('d');
            return;
          }
        }
      }
      else if (slave3 == 1) {
        if (slave4 == 0) {
          if (slave5 = 0) {
            digitalWrite('e');
            return;
          }
          else if (slave5 == 1) {
            digitalWrite('f');
            return;
          }
        }
        else if (slave4 == 1) {
          if (slave5 == 0) {
            digitalWrite('g');
            return;
          }
          else if (slave5 == 1) {
            digitalWrite('h');
            return;
          }
        }
      }
    }
    else if (slave2 = 1) {
      if (slave3 == 0) {
        if (slave4 == 0) {
          if (slave5 = 0) {
            digitalWrite('i');
            return;
          }
          else if (slave5 == 1) {
            digitalWrite('j');
            return;
          }
        }
        else if (slave4 == 1) {
          if (slave5 == 0) {
            digitalWrite('k');
            return;
          }
          else if (slave5 == 1) {
            digitalWrite('l');
            return;
          }
        }
      }
      else if (slave3 == 1) {
        if (slave4 == 0) {
          if (slave5 = 0) {
            digitalWrite('m');
            return;
          }
          else if (slave5 == 1) {
            digitalWrite('n');
            return;
          }
        }
        else if (slave4 == 1) {
          if (slave5 == 0) {
            digitalWrite('o');
            return;
          }
          else if (slave5 == 1) {
            digitalWrite('p');
            return;
          }
        }
      }
    }
  }
  else if (slave1 == 1) {
    if (slave2 == 0) {
      if (slave3 == 0) {
        if (slave4 == 0) {
          if (slave5 = 0) {
            digitalWrite('q');
            return;
          }
          else if (slave5 == 1) {
            digitalWrite('r');
            return;
          }
        }
        else if (slave4 == 1) {
          if (slave5 == 0) {
            digitalWrite('s');
            return;
          }
          else if (slave5 == 1) {
            digitalWrite('t');
            return;
          }
        }
      }
      else if (slave3 == 1) {
        if (slave4 == 0) {
          if (slave5 = 0) {
            digitalWrite('u');
            return;
          }
          else if (slave5 == 1) {
            digitalWrite('v');
            return;
          }
        }
        else if (slave4 == 1) {
          if (slave5 == 0) {
            digitalWrite('w');
            return;
          }
          else if (slave5 == 1) {
            digitalWrite('x');
            return;
          }
        }
      }
    }
    else if (slave2 = 1) {
      if (slave3 == 0) {
        if (slave4 == 0) {
          if (slave5 = 0) {
            digitalWrite('y');
            return;
          }
          else if (slave5 == 1) {
            digitalWrite('z');
            return;
          }
        }
        else if (slave4 == 1) {
          if (slave5 == 0) {
            digitalWrite('.');
            return;
          }
          else if (slave5 == 1) {
            digitalWrite(',');
            return;
          }
        }
      }
      else if (slave3 == 1) {
        if (slave4 == 0) {
          if (slave5 = 0) {
            digitalWrite('!');
            return;
          }
          else if (slave5 == 1) {
            digitalWrite('?');
            return;
          }
        }
        else if (slave4 == 1) {
          if (slave5 == 0) {
            digitalWrite('a');
            return;
          }
          else if (slave5 == 1) {
            digitalWrite(' ');
            return;
          }
        }
      }
    }
  }

  void loop() {                             //void loop()
    if (wort[size] == 'a') {                //wenn wort an der stelle size = a;
      digitalWrite(l, HIGH);                //Led auf den gewählten Status setzen
      slave1 = slavefunction();             //Funktion slavefunction() aufgerufen und der zurückgegebene Wert in slave1 speichern.
      delay(500);                           //delay von 500 um Fehler zu vermeiden
      digitalWrite(l, HIGH);                //Led auf den gewählten Status setzen
      slave2 = slavefunction();             //Funktion slavefunction() aufgerufen und der zurückgegebene Wert in slave2 speichern.
      delay(500);                           //delay von 500 um Fehler zu vermeiden
      digitalWrite(l, HIGH);                //Led auf den gewählten Status setzen
      slave3 = slavefunction();             //Funktion slavefunction() aufgerufen und der zurückgegebene Wert in slave3 speichern.
      delay(500);                           //delay von 500 um Fehler zu vermeiden
      digitalWrite(l, HIGH);                //Led auf den gewählten Status setzen
      slave4 = slavefunction();             //Funktion slavefunction() aufgerufen und der zurückgegebene Wert in slave4 speichern.
      delay(500);                           //delay von 500 um Fehler zu vermeiden
      digitalWrite(l, LOW);                 //Led auf den gewählten Status setzen
      slave5 = slavefunction();             //Funktion slavefunction() aufgerufen und der zurückgegebene Wert in slave5 speichern.
      delay(500);                           //delay von 500 um Fehler zu vermeiden
    }


                                            //Für jede Kombination wiederholen      



    
    if (wort[size] == 'b') {
      digitalWrite(l, LOW);                 
      digitalWrite(l, LOW);
      digitalWrite(l, LOW);
      digitalWrite(l, LOW);
      digitalWrite(l, HIGH);
    }
    if (wort[size] == 'c') {
      digitalWrite(l, LOW);
      digitalWrite(l, LOW);
      digitalWrite(l, LOW);
      digitalWrite(l, HIGH);
      digitalWrite(l, LOW);
    }
    if (wort[size] == 'd') {
      digitalWrite(l, LOW);
      digitalWrite(l, LOW);
      digitalWrite(l, LOW);
      digitalWrite(l, HIGH);
      digitalWrite(l, HIGH);
    }
    if (wort[size] == 'e') {
      digitalWrite(l, LOW);
      digitalWrite(l, LOW);
      digitalWrite(l, HIGH);
      digitalWrite(l, LOW);
      digitalWrite(l, LOW);
    }
    if (wort[size] == 'f') {
      digitalWrite(l, LOW);
      digitalWrite(l, LOW);
      digitalWrite(l, HIGH);
      digitalWrite(l, LOW);
      digitalWrite(l, HIGH);
    }
    if (wort[size] == 'g') {
      digitalWrite(l, LOW);
      digitalWrite(l, LOW);
      digitalWrite(l, HIGH);
      digitalWrite(l, HIGH);
      digitalWrite(l, LOW);
    }
    if (wort[size] == 'h') {
      digitalWrite(l, LOW);
      digitalWrite(l, LOW);
      digitalWrite(l, HIGH);
      digitalWrite(l, HIGH);
      digitalWrite(l, HIGH);
    }
    if (wort[size] == 'i') {
      digitalWrite(l, LOW);
      digitalWrite(l, HIGH);
      digitalWrite(l, LOW);
      digitalWrite(l, LOW);
      digitalWrite(l, LOW);
    }
    if (wort[size] == 'j') {
      digitalWrite(l, LOW);
      digitalWrite(l, HIGH);
      digitalWrite(l, LOW);
      digitalWrite(l, LOW);
      digitalWrite(l, HIGH);
    }
    if (wort[size] == 'k') {
      digitalWrite(l, LOW);
      digitalWrite(l, HIGH);
      digitalWrite(l, LOW);
      digitalWrite(l, HIGH);
      digitalWrite(l, LOW);
    }
    if (wort[size] == 'l') {
      digitalWrite(l, LOW);
      digitalWrite(l, HIGH);
      digitalWrite(l, LOW);
      digitalWrite(l, HIGH);
      digitalWrite(l, HIGH);
    }
    if (wort[size] == 'm') {
      digitalWrite(l, LOW);
      digitalWrite(l, HIGH);
      digitalWrite(l, HIGH);
      digitalWrite(l, LOW);
      digitalWrite(l, LOW);
    }
    if (wort[size] == 'n') {
      digitalWrite(l, LOW);
      digitalWrite(l, HIGH);
      digitalWrite(l, HIGH);
      digitalWrite(l, LOW);
      digitalWrite(l, HIGH);
    }
    if (wort[size] == 'o') {
      digitalWrite(l, LOW);
      digitalWrite(l, HIGH);
      digitalWrite(l, HIGH);
      digitalWrite(l, HIGH);
      digitalWrite(l, LOW);
    }
    if (wort[size] == 'p') {
      digitalWrite(l, LOW);
      digitalWrite(l, HIGH);
      digitalWrite(l, HIGH);
      digitalWrite(l, HIGH);
      digitalWrite(l, HIGH);
    }
    if (wort[size] == 'q') {
      digitalWrite(l, HIGH);
      digitalWrite(l, LOW);
      digitalWrite(l, LOW);
      digitalWrite(l, LOW);
      digitalWrite(l, LOW);
    }
    if (wort[size] == 'r') {
      digitalWrite(l, HIGH);
      digitalWrite(l, LOW);
      digitalWrite(l, LOW);
      digitalWrite(l, LOW);
      digitalWrite(l, HIGH);
    }
    if (wort[size] == 's') {
      digitalWrite(l, HIGH);
      digitalWrite(l, LOW);
      digitalWrite(l, LOW);
      digitalWrite(l, HIGH);
      digitalWrite(l, LOW);
    }
    if (wort[size] == 't') {
      digitalWrite(l, HIGH);
      digitalWrite(l, LOW);
      digitalWrite(l, LOW);
      digitalWrite(l, HIGH);
      digitalWrite(l, HIGH);
    }
    if (wort[size] == 'u') {
      digitalWrite(l, HIGH);
      digitalWrite(l, LOW);
      digitalWrite(l, HIGH);
      digitalWrite(l, LOW);
      digitalWrite(l, LOW);
    }
    if (wort[size] == 'v') {
      digitalWrite(l, HIGH);
      digitalWrite(l, LOW);
      digitalWrite(l, HIGH);
      digitalWrite(l, LOW);
      digitalWrite(l, HIGH);
    }
    if (wort[size] == 'w') {
      digitalWrite(l, HIGH);
      digitalWrite(l, LOW);
      digitalWrite(l, HIGH);
      digitalWrite(l, HIGH);
      digitalWrite(l, LOW);
    }
    if (wort[size] == 'x') {
      digitalWrite(l, HIGH);
      digitalWrite(l, LOW);
      digitalWrite(l, HIGH);
      digitalWrite(l, HIGH);
      digitalWrite(l, HIGH);
    }
    if (wort[size] == 'y') {
      digitalWrite(l, HIGH);
      digitalWrite(l, HIGH);
      digitalWrite(l, LOW);
      digitalWrite(l, LOW);
      digitalWrite(l, LOW);
    }
    if (wort[size] == 'z') {
      digitalWrite(l, HIGH);
      digitalWrite(l, HIGH);
      digitalWrite(l, LOW);
      digitalWrite(l, LOW);
      digitalWrite(l, HIGH);
    }
    if (wort[size] == '.') {
      digitalWrite(l, HIGH);
      digitalWrite(l, HIGH);
      digitalWrite(l, LOW);
      digitalWrite(l, HIGH);
      digitalWrite(l, LOW);
    }
    if (wort[size] == ',') {
      digitalWrite(l, HIGH);
      digitalWrite(l, HIGH);
      digitalWrite(l, LOW);
      digitalWrite(l, HIGH);
      digitalWrite(l, HIGH);
    }
    if (wort[size] == '!') {
      digitalWrite(l, HIGH);
      digitalWrite(l, HIGH);
      digitalWrite(l, HIGH);
      digitalWrite(l, LOW);
      digitalWrite(l, LOW);
    }
    if (wort[size] == '?') {
      digitalWrite(l, HIGH);
      digitalWrite(l, HIGH);
      digitalWrite(l, HIGH);
      digitalWrite(l, LOW);
      digitalWrite(l, HIGH);
    }
    if (wort[size] == ' ') {
      digitalWrite(l, HIGH);
      digitalWrite(l, HIGH);
      digitalWrite(l, HIGH);
      digitalWrite(l, HIGH);
      digitalWrite(l, HIGH);
    }

    size = size + 1;                        //Size wird um 1 erhöht um nächste stelle des Wortes abzurufen
    if (size = resize) {                    //wenn size = size ist:
      size = 0;                             //size wird auf 0 gesetzt und Programm startet neu
    }
    ask();                                  //Funktion ask() wird aufgerufen

    slave1 = 0;                             //variablen werden zurückgesetzt
    slave2 = 0;
    slave3 = 0;
    slave4 = 0;
    slave5 = 0;
  }                                         //Ende des Void Loop()
