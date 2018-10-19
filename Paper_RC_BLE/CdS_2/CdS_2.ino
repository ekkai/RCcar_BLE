void setup() {
  Serial.begin(9600);
}

void loop() {
  int cdsValue = analogRead(A0);

  if (cdsValue > 300) {
    Serial.print("Turn ON the lamp");
    analogWrite(9, 255);
    analogWrite(10, 255);
    analogWrite(11, 255);
  }

  else {
    Serial.print("Turn OFF the lamp");
    analogWrite(9, 0);
    analogWrite(10, 0);
    analogWrite(11, 0);
  }
}

