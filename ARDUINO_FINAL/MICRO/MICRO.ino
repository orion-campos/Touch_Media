#include <VirtualWire.h>

int Sensor1Pin = A0;
int Sensor2Pin = A1;
int Sensor3Pin = A2;
int Sensor4Pin = A3;
int Sensor5Pin = A4;
int Sensor6Pin = A5;

int ledPin = 13;

int Sensor1Data;
int Sensor2Data;
int Sensor3Data;
int Sensor4Data;
int Sensor5Data;
int Sensor6Data;

char SensorUNOCharMsg[21];// The string that we are going to send trought rf

void setup() {
  Serial.begin(9600);
  // LED
  pinMode(ledPin, OUTPUT);

  // Sensor(s)
  pinMode(Sensor1Pin, INPUT);
  pinMode(Sensor2Pin, INPUT);
  pinMode(Sensor3Pin, INPUT);
  pinMode(Sensor4Pin, INPUT);
  pinMode(Sensor5Pin, INPUT);
  pinMode(Sensor6Pin, INPUT);

  pinMode(2, INPUT); // button
  pinMode(13, OUTPUT);//LED for sending
  // VirtualWire setup
  vw_setup(2000); // Bits per sec
  vw_set_tx_pin(3);// Set the Tx pin
}

void loop() {
  if (digitalRead(2) == LOW) {
    digitalWrite(13, true);  //Flash status LED to show transmitting
    // Read and store Sensor Data
    Sensor1Data = map(analogRead(A0), 710, 450, 0, 255);
    Sensor2Data = map(analogRead(A1), 710, 450, 0, 255);
    Sensor3Data = map(analogRead(A2), 710, 450, 0, 255);
    Sensor4Data = map(analogRead(A3), 0, 850, 0, 255);
    Sensor5Data = map(analogRead(A4), 0, 850, 0, 255);
    Sensor6Data = map(analogRead(A5), 0, 850, 0, 255);

    sprintf(SensorUNOCharMsg, "%d,%d,%d,%d,%d,%d", Sensor1Data, Sensor2Data, Sensor3Data, Sensor4Data, Sensor5Data, Sensor6Data);
    Serial.print("MICRO sending: ");
    Serial.println(SensorUNOCharMsg);
    // Turn on a light to show transmitting
    vw_send((uint8_t *)SensorUNOCharMsg, strlen(SensorUNOCharMsg));
    vw_wait_tx(); // Wait until the whole message is gone
    delay(500);
  }
  // Turn off a light after transmission

  digitalWrite(13, false);
}
