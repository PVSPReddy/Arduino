//Program : Test Program to test Arduino Nano

//Allotting the pins
//Analog Pins
int analogPin0 = A0;
int analogPin1 = A1;
int analogPin2 = A2;
int analogPin3 = A3;
int analogPin4 = A4;
int analogPin5 = A5;
int analogPin6 = A6;
int analogPin7 = A7;
//#define analogPin A0
//Digital Pins
int digitalPin0 = 0;
int digitalPin1 = 1;
int digitalPin2 = 2;
int digitalPin3 = 3;
int digitalPin4 = 4;
int digitalPin5 = 5;
int digitalPin6 = 6;
int digitalPin7 = 7;
int digitalPin8 = 8;
int digitalPin9 = 9;
int digitalPin10 = 10;
int digitalPin11 = 11;
int digitalPin12 = 12;

//Global Variables
//Variable for storing the LDR Values
int valueLDR;

void setup() {
  // put your setup code here, to run once:

  //Initialising the Baud Rate
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  int analogData0 = analogRead(analogPin0);
  Serial.println("Pin Test Values: ");
  Serial.print("PIN is A0 and Value is : ");
  Serial.println(analogData0);
  delay(1000);
  
  /*
  //Reading the Analog pins
  int analogData0 = analogRead(analogPin0);
  int analogData1 = analogRead(analogPin1);
  int analogData2 = analogRead(analogPin2);
  int analogData3 = analogRead(analogPin3);
  int analogData4 = analogRead(analogPin4);
  int analogData5 = analogRead(analogPin5);
  int analogData6 = analogRead(analogPin6);
  int analogData7 = analogRead(analogPin7);
  //Reading the digital pins
  int digitalData0 = digitalRead(digitalPin0);
  int digitalData1 = digitalRead(digitalPin1);
  int digitalData2 = digitalRead(digitalPin2);
  int digitalData3 = digitalRead(digitalPin3);
  int digitalData4 = digitalRead(digitalPin4);
  int digitalData5 = digitalRead(digitalPin5);
  int digitalData6 = digitalRead(digitalPin6);
  int digitalData7 = digitalRead(digitalPin7);
  int digitalData8 = digitalRead(digitalPin8);
  int digitalData9 = digitalRead(digitalPin9);
  int digitalData10 = digitalRead(digitalPin10);
  int digitalData11 = digitalRead(digitalPin11);
  int digitalData12 = digitalRead(digitalPin12);
  //Printing the Analog Pins
  Serial.println("Analog Pin Test Values should be constant through out");
  Serial.println(analogData0);
  Serial.println(analogData1);
  Serial.println(analogData2);
  Serial.println(analogData3);
  Serial.println(analogData4);
  Serial.println(analogData5);
  Serial.println(analogData6);
  Serial.println(analogData7);
  //Printing the Digital Pins
  Serial.println("Digital Pin Test Values should be constant through out");
  Serial.println(digitalData0);
  Serial.println(digitalData1);
  Serial.println(digitalData2);
  Serial.println(digitalData3);
  Serial.println(digitalData4);
  Serial.println(digitalData5);
  Serial.println(digitalData6);
  Serial.println(digitalData7);
  Serial.println(digitalData8);
  Serial.println(digitalData9);
  Serial.println(digitalData10);
  Serial.println(digitalData11);
  Serial.println(digitalData12);
  //Delay
  delay(100000);
  */

}
