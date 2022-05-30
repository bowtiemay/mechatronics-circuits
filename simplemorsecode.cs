// C++ code
//
/*
  This program blinks pin 13 of the Arduino (the
  built-in LED)
*/

void dash() {
  digitalWrite(12, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(12, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}
void dot() {
  digitalWrite(12, HIGH);
  delay(300); // Wait for 400 millisecond(s)
  digitalWrite(12, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}
void nextLetter() {
  delay(2000); // Wait for 2000 millisecond(s)
}

void letterA() {
  dot();
  dash();
  nextLetter();
}

void setup()
{
  pinMode(12, OUTPUT);
}

void loop()
{
  // M
  dash();
  dash();
  nextLetter();
  // A
  letterA();
  // Y
  dash();
  dot();
  dash();
  dash();
  nextLetter();
  // A
  letterA();
}
