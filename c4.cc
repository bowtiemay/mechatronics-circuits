// C++ code
//
/*
  Sweep
*/

#include <Servo.h>

int pos = 0;

Servo servo_9;

void setup()
{
  servo_9.attach(9, 500, 2500);
}

void loop () {
  moveToBirthday(5, 1);
}

void default_()
{
  // sweep the servo from 0 to 180 degrees in steps
  // of 1 degrees
  for (pos = 0; pos <= 180; pos += 1) {
    // tell servo to go to position in variable 'pos'
    servo_9.write(pos);
    // wait 15 ms for servo to reach the position
    delay(15); // Wait for 15 millisecond(s)
  }
  for (pos = 180; pos >= 0; pos -= 1) {
    // tell servo to go to position in variable 'pos'
    servo_9.write(pos);
    // wait 15 ms for servo to reach the position
    delay(15); // Wait for 15 millisecond(s)
  }
}

/*moves servo to the angle of your birthday * your birth month
and holds the servo at angle for 1 second */
void moveToBirthday (int day, int month) {
  int birthDay = day;
  int birthMonth = month;
  int goalPos = birthDay*birthMonth;
  
  for (pos = 0; pos <= goalPos; pos += 1) {
    // tell servo to go to position in variable 'pos'
    servo_9.write(pos);
    // wait 1000 ms for servo to reach the position
    delay(1000); 
  }
  for (pos = goalPos; pos >= 0; pos -= 1) {
    // tell servo to go to position in variable 'pos'
    servo_9.write(pos);
    // wait 1000 ms for servo to reach the position
    delay(1000); 
  }
  //servo_9.write(birthDay*birthMonth);
  //delay(1);
}
