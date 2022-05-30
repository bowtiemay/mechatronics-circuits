
const int buttonPin = 2; // the number of the pushbutton pin
const int ledPin = 12; // the number of the LED pin

int buttonStatus = 0; // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}
void loop(){
  // read the status of the pushbutton value:
  buttonStatus = digitalRead(buttonPin);
  // check if the pushbutton is pressed
  // if it is, the buttonEvent is HIGH:
  if (buttonStatus == HIGH) {
  // turn LED on:
  digitalWrite(ledPin, HIGH);
  }
  else {
  // turn LED off:
  digitalWrite(ledPin, LOW);
  }
}
