
#include <Servo.h>
#define trigPin 7
#define echoPin 8
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

float servoPositions[] = {0, 0, 0, 0};
float servoSpeeds[] = {1, 1, 1, 1};
float servoTimeouts[] = {0, 0, 0, 0};

void setup() {

  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  servo1.attach(3);
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(11);
}

void loop() {

  long duration, distance;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(100);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration / 2) / 29.1;
  Serial.print(distance);
  Serial.println(" cm");

  if (distance < 60 && distance > 40) {
    Serial.println("the distance is 60");

     //servo 1 scanning
    servoPositions[0] += servoSpeeds[0];
    if (servoPositions[0] <= 0) {
      servoPositions[0] = 0;
      servoSpeeds[0] = 10;
    }
    if (servoPositions[0] >= 180) {
      servoPositions[0] = 180;
      servoSpeeds[0] = -10;
    }
    
    ///////////////////////
    //servo 2 scanning
    servoPositions[1] += servoSpeeds[1];
    if (servoPositions[1] <= 0) {
      servoPositions[1] = 0;
      servoSpeeds[1] = 10;
    }
    if (servoPositions[1] >= 180) {
      servoPositions[1] = 180;
      servoSpeeds[1] = -10;
    }
    ///////////////////////

    //servo 3 scanning
   servoPositions[2] += servoSpeeds[2];
    if (servoPositions[2] <= 0) {
      servoPositions[2] = 0;
      servoSpeeds[2] = 10;
    }
    if (servoPositions[2] >= 180) {
      servoPositions[2] = 180;
      servoSpeeds[2] = -10;
    }
    ///////////////////////

     //servo 4 scanning
   servoPositions[3] += servoSpeeds[3];
    if (servoPositions[3] <= 0) {
      servoPositions[3] = 0;
      servoSpeeds[3] = 10;
    }
    if (servoPositions[3] >= 180) {
      servoPositions[3] = 180;
      servoSpeeds[3] = -10;
    }
    ///////////////////////



  } else if(distance < 40 && distance > 20) {
    Serial.println("the distance is 40");
    
 ///////////////////////
    //servo 1 behaviour . 2
    servoTimeouts[0]++;
    if(servoTimeouts[0] > 10) {
      servoTimeouts[0] = 0;
      if(servoPositions[0] == 60) {
        servoPositions[0] = 80;
      } else {
        servoPositions[0] = 60;
      }
    }
    
    /////////////////////// 
    //servo 2 behaviour 2
    servoTimeouts[1]++;
    if(servoTimeouts[1] > 10) {
      servoTimeouts[1] = 0;
      if(servoPositions[1] == 60) {
        servoPositions[1] = 80;
      } else {
        servoPositions[1] = 60;
      }
    }
    ///////////////////////
    
    //servo 3 behaviour 2
    servoTimeouts[2]++;
    if(servoTimeouts[2] > 10) {
      servoTimeouts[2] = 0;
      if(servoPositions[2] == 60) {
        servoPositions[2] = 80;
      } else {
        servoPositions[2] = 60;
      }
    }
    
    ///////////////////////

    //servo 4 behaviour
    servoTimeouts[3]++;
    if(servoTimeouts[3] > 10) {
      servoTimeouts[3] = 0;
      if(servoPositions[3] == 60) {
        servoPositions[3] = 80;
      } else {
        servoPositions[3] = 60;
      }
    }
    
    ///////////////////////
  

  } else if(distance < 20) {
    Serial.println("the distance is 20");
    
 ///////////////////////
    //servo 1 behaviour 3
    servoTimeouts[0]++;
    if(servoTimeouts[0] > 10) {
      servoTimeouts[0] = 0;
      if(servoPositions[0] == 20) {
        servoPositions[0] = 100;
      } else {
        servoPositions[0] = 60;
      }
    }
    
    /////////////////////// 
    //servo 2 behaviour 2
    servoTimeouts[1]++;
    if(servoTimeouts[1] > 10) {
      servoTimeouts[1] = 0;
      if(servoPositions[1] == 20) {
        servoPositions[1] = 100;
      } else {
        servoPositions[1] = 60;
      }
    }
    ///////////////////////
    
    //servo 3 behaviour 2
    servoTimeouts[2]++;
    if(servoTimeouts[2] > 10) {
      servoTimeouts[2] = 0;
      if(servoPositions[2] == 20) {
        servoPositions[2] = 100;
      } else {
        servoPositions[2] = 60;
      }
    }
    
    ///////////////////////

    //servo 4 behaviour
    servoTimeouts[3]++;
    if(servoTimeouts[3] > 10) {
      servoTimeouts[3] = 0;
      if(servoPositions[3] == 20) {
        servoPositions[3] = 100;
      } else {
        servoPositions[3] = 60;
      }
    }
    
    ///////////////////////

    
  }  else {

    ///////////////////////
    //servo 1 scanning
    servoPositions[0] += servoSpeeds[0];
    if (servoPositions[0] <= 0) {
      servoPositions[0] = 0;
      servoSpeeds[0] = 2;
    }
    if (servoPositions[0] >= 180) {
      servoPositions[0] = 180;
      servoSpeeds[0] = -2;
    }
    
    ///////////////////////
    //servo 2 scanning
    servoPositions[1] += servoSpeeds[1];
    if (servoPositions[1] <= 0) {
      servoPositions[1] = 0;
      servoSpeeds[1] = 2;
    }
    if (servoPositions[1] >= 180) {
      servoPositions[1] = 180;
      servoSpeeds[1] = -2;
    }
    ///////////////////////

    //servo 3 scanning
   servoPositions[2] += servoSpeeds[2];
    if (servoPositions[2] <= 0) {
      servoPositions[2] = 0;
      servoSpeeds[2] = 2;
    }
    if (servoPositions[2] >= 180) {
      servoPositions[2] = 180;
      servoSpeeds[2] = -2;
    }
    ///////////////////////

     //servo 4 scanning
   servoPositions[3] += servoSpeeds[3];
    if (servoPositions[3] <= 0) {
      servoPositions[3] = 0;
      servoSpeeds[3] = 2;
    }
    if (servoPositions[3] >= 180) {
      servoPositions[3] = 180;
      servoSpeeds[3] = -2;
    }
    ///////////////////////

  }
    servo1.write(servoPositions[0]);
    servo2.write(servoPositions[1]);
    servo3.write(servoPositions[2]);
    servo4.write(servoPositions[3]);

  delay(60);

}
