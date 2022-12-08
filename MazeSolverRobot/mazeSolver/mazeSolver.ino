#include "FunctionsHere.h"

RobotFunction robotDoes;


void setup() {
  robotDoes.initializeBT();
  robotDoes.setUpSensors();
}

void loop() 
{
    
  static int i = 0;
  if( i <= 2)
  {
    while(robotDoes.getDistanceSharp() > 5)
    {
      robotDoes.setUpWheels(200, 150);
    }
    robotDoes.setUpWheels(0, 0);
    unsigned long timer = 200;
    unsigned long tempo = millis();
    while(millis()<tempo+timer){
      robotDoes.setUpWheels(200,-150);
    }
    i++;
  }else if(i = 3)
  {
    while(robotDoes.getDistanceSharp() > 8)
    {
      robotDoes.setUpWheels(200,150);
    }
    robotDoes.setUpWheels(0,0);
    unsigned long timer = 200;
    unsigned long tempo = millis();
    while(millis()<tempo+timer){
      robotDoes.setUpWheels(200,-150);
    }
    i++;
  }else if(i<=2 && robotDoes.getDistanceSharp() == 4)
  {
    robotDoes.setUpWheels(0,0);
    unsigned long timer = 200;
    unsigned long tempo = millis();
    while(millis()<tempo+timer){
      robotDoes.setUpWheels(200,-150);
    }
    i++;
  }
  else if(i<=2 && robotDoes.getDistanceSharp() == 4)
  {
    robotDoes.setUpWheels(0,0);
    unsigned long timer = 200;
    unsigned long tempo = millis();
    while(millis()<tempo+timer){
      robotDoes.setUpWheels(200,-150);
    }
    i++;
  }else if(i<=2 && robotDoes.getDistanceSharp() == 4)
  {
    robotDoes.setUpWheels(0,0);
    unsigned long timer = 200;
    unsigned long tempo = millis();
    while(millis()<tempo+timer){
      robotDoes.setUpWheels(200,-150);
    }
    i++;
  }
  
}
