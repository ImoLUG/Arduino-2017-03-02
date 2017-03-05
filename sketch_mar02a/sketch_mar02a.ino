#include<Servo.h>

int r1;
int r2;

void setup() {
  Serial.begin(9600);
  Servo s1;
  Servo s2;
  s1.attach(9);
  s2.attach(10);
}

void loop() {
  r1 = analogRead(0);
  r2 = analogRead(1);

  r1 = map(r1, 0, 1023, 0, 180);
  r2 = map(r2, 0, 1023, 0, 180);

  s1.write(r1);
  s2.write(r2);

  delay(10);
}
