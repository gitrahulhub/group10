#include <I2Cdev.h>

#include <Wire.h>


#define ADDRESS  0x14
#define AREA 0
#define DENSITY 0
#define RES 65535
float data;
byte high, low;
//int RES=65535;

void setup(){

Serial.begin(9600); //this creates the Serial Monitor
Wire.begin(); //this creates a Wire object

}

void loop(){

Wire.requestFrom(ADDRESS, 2);


while(Wire.available()){
  high=Wire.read();
  low=Wire.read();
}
 data= high*256 + low;
Serial.println(data);
//double voltage=5*((double)((Wire.read()*255)+Wire.read())/RES);
//double  pressure = (((1/0.057)*((voltage/5)-0.5))+8.77192982456)*1000;
//Serial.print("analog pressure data: "); Serial.println(analogRead(4));


delay(10);
} 

