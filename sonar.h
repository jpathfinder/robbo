#ifndef sonar.h
#define sonar.h

#include "Arduino.h"

class Sonar{
  
  private:
    int trigPin;
    int echoPin;
    long duration;
    int distance;
    
    
  
  public:
    
    void set(int trig, int echo);
    int takereading();
  
  
};





#endif
