void setup()
{
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
}

void loop()
{
   if(digitalRead(4)==1)
  {
  
    digitalWrite(2,1);
    digitalWrite(3,0);
   delay(3000);
     digitalWrite(2,0);
  }
  else if(digitalRead(5)==1)
  {
  digitalWrite(2,0);
    digitalWrite(3,1);
    delay(3000);
    digitalWrite(3,0);
  }
  

}
