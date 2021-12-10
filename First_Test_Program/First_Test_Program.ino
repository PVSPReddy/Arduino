//Program: Turn on LED
//LED connected to pin 6
//int ledTestPin = 6;

void setup() {
  // put your setup code here, to run once:
  //initialization of ledTestPin
  pinMode(6, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:

  //Turn on LED at ledTestPin
  digitalWrite(6, HIGH);
}
