#define TRIG 5 //Green
#define ECHO 6  //Orange
#define LED 3 //Yellow

float distance, duration;

void setup() {
  pinMode(TRIG, OUTPUT); 
  pinMode(ECHO, INPUT);
  pinMode(LED, OUTPUT);
  
}
void loop() {
  
  digitalWrite(TRIG, LOW);  
  delayMicroseconds(2);  
  digitalWrite(TRIG, HIGH);  
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);    
 
  duration = pulseIn(ECHO, HIGH);
  distance = (duration * .0343) / 2;   
  if (distance >= 25) {
    digitalWrite(LED, HIGH);
    }
  else {
    digitalWrite(LED, LOW);
  }
  delay(100);
}
