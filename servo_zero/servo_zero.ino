#include <Servo.h>
Servo myservo;

#define D0 16
#define D1 5
#define D2 4
#define D3 0
#define D4 2
#define D5 14
#define D6 12
#define D7 13
#define D8 16

void setup() 
{
  myservo.attach(D1);
}
void loop() {

    myservo.write(180);              // tell servo to go to position in variable 'pos'

}
