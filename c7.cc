#include <LiquidCrystal.h>
#include <Servo.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int button1State = 0;
int button2State = 0;
int button3State = 0;

int pos = 0;

Servo myservo;

//double[] buttonStates  = new int[3];

void setup() {
  pinMode(7, INPUT);
  pinMode(13, INPUT);
  pinMode(8, INPUT);
  
  pinMode(-10, OUTPUT);
  pinMode(-9, OUTPUT);
  pinMode(-6, OUTPUT);
  
  myservo.attach(9);
  
  // set up the LC-6's number of columns and rows:
  lcd.begin(16, 2);
  
  String lcdText = "how are you";
  lcd.print(lcdText);
}

void loop() {
  
  button1State = digitalRead(7); //2
  button2State = digitalRead(13); //change
  button3State = digitalRead(8); //change
  
  String lcdText = "how are you";
  
  lcd.setCursor(0, 0);
  lcd.print(lcdText);
  
  //int[] buttonStates = {button1State, button2State, button3State};
  
  //buttonStates = {button1State, button2State, button3State};
  String convo[] = {"i'm fine", "bad", "slay"};
  
  if (button1State == HIGH) {
    myservo.write(1);
    lcd.setCursor(0, 1);
    lcd.print(convo[0]);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(50);
  }
  else if (button2State == HIGH) {
    myservo.write(90);
    lcd.setCursor(0, 1);
    lcd.print(convo[1]);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(50);   
  }
  else if (button3State == HIGH) {
    myservo.write(180);
    lcd.setCursor(0, 1);
    lcd.print(convo[2]);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(50);
  } else {
    digitalWrite(LED_BUILTIN, LOW);
    //lcd.clear();
  } 
  
  lcd.clear();
  lcd.print(lcdText);
                  
  delay(10); // Delay a little bit to improve simulation performance
  
}
 

