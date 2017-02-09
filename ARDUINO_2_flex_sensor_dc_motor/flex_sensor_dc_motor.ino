int motorPin1 = 8;
int flexSensorPin1 = A0;

void setup()
{                
  pinMode(motorPin1, OUTPUT);
  Serial.begin(9600);
}
 
void loop()
{ 
  int flexSensorReading1 = analogRead(flexSensorPin1);
  int speed1 = map(flexSensorReading1, 700, 450, 0, 255);
  Serial.print(flexSensorReading1); Serial.print(",");
  Serial.println(speed1); //display the readings of the flex sensors on the serial
  delay(250); //just here to slow down the output for easier reading
  analogWrite(motorPin1, speed1);
} 
