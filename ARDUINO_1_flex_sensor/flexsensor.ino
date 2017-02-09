int flexSensorPin = A0; //analog pin 0
 
void setup(){
Serial.begin(9600);
}
 
void loop(){
int flexSensorReading = analogRead(flexSensorPin);
 
//Serial.println(flexSensorReading);
 
//map our readings - this mapping was done by the example and will be exited out in the next update
int flex0to100 = map(flexSensorReading, 512, 614, 0, 100);
Serial.println(flex0to100); //display the readings of the flex sensors on the serial
 
delay(250); //just here to slow down the output for easier reading
}
