#define joyX A0
#define joyY A1
#define JOY_SW 2

void setup() {
  Serial.begin(9600); //Allows data transferring from Arduino to PC
  
  pinMode(5, OUTPUT); // Red
  pinMode(6, OUTPUT); // Blue
  pinMode(9, OUTPUT); // Yellow
  pinMode(10, OUTPUT); // Green
  
}

void loop() {
  // put your main code here, to run repeatedly:'
  int xValue = analogRead(joyX);
  int yValue = analogRead(joyY);

  if (yValue > 525) {
    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
    }
  else if (yValue < 505) {
    digitalWrite(10, HIGH);
    digitalWrite(9, LOW);
    }
  else {
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    }

  if (xValue > 550) {
    digitalWrite(6, HIGH);
    digitalWrite(5, LOW);
    }
  else if (xValue < 462) {
    digitalWrite(6, LOW);
    digitalWrite(5, HIGH);
    }
   else {
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
    }
}
