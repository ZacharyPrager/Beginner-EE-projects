# What I learned: 

I learned how the HC-SR04 sensor worked and its honestly very simple. 

The TRIG pin tells the Ultrasonic transmitter to send out an ultrasonic wave (traveling at the speed of sound), that refelcts. The Ultrasonic receiver listens for that wave to bounce back. Once it does, the sensor tells the ECHO pin to switch to low. Thus, the arduino looks at ECHO as an input, because the ardunio does someting with the switch from HIGH to LOW. The TRIG is an output because the ardunio has to give it signal.



 
