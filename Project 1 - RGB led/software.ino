void changeColor(int pin, int previous){
  for (int color = 0; color <= 255; color++) {
    analogWrite(pin, color);
    delay(10);
    analogWrite(previous, 255 - color);
  }
}

void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT); // Blue
  pinMode(5, OUTPUT); // Green
  pinMode(6, OUTPUT); // Red
  
}

void loop() {
  // put your main code here, to run repeatedly:
  changeColor(3, 6);
  changeColor(5, 3);
  changeColor(6, 5);

}
