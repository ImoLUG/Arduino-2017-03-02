int i;
void setup() {
  Serial.begin(9600);

}

void loop() {
  i = analogRead(0);
  Serial.println(i);
  delay(20);
}
