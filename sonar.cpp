#include "sonar.h"


void Sonar::set(int trig, int echo){
  
  trigPin=trig;
  echoPin=echo;
   
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT); 
    
}

int Sonar::takereading(){
  
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance= duration*0.034/2;
  
  return distance;
  
}
