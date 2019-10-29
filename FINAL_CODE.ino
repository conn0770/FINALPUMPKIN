//AQ
long duration, cm;
const int trigpin = 11;
const int echopin = 12;
int lastcm = 500;

//R
int xR = 0;

//B
int DS_pin = 8;
int STCP_pin = 9;
int SHCP_pin = 10;

//AQ
#include <Servo.h>

Servo myservo;
Servo myservo2;

//CV
void setup() {
  pinMode(trigpin, OUTPUT);
  pinMode(echopin, INPUT);
  Serial.begin(9600);
  //AQ
  myservo.attach(7);
  myservo2.attach(6);
  //R

  //CV
  pinMode(2, OUTPUT);

//B
pinMode(DS_pin, OUTPUT);
pinMode(STCP_pin, OUTPUT);
pinMode(SHCP_pin, OUTPUT);
reg();
}
boolean registerz[8];

void reg() {
  digitalWrite(SHCP_pin, HIGH);
  for (int i = 7; i > 0; i--) {
    digitalWrite(STCP_pin, HIGH);
    digitalWrite(DS_pin, registerz[i]);
    digitalWrite(STCP_pin, LOW);

  }
  digitalWrite(SHCP_pin, LOW);
}
//CV
void loop() {

  Laser();
  servo1();
  servo2();


  //B
  for (int i = 0; i < 9; i++) {
    registerz[i] = LOW;
    delay(100);
    reg();
  }
  for (int i = 0; i < 9; i++) {
    registerz[i] = HIGH;
    delay(100);
    reg();
  }






}
