
#include <Servo.h> 
int servoPin = 3;
int servoPin2 = 4;
int servoPin3 = 5;
int servoPin4 = 6;

Servo Servo1; 
Servo Servo2;
Servo Servo3;
Servo Servo4;


void setup() { 
   Servo1.attach(servoPin); 
   Servo2.attach(servoPin2); 
   Servo3.attach(servoPin3); 
   Servo4.attach(servoPin4); 

  
}

//turning all 4 servos to 180 degrees then back. 

void loop() {
  for (int i = 0; i < 180; i++) {
    servo1.write(i);             
    servo2.write(i);    
    servo3.write(i);
    servo4.write(i);        
    delay(10);                     
  }
  for (i = 180; i > 0; i--) {
    servo1.write(i);               
    servo2.write(i);    
    servo3.write(i);
    servo4.write(i);         
    delay(10);                     
  }

}
   
}
