/*
This file aims to simplify the process of setting pins by exposing an easily understandable config
*/

//LCD Config
//protip: It's a really bad idea to use pins 0 and 1 when using Serial
#define lcdReset 8
#define lcdEnable 9
#define lcdDS4 4
#define lcdDS5 5
#define lcdDS6 6
#define lcdDS7 7
#define lcdColumns 20
#define lcdRows 4
#define lcdRelayPin 11
#define encoderPin 3
#define buttonPin 2
#define debDelay 5

//DHT Config
#define DHTPIN 12
#define DHTTYPE 22

//Soil Moisture Thresholds
float lowerInitialBound = 652; //kind of a weird oxymoron but ima ignore that
float upperInitialBound = 336; //I can't come up with better naming pls help
float lowerFinalBound = 2.6;
float upperFinalbound = 6.1;
int sensorVal;
float moistureVal;
float moistureThreshold = 3.5;