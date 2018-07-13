int ledpin = 9;
int nowled = 0;
void setup() {
  pinMode(ledpin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
/*  int sensorValue = digitalRead(4);
  if(sensorValue == 1){
    if(nowled == 0){
      digitalWrite(ledpin,HIGH);
      nowled = 1; 
    }
    else{
      digitalWrite(ledpin,LOW);
      nowled = 0;
    }
   }
 */
 // Serial.println(nowled);
analogWrite(ledpin,10);
 
//  delay(1);  
}
