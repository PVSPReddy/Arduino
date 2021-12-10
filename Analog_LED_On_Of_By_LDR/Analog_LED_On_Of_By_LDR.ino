//Program : Reading LDR values

//Global Variables
int analogPinLDR = A0;
int digitalPinLED = 6;
//Variable for storing the LDR Values
int valueLDR;

void setup() {
  // put your setup code here, to run once:
  //initialise the serial baud rate
  Serial.begin(9600);
  //initialising the LDR pin
  pinMode(analogPinLDR, INPUT);
  pinMode(digitalPinLED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Read analog value
  valueLDR = analogRead(analogPinLDR);
  //Send value to serial port
  Serial.print("LDR value is : ");
  Serial.println(valueLDR);
  if(valueLDR >= 400)
  {
    digitalWrite(digitalPinLED, HIGH);
    Serial.println("It is Dark");
  }
  else
  {
    digitalWrite(digitalPinLED, LOW);
    Serial.println("It is not Dark");
  }
  //delay
  delay(200);
}
