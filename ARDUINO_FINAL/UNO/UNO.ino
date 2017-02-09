#include <VirtualWire.h>

int motorPin1 = 5;
int motorPin2 = 6;
int motorPin3 = 11;
int motorPin4 = 12;//without variation
int motorPin5 = 13;
int motorPin6 = 3;

int speed1 = 0;
int speed2 = 0;
int speed3 = 0;
int speed4 = 0;
int speed5 = 0;
int speed6 = 0;

int Sensor1Data;
int Sensor2Data;
int Sensor3Data;
int Sensor4Data;
int Sensor5Data;
int Sensor6Data;

char StringReceived[50];
int dataReceived[10];


void setup() {

  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(motorPin3, OUTPUT);
  pinMode(motorPin4, OUTPUT);
  pinMode(motorPin5, OUTPUT);
  pinMode(motorPin6, OUTPUT);

  Serial.begin(115200);
  // VirtualWire
  // Initialise the IO and ISR
  // Required for DR3100

  // Bits per sec
  vw_setup(2000);
  vw_set_rx_pin(2);

  // Start the receiver PLL running
  vw_rx_start();

} // END void setup

void loop() {

  uint8_t buf[VW_MAX_MESSAGE_LEN];
  uint8_t buflen = VW_MAX_MESSAGE_LEN;
  int cnt = 0;

  for (int i = 0; i < 7; i++) {
    dataReceived[i] = 0;
  }

  //Taking the data from the control base
  if (vw_get_message(buf, &buflen))
  {
    //digitalWrite(13, true);
    int i;
    for (i = 0; i < buflen; i++)
    {
      StringReceived[i] = char(buf[i]);
      Serial.print(dataReceived[cnt]);
    }

    sscanf(StringReceived, "%d,%d,%d,%d,%d,%d", &Sensor1Data, &Sensor2Data, &Sensor3Data, &Sensor4Data, &Sensor5Data, &Sensor6Data); // Converts a string to an array
    //    Serial.print("StringReceived: ");
    //    Serial.println(StringReceived[0]);
    //    Serial.println(StringReceived[2]);
    // Turn off light to and await next message

    char *p = StringReceived;
    char *str;

    Serial.println("UNO receiving:");
    while ((str = strtok_r(p, ",", &p)) != "\n" && cnt++ < 6) { // delimiter is the semicolon

      //      cnt++;
      //      Serial.print(cnt);
      //      Serial.print(": ");
      //      Serial.println(str);

      dataReceived[cnt] = atoi(str);
      Serial.println(dataReceived[cnt]);
    }

    memset(StringReceived, 0, sizeof (StringReceived));// This line is for reset the StringReceived


    // moving motors
    for (int i = 1; i < 7; i++) {
      Serial.print(i);
      Serial.print(" : ");
      Serial.println(dataReceived[i]);

      if (i == 1) {
        int speed1 = dataReceived[i];
        analogWrite(motorPin1, speed1);
        //delay(500);
      }
      if (i == 2) {
        int speed2 = dataReceived[i];
        analogWrite(motorPin2, speed2);
        //delay(500);
      }
      if (i == 3) {
        int speed3 = dataReceived[i];
        analogWrite(motorPin3, speed3);
        //delay(500);
      }
      if (i == 4) {
        int speed4 = dataReceived[i];
        analogWrite(motorPin4, speed4);
        //delay(500);
      }
      if (i == 5) {
        int speed5 = dataReceived[i];
        analogWrite(motorPin5, speed5);
        //delay(500);
      }
      if (i == 6) {
        int speed6 = dataReceived[i];
        analogWrite(motorPin6, speed6);
        //delay(500);
      }
    }
  }
  delay(1000);
  analogWrite(motorPin1, 0);
  analogWrite(motorPin2, 0);
  analogWrite(motorPin3, 0);
  analogWrite(motorPin4, 0);
  analogWrite(motorPin5, 0);
  analogWrite(motorPin6, 0);
  //Serial.println("loop");
}
