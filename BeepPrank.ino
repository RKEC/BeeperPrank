const byte BUZZER = 8;
const byte LIGHT = A4;
unsigned long time;

void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN_TX,INPUT);
  pinMode(LED_BUILTIN_RX,INPUT);
}

void loop() {
  if (LIGHT > 0) {
    time = random(2000000, 7500000);
    Serial.println("Interval value : " + time);
    Serial.println("Analog value : " + LIGHT);
    delay(time);
    tone(BUZZER, 5000, 100);
    delay(500);
    tone(BUZZER, 5000, 100);
  }

}
