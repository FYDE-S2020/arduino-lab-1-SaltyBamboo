#define LED_PIN 2

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

/*void dimmer(int freq, int duty) {
    int period, onTime, offTime;
    period = 1000/freq;
    onTime = period * duty / 100;
    offTime = period - onTime;
    digitalWrite(LED_PIN, HIGH);
    delay(onTime);
    digitalWrite(LED_PIN, LOW);
    delay(offTime);
}*/

void timedBlink() {
  digitalWrite(LED_PIN, HIGH);   
  delay(250);                    
  digitalWrite(LED_PIN, LOW);    
  delay(250);
  digitalWrite(LED_PIN, HIGH);   
  delay(500);                    
  digitalWrite(LED_PIN, LOW);    
  delay(500);
  digitalWrite(LED_PIN, HIGH);   
  delay(1000);                    
  digitalWrite(LED_PIN, LOW);    
  delay(1000);                    
}

void dimmer(int freq, int duty) {
  int period, onTime, offTime;
  period = 1000/freq;
  onTime = period * duty / 100;
  offTime = period - onTime;
  digitalWrite(LED_PIN, HIGH);
  delay(onTime);
  digitalWrite(LED_PIN, LOW);
  delay(offTime);
}

void loop() {
  for(int i = 0; i < 100; i++) {
    dimmer(60,i);
  }
  for(int i = 100; i > 0; i--) {
    dimmer(60,i);
  }
}
