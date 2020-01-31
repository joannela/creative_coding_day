  void setup(){
    
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  
}

void loop(){
  digitalWrite(12, HIGH);
  delay(800);
  digitalWrite(12, LOW);
  delay(50);
  digitalWrite(11,HIGH);
  delay(800);
  digitalWrite(11,LOW);
  delay(50);
  digitalWrite(13,HIGH);
  delay(800);
  digitalWrite(13,LOW);
  delay(50);
}
