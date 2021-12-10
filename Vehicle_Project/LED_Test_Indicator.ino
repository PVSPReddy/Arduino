int pinLEDCurrentRunning = -1;

// To switch on Single the LED
void switchOnIndicationLED(int pinNumber)//, String message = "")
{
  //Print data from the caller
//  if(message != "")
//  {
//    Serial.println(message);
//  }
  
  if(pinLEDCurrentRunning != -1)
  {
    digitalWrite(pinLEDCurrentRunning, LOW);
  }
  //On the triger Signal to start the sensor
  digitalWrite(pinNumber, HIGH);
  pinLEDCurrentRunning = pinNumber;

  //print the distance in centimeters
  Serial.println("Current Pin Number is: ");
  Serial.println(pinNumber);
}


// To switch on the LED
void switchOnLED(int pinNumber)
{
  //On the triger Signal
  digitalWrite(pinNumber, HIGH);
}

// To switch off the LED
void switchOffLED(int pinNumber)
{
  //Off the triger Signal
  digitalWrite(pinNumber, LOW);
}
