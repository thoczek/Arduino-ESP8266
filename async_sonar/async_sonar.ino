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
  Serial.begin (9600);
    pinMode(D1, OUTPUT); 
    pinMode(D2, INPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(read_distance(D1,D4));
  Serial.println(" cm");
  delay(500);
}

float read_distance(int trigPin,int echoPin)
{
  long czas;
  float dystans;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(3);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  czas = pulseIn(echoPin, HIGH);
  dystans = czas / 58.0;
  return dystans;
  }
