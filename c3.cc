
int sensorValue = 0;

int outputValue = 0;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(9, OUTPUT);
  Serial.begin(9600);

}

void printName(String a) {
  Serial.println(a);
}

void printName2() {
  Serial.println("maya");
}

void loop()
{
  printName("maya");
  printName2();
  // read the analog in value:
  sensorValue = analogRead(A0);
  // map it to the range of the analog out:
  outputValue = map(sensorValue, 0, 1023, 0, 255);
  // change the analog out value:
  analogWrite(9, outputValue);
  // print the results to the serial monitor:
  Serial.print("the sensor value is ");
  Serial.print(sensorValue);
  Serial.print("\t the output value is ");
  Serial.println(outputValue);
  // wait 2 milliseconds before the next loop for the
  // analog-to-digital converter to settle after the
  // last reading:
  delay(2); // Wait for 2 millisecond(s)
}
