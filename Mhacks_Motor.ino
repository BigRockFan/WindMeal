const int motorPin = 9;
void setup() 
{
   Serial.begin(9600);
   pinMode(motorPin, OUTPUT);
   digitalWrite(motorPin, HIGH);
}

void loop() 
{
  Serial.print("hi");
}

/*********************************************************************************************************
  END FILE
*********************************************************************************************************/
