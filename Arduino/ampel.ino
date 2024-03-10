int calibrate;
void setup()
{
    pinMode(2, OUTPUT); //Output 1 -> Ampel 1
    pinMode(3, OUTPUT); //Output 2 -> Ampel 1
    pinMode(5, OUTPUT); //Output 1 -> Ampel 2
    pinMode(6, OUTPUT); //Output 2 -> Ampel 2
    pinMode(A0, INPUT); //Input Photoresistor 
    calibrate = analogRead(A0); //Kalibrierung des Photoresistors
}

void loop()
{
    if (analogRead(A0)> calibrate + 50) //Wenn mehr Licht auf Photoresistor fällt wie bei der Kalibration: 
    {
        digitalWrite(2, HIGH);  //Alle Kombinationen der Ampel mit entsprechenden delay durchwandern
        digitalWrite(3, HIGH);
        digitalWrite(5, HIGH);
        digitalWrite(6, HIGH);
        delay(1000);
        digitalWrite(2, HIGH);
        digitalWrite(3, LOW);
        digitalWrite(5, HIGH);
        digitalWrite(6, HIGH);
        delay(5000);
        digitalWrite(2, LOW);
        digitalWrite(3, HIGH);
        digitalWrite(5, HIGH);
        digitalWrite(6, HIGH);
        delay(1000);
        digitalWrite(2, HIGH);
        digitalWrite(3, HIGH);
        digitalWrite(5, HIGH);
        digitalWrite(6, HIGH);
        delay(1000);
        digitalWrite(2, HIGH);
        digitalWrite(3, HIGH);
        digitalWrite(5, HIGH);
        digitalWrite(6, LOW);
        delay(5000);
        digitalWrite(2, HIGH);
        digitalWrite(3, HIGH);
        digitalWrite(5, LOW);
        digitalWrite(6, HIGH);
        delay(1000);
    }
    else    //Falls weniger oder gleich viel Licht auf Sensor fällt
    {
        digitalWrite(2, LOW);   //Gelbe LED´s blinken mit delay
        digitalWrite(3, HIGH);
        digitalWrite(5, LOW);
        digitalWrite(6, HIGH);
        delay(1000);
        digitalWrite(2, LOW);
        digitalWrite(3, LOW);
        digitalWrite(5, LOW);
        digitalWrite(6, LOW);
        delay(1000);
    }
}