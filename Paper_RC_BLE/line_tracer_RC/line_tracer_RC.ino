int in1 = 9;
int in2 = 6;
int in3 = 10;
int in4 = 11;
int L = 5;
int R = 4;

void setup() {
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(L, INPUT);
  pinMode(R, INPUT);
}

void loop() {
  if (digitalRead(R) == HIGH && digitalRead(L) == LOW) {
    //우회전
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
  }

  if (digitalRead(R) == LOW && digitalRead(L) == HIGH) {
    //좌회전
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
  }

  if (digitalRead(R) == HIGH && digitalRead(L) == HIGH) {
    //직진
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
  }

  if (digitalRead(R) == LOW && digitalRead(L) == LOW) {
    //직진
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
  }
}

