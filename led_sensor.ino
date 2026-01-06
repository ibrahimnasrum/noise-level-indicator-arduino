// Pins
const byte MIC_PIN = 2;   // Sound sensor digital output
const byte LED_PIN = 3;   // LED (or external LED + resistor)

// Settings
const byte BLINK_COUNT = 5;
const unsigned int BLINK_DELAY_MS = 150;

void setup() {
  pinMode(MIC_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);

  digitalWrite(LED_PIN, LOW);
  Serial.begin(9600);
}

void loop() {
  // Read the sound sensor value (HIGH = noise detected)
  int micValue = digitalRead(MIC_PIN);

  if (micValue == HIGH) {
    // Blink 5 times
    for (byte i = 0; i < BLINK_COUNT; i++) {
      digitalWrite(LED_PIN, HIGH);
      delay(BLINK_DELAY_MS);
      digitalWrite(LED_PIN, LOW);
      delay(BLINK_DELAY_MS);
    }
  } else {
    // No noise -> LED OFF
    digitalWrite(LED_PIN, LOW);
  }
}
