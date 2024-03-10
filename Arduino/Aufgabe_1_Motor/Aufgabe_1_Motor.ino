int Motor = 0;

void setup() {
  pinMode (10,OUTPUT);
  pinMode (6,INPUT);
  pinMode (5,OUTPUT);
  pinMode (4,OUTPUT);
  pinMode (3,OUTPUT);
  pinMode (2,OUTPUT);
}

void loop() {

  
 if (digitalRead(6)==HIGH){
      Motor = Motor + 1;
      delay(1000);
 }

  if (Motor == 0){
      analogWrite (10,0);
      digitalWrite(5,LOW);
      digitalWrite(4,LOW);
      digitalWrite(3,LOW);
      digitalWrite(2,LOW);
  }

  if (Motor == 1){
      analogWrite(10,64);
      digitalWrite(5,HIGH);
  }

  if (Motor == 2){
      analogWrite(10,127);
      digitalWrite(4,HIGH);
  }

  if (Motor == 3){
      analogWrite(10,191);
      digitalWrite(3,HIGH);
  } 
  if (Motor == 4){
      analogWrite(10,255);
      digitalWrite(2,HIGH); 
  }

  if (Motor == 5){
      Motor = 0;
  }
  
    
  

}
