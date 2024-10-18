#define RELAY_PIN D1

void setup() {
  // Initialize the relay pin as an output
  pinMode(RELAY_PIN, OUTPUT);
  // Start with the relay off
  digitalWrite(RELAY_PIN, LOW);
}

void loop() {
  // Turn the relay on (and the fan) for 5 seconds
  digitalWrite(RELAY_PIN, HIGH);
  delay(5000);

  // Turn the relay off (and the fan) for 5 seconds
  digitalWrite(RELAY_PIN, LOW);
  delay(5000);
}
