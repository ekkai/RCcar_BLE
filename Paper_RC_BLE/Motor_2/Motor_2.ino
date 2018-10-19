int in1 = 9;
int in2 = 6;
int in3 = 10;
int in4 = 11;

int RSpeed = 255;
int LSpeed = 255;

char data;

void setup() {
  Serial.begin(9600);

}

void loop() {
  if (Serial.available()) {
    data = Serial.read();

    if (data == 'f') { //직진
      analogWrite(in1, RSpeed);
      analogWrite(in2, 0);
      analogWrite(in3, 0);
      analogWrite(in4, LSpeed);
    }

    if (data == 'r') { //우회전
      analogWrite(in1, 0);
      analogWrite(in2, 0);
      analogWrite(in3, 0);
      analogWrite(in4, LSpeed);
    }

    if (data == 'l') { //좌회전
      analogWrite(in1, RSpeed);
      analogWrite(in2, 0);
      analogWrite(in3, 0);
      analogWrite(in4, 0);
    }

    if (data == 'b') { //후진
      analogWrite(in1, 0);
      analogWrite(in2, RSpeed);
      analogWrite(in3, LSpeed);
      analogWrite(in4, 0);
    }

    if (data == 's') {
      analogWrite(in1, 0);
      analogWrite(in2, 0);
      analogWrite(in3, 0);
      analogWrite(in4, 0);
    }
  }
}


