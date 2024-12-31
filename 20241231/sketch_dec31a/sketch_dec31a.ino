int sari=3;
int mavi=4;
String girilen="";
void setup() {
Serial.begin(9600);
pinMode(sari,OUTPUT);
pinMode(mavi,OUTPUT);
Serial.print("sarı için s, mavi için m harfine basın=");
}

void loop() {
if(Serial.available()){
  girilen=Serial.readString();
  Serial.print("sarı için s, mavi için m harfine basın=");
  Serial.println(girilen);
  if(girilen=="s")
  {
   Serial.println("sarı yandı");
   digitalWrite(sari,1);
   delay(3000);
   digitalWrite(sari,0);  
  }
    if(girilen=="m")
  {
   Serial.println("mavi yandı");
   digitalWrite(mavi,1);
   delay(3000);
   digitalWrite(mavi,0);  
  }
  if(girilen=="i")
  {
     digitalWrite(mavi,1);
      digitalWrite(sari,1);
   delay(3000);
   digitalWrite(sari,0);  
   digitalWrite(mavi,0);  
    }
  }
  }
