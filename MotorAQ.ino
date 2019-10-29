void servo1() {
  int delay1 = random(400, 1000);
  myservo.write(180);
  delay(delay1);
  myservo.write(30);
  delay (delay1);
}

void servo2() {
  int delay2 = random(400, 1000);
  myservo2.write(180);
  delay(delay2);
  myservo2.write(0);
  delay (delay2);
}
