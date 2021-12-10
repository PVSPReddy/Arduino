//Program: Test program to test Sonar Based Distance calculation Sensor Module

//Pin Allocation
int digitalPin_SafeLED = 2;
int digitalPin_RiskLED = 3;
int digitalPin_DangerLED = 4;

int digitalPin_Trigger = 5;
int digitalPin_Echo = 6;

int analogPin_XAxis = A0;
int analogPin_YAxis = A1;
int digitalPin_SW = 7;
//Global Variables

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
}

void loop() {
  // put your main code here, to run repeatedly:
  //getting the distance from USSensor
  //ultraSonicMain();
  
  //getting the axis from Joystick
  joystickMain();
  
  //Delay
  delay(1050);
}

void ultraSonicMain() {
  // put your main code here, to run repeatedly:
  //getting the distance from USSensor
  long reading = ultraSonicReading();
  //Check for danger distance
  if(reading < 6)
  {
    switchOnIndicationLED(digitalPin_DangerLED);
  }
  else if(reading >= 6 && reading < 20)
  {
    switchOnIndicationLED(digitalPin_RiskLED);
  }
  else
  {
    switchOnIndicationLED(digitalPin_SafeLED);
  }
}

void joystickMain()
{
  int *joyStickAxisValues;
  
  joyStickAxisValues = joyStickDirections();
  
  //print the X-Axis Value in
  Serial.print("X-Axis Value is: ");
  //Raw format
  Serial.println((int)*(joyStickAxisValues+0));
  //Serial.println("X-Axis Value is: %d", *(joyStickAxisValues+0));
  
  //print the Y-Axis Value in
  Serial.print("Y-Axis Value is: ");
  //Raw format
  Serial.println((int)*(joyStickAxisValues+1));
  //Serial.println("Y-Axis Value is: %d", *(joyStickAxisValues+1));
}
