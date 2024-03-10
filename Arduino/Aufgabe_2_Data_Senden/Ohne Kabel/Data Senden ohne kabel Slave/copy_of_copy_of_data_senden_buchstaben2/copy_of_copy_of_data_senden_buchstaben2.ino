
const int sensor = A0;
int lightCal = 0;
int lightVal = 0;
const int starter = 8;
const int starter2 = 7;


void setup()
{
  pinMode (8, INPUT);
  pinMode (7, INPUT);
  pinMode (A0, INPUT);
  Serial.begin(9600);
  
}

void loop() {

  if (digitalRead(starter2) == HIGH) {
    lightCal = analogRead(sensor);
  }

  if (digitalRead(starter) == HIGH) {
    lightVal = analogRead(sensor);
    if (lightVal < lightCal + 25) {
      delay(1000);
      lightVal = analogRead(sensor);
      if (lightVal < lightCal + 25) {
        delay(1000);
        lightVal = analogRead(sensor);
        if (lightVal < lightCal + 25) {
          delay(1000);
          lightVal = analogRead(sensor);

          if (lightVal < lightCal + 25) {
            delay(1000);
            lightVal = analogRead(sensor);
            if (lightVal < lightCal + 25) {
              delay(1000);
              lightVal = analogRead(sensor);

            }
            else if (lightVal > lightCal + 25) {
              Serial.println('b');
              delay(1000);
              lightVal = analogRead(sensor);
            }
          }


          else if (lightVal > lightCal + 25) {
            delay(1000);
            lightVal = analogRead(sensor);
            if (lightVal < lightCal + 25) {
              Serial.println('c');
              delay(1000);
              lightVal = analogRead(sensor);
            }
            else if (lightVal > lightCal + 25) {
              Serial.println('d');
              delay(1000);
              lightVal = analogRead(sensor);
            }
          }
        }
        else if (lightVal > lightCal + 25) {
          delay(1000);
          lightVal = analogRead(sensor);
          if (lightVal < lightCal + 25) {
            delay(1000);
            lightVal = analogRead(sensor);

            if (lightVal < lightCal + 25) {
              Serial.println('e');
              delay(1000);
              lightVal = analogRead(sensor);
            }
            else if (lightVal > lightCal + 25) {
              Serial.println('f');
              delay(1000);
              lightVal = analogRead(sensor);
            }
          }


          else if (lightVal > lightCal + 25) {
            delay(1000);
            lightVal = analogRead(sensor);
            if (lightVal < lightCal + 25) {
              Serial.println('g');
              delay(1000);
              lightVal = analogRead(sensor);
            }
            else if (lightVal > lightCal + 25) {
              Serial.println('h');
              delay(1000);
              lightVal = analogRead(sensor);
            }
          }
        }
      }
      else if (lightVal > lightCal + 25) {
        delay(1000);
        lightVal = analogRead(sensor);
        if (lightVal < lightCal + 25) {
          delay(1000);
          lightVal = analogRead(sensor);


          if (lightVal < lightCal + 25) {
            delay(1000);
            lightVal = analogRead(sensor);

            if (lightVal < lightCal + 25) {
              Serial.println('i');
              delay(1000);
              lightVal = analogRead(sensor);

            }
            else if (lightVal > lightCal + 25) {
              Serial.println('j');
              delay(1000);
              lightVal = analogRead(sensor);
            }
          }


          else if (lightVal > lightCal + 25) {
            delay(1000);
            lightVal = analogRead(sensor);
            if (lightVal < lightCal + 25) {
              Serial.println('k');
              delay(1000);
              lightVal = analogRead(sensor);
            }
            else if (lightVal > lightCal + 25) {
              Serial.println('l');
              delay(1000);
              lightVal = analogRead(sensor);
            }
          }
        }
        else if (lightVal > lightCal + 25) {
          delay(1000);
          lightVal = analogRead(sensor);
          if (lightVal < lightCal + 25) {
            delay(1000);
            lightVal = analogRead(sensor);

            if (lightVal < lightCal + 25) {
              Serial.println('m');
              delay(1000);
              lightVal = analogRead(sensor);
            }
            else if (lightVal > lightCal + 25) {
              Serial.println('n');
              delay(1000);
              lightVal = analogRead(sensor);
            }
          }


          else if (lightVal > lightCal + 25) {
            delay(1000);
            lightVal = analogRead(sensor);
            if (lightVal < lightCal + 25) {
              Serial.println('o');
              delay(1000);
              lightVal = analogRead(sensor);
            }
            else if (lightVal > lightCal + 25) {
              Serial.println('p');
              delay(1000);
              lightVal = analogRead(sensor);
            }
          }
        }
      }
    }
    if (lightVal > lightCal + 25) {
      delay(1000);
      lightVal = analogRead(sensor);
      if (lightVal < lightCal + 25) {
        delay(1000);
        lightVal = analogRead(sensor);
        if (lightVal < lightCal + 25) {
          delay(1000);
          lightVal = analogRead(sensor);


          if (lightVal < lightCal + 25) {
            delay(1000);
            lightVal = analogRead(sensor);

            if (lightVal < lightCal + 25) {
              Serial.println('q');
              delay(1000);
              lightVal = analogRead(sensor);
            }
            else if (lightVal > lightCal + 25) {
              Serial.println('r');
              delay(1000);
              lightVal = analogRead(sensor);
            }
          }


          else if (lightVal > lightCal + 25) {
            delay(1000);
            lightVal = analogRead(sensor);
            if (lightVal < lightCal + 25) {
              Serial.println('s');
              delay(1000);
              lightVal = analogRead(sensor);

            }
            else if (lightVal > lightCal + 25) {
              Serial.println('t');
              delay(1000);
              lightVal = analogRead(sensor);
            }
          }
        }
        else if (lightVal > lightCal + 25) {
          delay(1000);
          lightVal = analogRead(sensor);
          if (lightVal < lightCal + 25) {
            delay(1000);
            lightVal = analogRead(sensor);

            if (lightVal < lightCal + 25) {
              Serial.println('u');
              delay(1000);
              lightVal = analogRead(sensor);
            }
            else if (lightVal > lightCal + 25) {
              Serial.println('v');
              delay(1000);
              lightVal = analogRead(sensor);
            }
          }


          else if (lightVal > lightCal + 25) {
            delay(1000);
            lightVal = analogRead(sensor);
            if (lightVal < lightCal + 25) {
              Serial.println('w');
              delay(1000);
              lightVal = analogRead(sensor);
            }
            else if (lightVal > lightCal + 25) {
              Serial.println('x');
              delay(1000);
              lightVal = analogRead(sensor);
            }
          }
        }
      }
      else if (lightVal > lightCal + 25) {
        delay(1000);
        lightVal = analogRead(sensor);
        if (lightVal < lightCal + 25) {
          delay(1000);
          lightVal = analogRead(sensor);


          if (lightVal < lightCal + 25) {
            delay(1000);
            lightVal = analogRead(sensor);

            if (lightVal < lightCal + 25) {
              Serial.println('y');
              delay(1000);
              lightVal = analogRead(sensor);
            }
            else if (lightVal > lightCal + 25) {
              Serial.println('z');
              delay(1000);
              lightVal = analogRead(sensor);
            }
          }


          else if (lightVal > lightCal + 25) {
            delay(1000);
            lightVal = analogRead(sensor);
            if (lightVal < lightCal + 25) {
              Serial.println('.');
              delay(1000);
              lightVal = analogRead(sensor);
            }
            else if (lightVal > lightCal + 25) {
              Serial.println(',');
              delay(1000);
              lightVal = analogRead(sensor);
            }
          }
        }
        else if (lightVal > lightCal + 25) {
          delay(1000);
          lightVal = analogRead(sensor);
          if (lightVal < lightCal + 25) {
            delay(1000);
            lightVal = analogRead(sensor);

            if (lightVal < lightCal + 25) {
              Serial.println('!');
              delay(1000);
              lightVal = analogRead(sensor);
            }
            else if (lightVal > lightCal + 25) {
              Serial.println('?');
              delay(1000);
              lightVal = analogRead(sensor);
            }
          }


          else if (lightVal > lightCal + 25) {
            delay(1000);
            lightVal = analogRead(sensor);
            if (lightVal < lightCal + 25) {
              Serial.println('a');
              delay(1000);
              lightVal = analogRead(sensor);
            }
            else if (lightVal > lightCal + 25) {
              Serial.println(' ');
              delay(1000);
              lightVal = analogRead(sensor);
            }
          }
        }
      }
    }
    delay(1000);
  }



}
