int led=8;
int led1=13;
int led2=7;
void setup()
{
  pinMode(led,OUTPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  
}
void loop()
{
  redLED();
  yellowLED();
  greenLED();
}
void redLED()
{
  digitalWrite(led,HIGH);
  delay(5000);
  digitalWrite(led,LOW);
  delay(5000);
}
void yellowLED()
{
  digitalWrite(led1,HIGH);
  delay(3000);
  digitalWrite(led1,LOW);
  delay(3000);
}
void greenLED()
{
  digitalWrite(led2,HIGH);
  delay(6000);
  digitalWrite(led2,LOW);
  delay(6000);
}
