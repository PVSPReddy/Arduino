//Program: Test program to test OLED SCREEN

////Defining the required packages
//#include<SPI.h>
//#include<Wire.h>
//#include<Adafruit_GFX.h>
//#include<Adafruit_SSD1306.h>

//Pin Allocation
int digitalPin_SafeLED = 2;
int digitalPin_RiskLED = 3;
int digitalPin_DangerLED = 4;

int digitalPin_Trigger = 5;
int digitalPin_Echo = 6;

int analogPin_XAxis = A0;
int analogPin_YAxis = A1;
int digitalPin_SW = 7;

int analogPin_OLEDSDA = A4;
int analogPin_OLEDSCK = A5;
int digitalPin_OLEDReset = 12;//This is not connected but using as this is a formality, or else this brings a error screen with noises
//Adafruit_SSD1306 display(digitalPin_OLEDReset);

////Global Variables
//#define SCREEN_WIDTH 128 // OLED display width, in pixels
//#define SCREEN_HEIGHT 64 // OLED display height, in pixels

void setup() {
  // put your setup code here, to run once:
  //set BAUD Rate
  Serial.begin(9600);
  //initialisation of the pins
  //Sensor Pins
  pinMode(digitalPin_Echo, INPUT);//Digital Input
  pinMode(digitalPin_Trigger, OUTPUT);//Digital Output
  //JotStick Pins
  pinMode(digitalPin_SW, OUTPUT);//Digital Output
  pinMode(analogPin_XAxis, INPUT);//Analog Input
  pinMode(analogPin_YAxis, INPUT);//Analog Output
  //LED pins
  pinMode(digitalPin_SafeLED, OUTPUT);//Digital Output
  pinMode(digitalPin_RiskLED, OUTPUT);//Digital Output
  pinMode(digitalPin_DangerLED, OUTPUT);//Digital Output
  
  //Keep SW on High always
  digitalWrite(digitalPin_SW, HIGH);

  //Initialising the OLED Display
  init_OLED();

  //Delay
  delay(1000);
  //OLED program to display data on screen
  oLEDMain();
}

void loop() {
  // put your main code here, to run repeatedly:
  
  //OLED program to display data on screen
  //oLEDMain();
  
  //Delay
  //delay(2000);
}
