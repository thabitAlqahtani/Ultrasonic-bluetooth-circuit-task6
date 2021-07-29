#define trigPin 9
#define echoPin 10
long duration;
int distance;

void setup() {
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
Serial.begin(9600);
}
void loop() {
  while(dist() > 50) { }
  int startTime = millis();
  while(dist() < 50) {
   int timenow = millis();
   int realtime = timenow - startTime;
    if (realtime > 3000) {
      Serial.write('1');
    break; }
    
  }
}

int dist() {
 digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance= duration*0.034/2;
  return distance;
}