int l1 = 4;
int l2 = 5;
int l3 = 6;
int l4 = 7;
int l5 = 8;
int l6 = 9;
int l7 = 10;
int l8 = 11;
String zahl = "";
int num = 0;
int bin1 = 0;
int bin2 = 0;
int bin3 = 0;
int bin4 = 0;
int bin5 = 0;
int bin6 = 0;
int bin7 = 0;
int bin8 = 0;




void setup() {
  pinMode (l1, OUTPUT);
  pinMode (l2, OUTPUT);
  pinMode (l3, OUTPUT);
  pinMode (l4, OUTPUT);
  pinMode (l5, OUTPUT);
  pinMode (l6, OUTPUT);
  pinMode (l7, OUTPUT);
  pinMode (l8, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  Serial.println("Gib eine Zahl von 1 - 255 ein");
  while (Serial.available() == 0) {}
  zahl = Serial.readString();
  num = zahl.toInt();

  bin8 = num % 2;
  num = num / 2;
  bin7 = num % 2,
  num = num / 2;
  bin6 = num % 2;
  num = num / 2;
  bin5 = num % 2;
  num = num / 2;
  bin4 = num % 2;
  num = num / 2;
  bin3 = num % 2;
  num = num / 2;
  bin2 = num % 2;
  num = num / 2;
  bin1 = num % 2;

  Serial.println ("Ergebnis: ");
  Serial.print (bin1);
  Serial.print (bin2);
  Serial.print (bin3);
  Serial.print (bin4);
  Serial.print (bin5);
  Serial.print (bin6);
  Serial.print (bin7);
  Serial.print (bin8);
  Serial.println(" ");

  if(bin1 == 1){
    digitalWrite(l8,HIGH);
  }
  else if (bin1 == 0){
    digitalWrite(l8,LOW);
  }
  if(bin2 == 1){
    digitalWrite(l7,HIGH);
  }
  else if (bin2 == 0){
    digitalWrite(l7,LOW);
  }
  if(bin3 == 1){
    digitalWrite(l6,HIGH);
  }
  else if (bin3 == 0){
    digitalWrite(l6,LOW);
  }
  if(bin4 == 1){
    digitalWrite(l5,HIGH);
  }
  else if (bin4 == 0){
    digitalWrite(l5,LOW);
  }
  if(bin5 == 1){
    digitalWrite(l4,HIGH);
  }
  else if (bin5 == 0){
    digitalWrite(l4,LOW);
  }
  if(bin6 == 1){
    digitalWrite(l3,HIGH);
  }
  else if (bin6 == 0){
    digitalWrite(l3,LOW);
  }
  if(bin7 == 1){
    digitalWrite(l2,HIGH);
  }
  else if (bin7 == 0){
    digitalWrite(l2,LOW);
  }
  if(bin8 == 1){
    digitalWrite(l1,HIGH);
  }
  else if (bin8 == 0){
    digitalWrite(l1,LOW);
  }
  
  


}
