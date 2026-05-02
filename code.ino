const int LED_PIN = 10;
const unsigned long BLINK_INTERVAL = 500;
const unsigned long SERIAL_INTERVAL = 2000;

unsigned long lastBlinkTime = 0;
unsigned long lastSerialTime = 0;
bool ledState = false;

void setup() {
  Serial.begin(115200);
  delay(500);
  
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);
}

void loop() {
  unsigned long currentTime = millis();
  
  if (currentTime - lastBlinkTime >= BLINK_INTERVAL) {
    lastBlinkTime = currentTime;
    ledState = !ledState;
    digitalWrite(LED_PIN, ledState ? HIGH : LOW);
  }
  
  if (currentTime - lastSerialTime >= SERIAL_INTERVAL) {
    lastSerialTime = currentTime;
    Serial.println("custom-esp32-c3");
  }
}
