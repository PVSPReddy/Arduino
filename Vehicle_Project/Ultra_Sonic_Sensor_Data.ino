long ultraSonicReading()
{
  //Off the trigger Signal to make sure
  digitalWrite(digitalPin_Trigger, LOW);
  //Delay
  delayMicroseconds(2);
  //On the triger Signal to start the sensor
  digitalWrite(digitalPin_Trigger, HIGH);
  //Delay
  delayMicroseconds(10);
  //Off the trigger Signal
  digitalWrite(digitalPin_Trigger, LOW);

  //duration of the signal between sending and receiving
  int duration = pulseIn(digitalPin_Echo, HIGH);

  long distanceInCMS = (duration*0.034)/2;// 340m/s converting into cms/microseconds and 2 for forward and backward

  //print the distance in centimeters
  Serial.println("Distance in cms: ");
  Serial.println(distanceInCMS);
  //Delay
  //delay(250);
  return distanceInCMS;
}
