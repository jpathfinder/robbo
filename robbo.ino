#include "testLib.h"
#include "sonar.h"
#include <Servo.h>

Engine en1;
Servo ser;
Sonar s;

void setup(){
  
  Serial.begin(9600);
  en1.add(7,8,9,10,5,11);
  
  s.set(3,2);
  
  ser.attach(6);
  delay(3000);
  
  
  //engine test
  
  /*
  en1.forwards();
  
  delay(1000);
  en1.breaking();
  delay(500);
  
  en1.backwards();
    
  delay(1000);
  en1.breaking();
  delay(500);
  
  en1.turnright();
    
  delay(1000);
  en1.breaking();
  delay(500);
  
  en1.turnleft();
  
  delay(1000);
  
  en1.breaking();
  delay(500);
  
  */
 
  
  
  
  
  
  
}



void loop(){  
  

  
  if(s.takereading()>50){
    
    Serial.println("going forwards");
    en1.forwards();
  }
  
  else{
    Serial.print("engine stops, turn head to the right");
    en1.breaking();
    ser.write(20);
    //delay(2000);
    //int d1 = s.takereading();
    Serial.println("My reading D1 = ");
    Serial.println(s.takereading());
    delay(2000);
    if(s.takereading()>50){
      Serial.println("Hey, D1 is big, I can turn right!");
      //delay(2000);
      en1.turnright();
      delay(500);
      en1.breaking();
      delay(500);
      
      ser.write(90);
      
    }
    else{
      Serial.println("Hey, no room here, checking left side");
      ser.write(160);
      //delay(2000);
      //s.takereading();
      Serial.println("My reading D2");
      Serial.println(s.takereading());
      delay(2000);
      if(s.takereading()>50)
      {
        Serial.println("Hey, room here, turning left");
        //delay(2000);
        en1.turnleft();
        delay(500);
        en1.breaking();
        delay(500);
        ser.write(90);
      }
      else
      {
        
        Serial.println("WoW, tight!! Going backwards");
        //delay(2000);
        en1.backwards();
        delay(800);
        en1.breaking();
        delay(500);
        
        ser.write(90);
       
      }
    }
    
    
  }
   
    delay(100);
  }
    
    
   
 
