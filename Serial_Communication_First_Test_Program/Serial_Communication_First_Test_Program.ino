//Program : Serial Communication Program - Printing data using Serial Communication in the PC as emulator output device


void setup() {
  // put your setup code here, to run once:
  //set the serial communication baud rate to 9600 //9600 is most commonly used baud rate, make sure the same baud rate is used in target device also
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  //print the line "This is a"
  Serial.println("This is a");
  //Pring the line "test program"
  Serial.println("test program");
  //delay
  delay(1000);
}


/*


void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
*/
