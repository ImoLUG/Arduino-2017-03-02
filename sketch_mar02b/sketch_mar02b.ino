#include<Servo.h>
Servo s1 ;
//Servo s2;
String lb;
void setup() {
  Serial.begin(9600);

  s1.attach(9);
  pinMode(9, OUTPUT);

  Serial.print("check");

  for (int i = 0; i < 75; i++) {
    lb = lb + "|";
  }
}

void loop() {
  Serial.println(lb.substring(0, analogico()));
}

int analogico() {
  int i = analogRead(0);
  i = map(i, 0, 1023, 0, 100);
  return i;
}



