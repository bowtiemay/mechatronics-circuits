// C++ code
//

int inches = 0;

int cm = 0;

long readUltrasonicDistance(int pin)
{
  pinMode(pin, OUTPUT);  // Clear the trigger
  digitalWrite(pin, LOW);
  delayMicroseconds(2);
  digitalWrite(pin, HIGH);
  delayMicroseconds(10);
  digitalWrite(pin, LOW);
  pinMode(pin, INPUT);
  // Reads the pin, and returns the sound wave travel time in microseconds
  return pulseIn(pin, HIGH);
}

void setup()
{
  Serial.begin(9600);

}

void loop()
{
  // measure the ping time in cm
  cm = 0.01723 * readUltrasonicDistance(7);
  // convert to inches by dividing by 2.54
  inches = (cm / 2.54);
  if (inches > 125 || inches < 5) {
    Serial.println("out of range");
  }
  else {
    Serial.print(inches);
    Serial.print("in, ");
    Serial.print(cm);
    Serial.println("cm");
  }
  delay(100); // Wait for 100 millisecond(s
  
}
