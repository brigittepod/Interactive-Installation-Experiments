
#include <Servo.h> 
int servoPin = 3; 

Servo Servo1; 
void setup() { 
   Servo1.attach(servoPin); 

  
}

void loop(){ 
   Servo1.write(0); 
   delay(100); 
   Servo1.write(180); 
   
   delay(100); 
   Servo1.write(90); 
  

 
    
   
}
