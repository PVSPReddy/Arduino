//Program : Conntrolling two leds same time
//Pin number declaration
//For LED1
int pinLED1 = 6;
//For LED2
int pinLED2 = 7;


void setup() {
  // put your setup code here, to run once:
  //Pin initialzation of led1
  pinMode(pinLED1, OUTPUT);
  //Pin initialzation of led2
  pinMode(pinLED2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //HIGH on PIN1
  digitalWrite(pinLED1, HIGH);
  //LOW on PIN2
  digitalWrite(pinLED2, LOW);
  //delay
  delay(1000);
  //HIGH on PIN2
  digitalWrite(pinLED2, HIGH);
  //LOW on PIN1
  digitalWrite(pinLED1, LOW);
  //delay
  delay(1000);
}
