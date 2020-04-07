#include <Servo.h>
Servo myservo;
int pos = 0;

#define D0 16
#define D1 5
#define D2 4
#define D3 0
#define D4 2
#define D5 14
#define D6 12
#define D7 13
#define D8 16


void setup() {
  // put your setup code here, to run once:
myservo.attach(D1);
}

void loop() {
  // put your main code here, to run repeatedly:
for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(100);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(4);                       // waits 15ms for the servo to reach the position
  }
}
