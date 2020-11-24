int sensorValue;
void setup()
{
  pinMode(3, OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  if(sensorValue>400){
       digitalWrite(3,HIGH);
     }
     else{
       digitalWrite(3, LOW);
     }
}
