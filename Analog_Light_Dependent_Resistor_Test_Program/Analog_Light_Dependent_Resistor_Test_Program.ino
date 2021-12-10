//Program : Reading LDR values

//Global Variables
int analogPin = 0;//A0;
//#define analogPin A0
//Variable for storing the LDR Values
int valueLDR;

void setup() {
  // put your setup code here, to run once:
  //initialise the serial baud rate
  Serial.begin(9600);
  //initialising the LDR pin
  pinMode(A0, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Read analog value
  valueLDR = analogRead(A0);
  //Send value to serial port
  Serial.print("LDR value is : ");
  Serial.println(valueLDR);
  //delay
  delay(1000);
}
