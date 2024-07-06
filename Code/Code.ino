int ledPin = 10;

void setup() {

  for (ledPin <13; ledPin++;) {
    pinMode(ledPin, OUTPUT);
  }

  }
void loop() {
  // put your main code here, to run repeatedly:
  ledPin = 10;
  for (ledPin < 13; ledPin++;) {
    digitalWrite(ledPin, HIGH);
    delay(500);
    digitalWrite (ledPin, LOW);
    delay(500);
  }
}
