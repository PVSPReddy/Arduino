//Program: Test program to test Sonar Based Distance calculation Sensor Module

int *joyStickDirections()
{
  //Reading X-Axis Value
  int xAxisValue = analogRead(analogPin_XAxis);
  
  //Reading Y-Axis Value
  int yAxisValue = analogRead(analogPin_YAxis);

  static int joystickDirection[2];// = {xAxisValue, yAxisValue};
  joystickDirection[0] = xAxisValue;
  joystickDirection[1] = yAxisValue;
  
  /*
  //print the X-Axis Value in
  Serial.print("X-Axis Value is: ");
  //Raw format
  Serial.println(xAxisValue);
  
  //print the Y-Axis Value in
  Serial.print("Y-Axis Value is: ");
  //Raw format
  Serial.println(yAxisValue);
  /**/

  return joystickDirection;
}
