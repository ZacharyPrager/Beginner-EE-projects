# What I learned: 

I learned how the HC-SR04 sensor worked and its honestly very simple. 

  The TRIG pin sends out an ultrasonic wave (traveling at the speed of sound), that refelcts. 
  The ECHO pin will start out HIGH, then switch to LOW when the TRIG's signal comes back. Thus, the arduino looks at ECHO as an input, because that data will be used somewhere in the circuit. The TRIG is an output because the pin listens for signal and not vice versa.


 
