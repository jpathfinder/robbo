#include "testLib.h"

Engine::Engine(){
  
  Serial.println("Engines online!");
}

void Engine::add(int in1, int in2, int in3, int in4, int ena, int enb){
  
  ENA=ena;
  ENB=enb;
  In1=in1;
  In2=in2;
  In3=in3;
  In4=in4;
  
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(In1, OUTPUT);
  pinMode(In2, OUTPUT);
  pinMode(In3, OUTPUT);
  pinMode(In4, OUTPUT);
  
}

void Engine::add(int in1, int in2, int in3, int in4){
  
  In1=in1;
  In2=in2;
  In3=in3;
  In4=in4;
  
  pinMode(In1, OUTPUT);
  pinMode(In2, OUTPUT);
  pinMode(In3, OUTPUT);
  pinMode(In4, OUTPUT);
}

void Engine::forwards(){
  
  analogWrite(ENA, 110);
  analogWrite(ENB, 110);
  
  digitalWrite(In1, HIGH);
  digitalWrite(In2, LOW);
  
  digitalWrite(In3, HIGH);
  digitalWrite(In4, LOW);
 
  
}
  
void Engine::backwards(){
  
  digitalWrite(In1, LOW);
  digitalWrite(In2, HIGH);
  
  digitalWrite(In3, LOW);
  digitalWrite(In4, HIGH);
}

void Engine::breaking(){
  
  digitalWrite(In1, LOW);
  digitalWrite(In2, LOW);
  
  digitalWrite(In3, LOW);
  digitalWrite(In4, LOW);  
}

void Engine::turnright(){
  
  analogWrite(ENA, 80);
  analogWrite(ENB, 80);
  
  digitalWrite(In1, HIGH);
  digitalWrite(In2, LOW);
  
  digitalWrite(In3, LOW);
  digitalWrite(In4, HIGH);
  
  
  
  }

void Engine::turnleft(){
  
  analogWrite(ENA, 80);
  analogWrite(ENB, 80);
  
  digitalWrite(In1, LOW);
  digitalWrite(In2, HIGH);
  
  digitalWrite(In3, HIGH);
  digitalWrite(In4, LOW);
  
  
  
  
}
  
  

  

