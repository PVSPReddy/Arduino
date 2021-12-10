//Program : To blink an LED
//Pin Number allotted for LED
int pinLED = 6;

void setup() {
  // put your setup code here, to run once:
  //Initialize the LED pin here
  pinMode(pinLED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Blinking Code
  userCode();
}

void userCode(){
  //sending a HIGH
  digitalWrite(pinLED, HIGH);
  //delay
  delay(1000);// in milliseconds
  //sending a LOW
  digitalWrite(pinLED, LOW);
  //delay
  delay(1000);// in milliseconds
}
