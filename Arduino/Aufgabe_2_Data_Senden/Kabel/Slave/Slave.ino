int L1 = 2;                                                 //Pin´s für Leitungen
int L2 = 3;
int L3 = 4;
int L4 = 5;
int L5 = 6;
int starter = 8;                                            //Pin des Synchonisierungskabel


void setup()
{
  pinMode (2, INPUT);                                       //PinModes für Leitungen + Synchronisierungskabel
  pinMode (3, INPUT);
  pinMode (4, INPUT);
  pinMode (5, INPUT);
  pinMode (6, INPUT);
  pinMode (8, INPUT);
  Serial.begin(9600);                                       //Frequenz des Seriellen Monitors (9600 Baud)
}

void loop() {
  if (digitalRead(starter) == HIGH) {                       //Wenn des Synchonisierungskabel HIGH ist: 
    if (digitalRead(L1) == LOW) {                           //Wenn Leitung 1 LOW ist:
      if (digitalRead(L2) == LOW) {                         //Wenn Leitung 2 LOW ist:
        if (digitalRead(L3) == LOW) {                       //Wenn Leitung 3 LOW ist:
          if (digitalRead(L4) == LOW) {                     //Wenn Leitung 4 LOW ist:
            if (digitalRead(L5) == LOW) {                   //Wenn Leitung 5 LOW ist:
                                                            //Passiert nichts, da es keine gültige Kombination ist
            }
            else if (digitalRead(L5) == HIGH) {             //Wenn Leitung 5 hingegen HIGH ist:
              Serial.println('b');                          //Wird b im Seriellen Monitor ausgegeben
            }
          }
          else if (digitalRead(L4) == HIGH) {               //Wenn Leitung 4 hingegen HIGH ist:
            if (digitalRead(L5) == LOW) {                   //Wenn Leitung 5 LOW ist:
              Serial.println('c');                          //Wird c ausgegeben
            }
            else if (digitalRead(L5) == HIGH) {             //Wenn Leitung 5 hingegen HIGH ist:
              Serial.println('d');                          //Wird d ausgegeben
            }                                               //Wiederholen bis alle Kombinationen abgefragt sind (64 Abfragen) +500 delay
            
          }                                                 //Ich habe mich dazu entschieden den Rest des Codes nicht 
        }                                                   //zu kommentieren, da es 250 Zeilen mit identischem Code ist.
        else if (digitalRead(L3) == HIGH) {                 //Die Datei des Codes ist im Anhang da sie zu viele Seiten 
          if (digitalRead(L4) == LOW) {                     //Im Protokoll einnehmen würde.
  
            if (digitalRead(L5) == LOW) {
              Serial.println('e');
            }
            else if (digitalRead(L5) == HIGH) {
              Serial.println('f');
            }
          }


          else if (digitalRead(L4) == HIGH) {
            if (digitalRead(L5) == LOW) {
              Serial.println('g');
            }
            else if (digitalRead(L5) == HIGH) {
              Serial.println('h');
            }
          }
        }
      }
      else if (digitalRead(L2) == HIGH) {
        if (digitalRead(L3) == LOW) {


          if (digitalRead(L4) == LOW) {

            if (digitalRead(L5) == LOW) {
              Serial.println('i');
            }
            else if (digitalRead(L5) == HIGH) {
              Serial.println('j');
            }
          }


          else if (digitalRead(L4) == HIGH) {
            if (digitalRead(L5) == LOW) {
              Serial.println('k');
            }
            else if (digitalRead(L5) == HIGH) {
              Serial.println('l');
            }
          }
        }
        else if (digitalRead(L3) == HIGH) {
          if (digitalRead(L4) == LOW) {

            if (digitalRead(L5) == LOW) {
              Serial.println('m');
            }
            else if (digitalRead(L5) == HIGH) {
              Serial.println('n');
            }
          }


          else if (digitalRead(L4) == HIGH) {
            if (digitalRead(L5) == LOW) {
              Serial.println('o');
            }
            else if (digitalRead(L5) == HIGH) {
              Serial.println('p');
            }
          }
        }
      }
    }
    if (digitalRead(L1) == HIGH) {
      if (digitalRead(L2) == LOW) {
        if (digitalRead(L3) == LOW) {


          if (digitalRead(L4) == LOW) {

            if (digitalRead(L5) == LOW) {
              Serial.println('q');
            }
            else if (digitalRead(L5) == HIGH) {
              Serial.println('r');
            }
          }


          else if (digitalRead(L4) == HIGH) {
            if (digitalRead(L5) == LOW) {
              Serial.println('s');
            }
            else if (digitalRead(L5) == HIGH) {
              Serial.println('t');
            }
          }
        }
        else if (digitalRead(L3) == HIGH) {
          if (digitalRead(L4) == LOW) {

            if (digitalRead(L5) == LOW) {
              Serial.println('u');
            }
            else if (digitalRead(L5) == HIGH) {
              Serial.println('v');
            }
          }


          else if (digitalRead(L4) == HIGH) {
            if (digitalRead(L5) == LOW) {
              Serial.println('w');
            }
            else if (digitalRead(L5) == HIGH) {
              Serial.println('x');
            }
          }
        }
      }
      else if (digitalRead(L2) == HIGH) {
        if (digitalRead(L3) == LOW) {


          if (digitalRead(L4) == LOW) {

            if (digitalRead(L5) == LOW) {
              Serial.println('y');
            }
            else if (digitalRead(L5) == HIGH) {
              Serial.println('z');
            }
          }


          else if (digitalRead(L4) == HIGH) {
            if (digitalRead(L5) == LOW) {
              Serial.println('.');
            }
            else if (digitalRead(L5) == HIGH) {
              Serial.println(',');
            }
          }
        }
        else if (digitalRead(L3) == HIGH) {
          if (digitalRead(L4) == LOW) {

            if (digitalRead(L5) == LOW) {
              Serial.println('!');
            }
            else if (digitalRead(L5) == HIGH) {
              Serial.println('?');
            }
          }


          else if (digitalRead(L4) == HIGH) {
            if (digitalRead(L5) == LOW) {
              Serial.println('a');
            }
            else if (digitalRead(L5) == HIGH) {
              Serial.println(' ');
            }
          }
        }
      }
    }
    delay(500);
  }

}
