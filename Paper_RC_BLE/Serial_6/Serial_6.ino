char data;

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    data = Serial.read();

    if (data == 'f') {
      Serial.println("Forward");
    }
    if (data == 'r') {
      Serial.println("Right");
    }
    if (data == 'l') {
      Serial.println("Left");
    }
    if (data == 'b') {
      Serial.println("Back");
    }
    if (data == 's') {
      Serial.println("Stop");
    }
  }
}



