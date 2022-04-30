const int button_pin = 8;
const int led_pin = 13;
int button_state = 0;

void setup() {
  Serial.begin(115200);
  pinMode(led_pin, OUTPUT);
  pinMode(button_pin, INPUT);
}

void loop() {
  button_state = digitalRead(button_pin);
  Serial.println(button_state);
  if (button_state == HIGH) {
    digitalWrite(led_pin, HIGH);
  } else {
    digitalWrite(led_pin, LOW);  
  }
  delay(100);
}
