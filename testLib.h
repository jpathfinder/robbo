#ifndef testLib.h
#define testLib.h

#include "Arduino.h"

class Engine{
  
  private:
  
  int ENA;
  int ENB;
  int In1;
  int In2;
  int In3;
  int In4;
  
  public:
  Engine();
  
  void add(int in1, int in2, int in3, int in4, int ena, int enb);
  
  void add(int in1, int in2, int in3, int in4);
  
  void forwards();
  void backwards();
  void breaking();
  void turnright();
  void turnleft();
  
  
};



#endif
