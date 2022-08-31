void setup()
{
  pinMode(13, OUTPUT);
  pinMode(7,INPUT);
  Serial.begin(9600);
}

void loop()
{
  if(digitalRead(7)==HIGH){
    tone(13,2000);
    Serial.println("Someone here");
  }
  else{
    noTone(13);
    Serial.println("Nothing");
  }
  delay(1000);
}
