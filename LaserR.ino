void Laser() {
  digitalWrite (3, HIGH);
  digitalWrite (5, LOW);

  xR = random(50, 200);
  delay(xR);

  digitalWrite (3, LOW);
  digitalWrite (5, LOW);


  xR = random(50, 200);
  delay(xR);

  digitalWrite (3, LOW);
  digitalWrite (5, HIGH);

  xR = random(50, 200);
  delay(xR);

  digitalWrite (3, HIGH);
  digitalWrite (5, LOW);

  xR = random(50, 200);
  delay(xR);
}
