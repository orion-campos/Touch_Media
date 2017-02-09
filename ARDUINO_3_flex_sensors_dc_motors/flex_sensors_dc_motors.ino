int motorPin1 = 8;
int motorPin2 = 9;
int motorPin3 = 10;
int motorPin4 = 11;
int motorPin5 = 12;

int flexSensorPin1 = A0;
int flexSensorPin2 = A1;
int flexSensorPin3 = A2;
int flexSensorPin4 = A3;
int flexSensorPin5 = A4;

void setup()
{                
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(motorPin3, OUTPUT);
  pinMode(motorPin4, OUTPUT);
  pinMode(motorPin5, OUTPUT);
  Serial.begin(9600);
}
 
void loop()
{ 
  int flexSensorReading1 = analogRead(flexSensorPin1);
  int speed1 = map(flexSensorReading1, 700, 450, 0, 255);
  
  int flexSensorReading2 = analogRead(flexSensorPin2);
  int speed2 = map(flexSensorReading2, 710, 450, 0, 255);
  
  int flexSensorReading3 = analogRead(flexSensorPin3);
  int speed3 = map(flexSensorReading3, 705, 450, 0, 255);
  
  int flexSensorReading4 = analogRead(flexSensorPin4);
  int speed4 = map(flexSensorReading4, 0, 800, 0, 255);
  
  int flexSensorReading5 = analogRead(flexSensorPin5);
  int speed5 = map(flexSensorReading5, 0, 800, 0, 255);
  
  Serial.print("1-read:"); Serial.print(flexSensorReading1); Serial.print(", speed:"); Serial.print(speed1);
  Serial.print("2-read:"); Serial.print(flexSensorReading2); Serial.print(", speed:"); Serial.print(speed2);
  Serial.print("3-read:"); Serial.print(flexSensorReading3); Serial.print(", speed:"); Serial.print(speed3);
  Serial.print("4-read:"); Serial.print(flexSensorReading4); Serial.print(", speed:"); Serial.print(speed4);
  Serial.print("5-read:"); Serial.print(flexSensorReading5); Serial.print(", speed:"); Serial.println(speed5);
  
  delay(100);
  
  analogWrite(motorPin1, speed1);
  analogWrite(motorPin2, speed2);
  analogWrite(motorPin3, speed3);
  analogWrite(motorPin4, speed4);
  analogWrite(motorPin5, speed5);
} 
