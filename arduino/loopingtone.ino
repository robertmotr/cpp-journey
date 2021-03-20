void setup() {
  // put your setup code here, to run once:
pinMode(7, OUTPUT);
pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    digitalWrite(7, HIGH);
    tone(11, 500);
    delay(1000);
    noTone(11);
    digitalWrite(7, LOW);
    delay(1000);
}