  void Ping(){
  digitalWrite(trigpin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin, HIGH);
  delayMicroseconds(5);
  digitalWrite(trigpin, LOW);
  duration = pulseIn(echopin, HIGH);
  cm = duration / 29 / 2;
  
delay (100);
  if (cm > lastcm * 5) {
    cm = lastcm + 5;
  }
  
  Serial.print(cm);
  Serial.println("cm");
  delay(100);
  lastcm = cm;
  }
  
