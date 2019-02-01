/*This example is for testing 8 IR Sensors

Dont forget to add library files to "C:\Program Files\Arduino\libraries\" 
  or wherever your Arduino libraries are stored

*/
#include <SharpSensor.h>

//Number of total sensors 
const byte totalSensors = 8;

//Creation of sensors array by using their pins
SharpSensor sensors[totalSensors] = {{A4},{A5},{A6},{A7},{A8},{A9},{A10},{A11}};
//Creation of distance array
uint16_t distances[totalSensors];

void setup() {
  Serial.begin(9600);
}

void loop(){

  //Calculate distance values from each sensor and store them into distance array
  for (byte i = 0; i < totalSensors; i++) {
    sensors[i].calculateDistance();
    distances[i] = sensors[i].getDistance();
  }

  //Writing distance values to Serial Port
  for (byte i = 1; i < totalSensors+1; i++) {
    Serial.print(i);Serial.print("th sensor's value: ");Serial.println(distances[i]);
  }  
Serial.println();
Serial.println();
  delay(100);
}
