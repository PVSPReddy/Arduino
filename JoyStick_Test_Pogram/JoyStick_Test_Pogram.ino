//Program: Test program to test Sonar Based Distance calculation Sensor Module

//Pin Allocation
int pinXAxis = A0;
int pinYAxis = A1;

int pinSW = 4;

//Global Variables

void setup() {
  // put your setup code here, to run once:
  //set BAUD Rate
  Serial.begin(9600);
  //initialisation of the pins
  //Sensor Pins
  pinMode(pinXAxis, INPUT);//Digital Input
  pinMode(pinYAxis, INPUT);//Digital Output
  //SW pin
  pinMode(pinSW, OUTPUT);//Digital Input
  //Keep SW on High always
  digitalWrite(pinSW, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  //getting the distance from USSensor
  joyStickDirection();
  //Delay
  delay(1000);
}

void joyStickDirection()
{
  //Reading X-Axis Value
  int xAxisValue = analogRead(pinXAxis);
  
  //Reading Y-Axis Value
  int yAxisValue = analogRead(pinYAxis);
  
  //print the X-Axis Value in
  Serial.print("X-Axis Value is: ");
  //Raw format
  Serial.println(xAxisValue);
  
  //print the Y-Axis Value in
  Serial.print("Y-Axis Value is: ");
  //Raw format
  Serial.println(yAxisValue);
}
