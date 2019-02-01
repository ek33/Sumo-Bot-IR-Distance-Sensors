/*
github.com/ek33/Sumo-Bot-IR-Distance-Sensors

A library for testing and getting distance values from IR Distance Sensors.

This library is designed to use with: "Sharp GP2Y0A60SZLF Analog Distance Sensor 10-150cm, 5V"
More information about the sensor: "pololu.com/product/2474"

*/

#ifndef SharpSensor_h
#define SharpSensor_h

#include <Arduino.h>

//The Sensor Class
class SharpSensor
{
public:
	//Constructor
  SharpSensor(const byte pin);

  //Distance Calculation Function
  void calculateDistance();

  //Get Distance Fuction
  uint16_t getDistance();

private:
  //The pin that sensor is connected to
  byte _pin;

  //The most recent distance value read and calculated
  uint16_t _distance;
};
#endif
