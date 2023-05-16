#define buzz 13

void setup() {
  pinMode(buzz, OUTPUT);
}

void loop() {
  digitalWrite(buzz, HIGH);
  tone(13, 262, 250);
  //syntax: tone(buzzer pin number, frequency, time in milliseconds)
  delay(100); //1 second delay

  digitalWrite(buzz, LOW);
  delay(100); //1 second delay
}