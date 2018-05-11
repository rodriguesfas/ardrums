
#define BAUND_SPEED 9600
#define PIN A0

void setup() {
  Serial.begin(BAUND_SPEED);
  pinMode(PIN, INPUT);
}

void loop() {
  int value = digitalRead(PIN);

  value = random(0, 10);
  
  if(value == 5){
    Serial.println(1);
  }

  delay(1000);
  
}
