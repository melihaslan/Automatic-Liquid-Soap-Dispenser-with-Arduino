const int IRsensor = 8;
const int Enable_A = 9;
const int inputA1 = 10;
const int inputA2 = 11;

void setup() {
  pinMode(IRsensor, INPUT);
  pinMode(Enable_A, OUTPUT);
  pinMode(inputA1, OUTPUT);
  pinMode(inputA2, OUTPUT);
}

void loop() {
  int IRvalue = digitalRead(IRsensor);
  digitalWrite(Enable_A, HIGH);
  if (IRvalue == 0) {
    digitalWrite(inputA1, HIGH);
    digitalWrite(inputA2, LOW);
    delay(1000);
    digitalWrite(inputA1, LOW);
    digitalWrite(inputA2, LOW);
    delay(2000);
  } else {
    digitalWrite(inputA1, LOW);
    digitalWrite(inputA2, LOW);
  }
}
