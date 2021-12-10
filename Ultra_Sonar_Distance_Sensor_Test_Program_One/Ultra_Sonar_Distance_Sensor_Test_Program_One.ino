//Program: Test program to test Sonar Based Distance calculation Sensor Module

//Pin Allocation
int echoPin = 6;
int triggerPin = 5;

//Global Variables

void setup() {
  // put your setup code here, to run once:
  //set BAUD Rate
  Serial.begin(9600);
  //initialisation of the pins
  pinMode(echoPin, INPUT);//Digital Input
  pinMode(triggerPin, OUTPUT);//Digital Output
}

void loop() {
  // put your main code here, to run repeatedly:
  ultraSonicReading();
}

long ultraSonicReading()
{
  //Off the trigger Signal to make sure
  digitalWrite(triggerPin, LOW);
  //Delay
  delayMicroseconds(2);
  //On the triger Signal to start the sensor
  digitalWrite(triggerPin, HIGH);
  //Delay
  delayMicroseconds(10);
  //Off the trigger Signal
  digitalWrite(triggerPin, LOW);

  //duration of the signal between sending and receiving
  int duration = pulseIn(echoPin, HIGH);

  long distanceInCMS = (duration*0.034)/2;// 340m/s converting into cms/microseconds and 2 for forward and backward

  //print the distance in centimeters
  Serial.println("Distance in cms: ");
  Serial.println(distanceInCMS);
  //Delay
  delay(250);
}
