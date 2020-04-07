#include <SFE_BMP180.h>



#define D0 16
#define D1 5
#define D2 4
#define D3 0
#define D4 2
#define D5 14
#define D6 12
#define D7 13
#define D8 16


#define DI_odleglosc 2
int pos = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(D1, OUTPUT);

}

void loop() {
 
    digitalWrite(D1,1);              // tell servo to go to position in variable 'pos'
    delay(10000);                       // waits 15ms for the servo to reach the position
    digitalWrite(D1,0);              // tell servo to go to position in variable 'pos'
    delay(10000);
}
