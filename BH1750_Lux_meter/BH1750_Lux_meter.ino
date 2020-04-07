#include "BH1750FVI.h"

BH1750FVI myLux(0x23);

uint32_t lastUpdate = 0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
  Serial.println();
  Serial.print(__FILE__);
  Serial.println();

  Wire.begin();

  myLux.powerOn();
  myLux.setContHighRes();
}

void loop() {
  // put your main code here, to run repeatedly:
int interval = 100;
  if (millis() - lastUpdate >= interval)
  {
    lastUpdate += interval;
    float val = myLux.getLux();
    Serial.println(val, 1);
  }
}
