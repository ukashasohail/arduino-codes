char val;
#define led1 2

void setup() 
{
 
Serial.begin(9600);
pinMode(led1,OUTPUT);

}

void loop() 
{
 
if (Serial.available())
{
  val = Serial.read();
  Serial.println(val);
  if(val == 'A')
  digitalWrite(led1,HIGH);
  else if(val == 'a')
  digitalWrite(led1,LOW);
 
  }

}
