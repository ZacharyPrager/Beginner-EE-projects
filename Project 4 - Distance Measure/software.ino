#define TRIG 5 
#define ECHO 3  

#define WLED A0 // white LED
#define RLED A1 // red LED
#define GLED A2 // green LED
#define YLED A3 // yellow LED
#define BLED A4 // blue LED

float distance, duration;

void setAll(int mode) {
  digitalWrite(WLED, mode);
  digitalWrite(RLED, mode);
  digitalWrite(GLED, mode);
  digitalWrite(YLED, mode);
  digitalWrite(BLED, mode);
 }


void setup() {
  pinMode(TRIG, OUTPUT); 
  pinMode(ECHO, INPUT);
  
  pinMode(RLED, OUTPUT);
  pinMode(WLED, OUTPUT);
  pinMode(GLED, OUTPUT);
  pinMode(YLED, OUTPUT);
  pinMode(BLED, OUTPUT);
  
}
void loop() {
  
  digitalWrite(TRIG, LOW);  
  delayMicroseconds(2);  
  digitalWrite(TRIG, HIGH);  
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);    
 
  duration = pulseIn(ECHO, HIGH);
  distance = (duration * .0343) / 2; 
  
  setAll(LOW);

  if (distance >= 70) {
    digitalWrite(WLED, HIGH);
    }
  else if (distance >= 60) {
    digitalWrite(RLED, HIGH);
    }
  else if (distance >= 50) {
    digitalWrite(GLED, HIGH);
    }
  else if (distance >= 40) {
    digitalWrite(YLED, HIGH);
    }
  else if (distance >= 30) {
    digitalWrite(BLED, HIGH);
    }
  else {
    setAll(HIGH);
    }
    
  delay(100);
}
