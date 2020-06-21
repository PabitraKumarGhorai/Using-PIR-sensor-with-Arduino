int ledpin = 13;
int pir = 4;
void setup()
{
  Serial.begin(9600);
  pinMode(ledpin,OUTPUT);
  pinMode(pir,INPUT);
}
void loop()
{
  if(digitalRead(pir) == HIGH)
  {
    digitalWrite(ledpin,HIGH);
    Serial.println("Living things Detected");
    delay(500);
  }
  else
  {
    digitalWrite(ledpin,LOW);
    Serial.println("Not detected");
    delay(500);
  }
}
