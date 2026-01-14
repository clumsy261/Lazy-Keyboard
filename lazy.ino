// Global variables and libraries
int ledPin = 13;

void setup() {
  // Runs once when the board starts
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Runs repeatedly forever
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(1000);
}
