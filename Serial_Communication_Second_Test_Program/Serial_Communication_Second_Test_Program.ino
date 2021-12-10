//Program : Serial Communication Program - Control a led from PC by serial communication

//Pin numbers alloted
//for LED 
int pinLED = 5;
//Variable alloted to store data from computer
char valueOnOff = 0;


void setup() {
  // put your setup code here, to run once:
  //Initialise the baud rate
  Serial.begin(9600);
  //Initialise the Pin for LED
  pinMode(pinLED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Check any data is available in the serial buffer
  if(Serial.available() > 0)
  {
    //if available read the character
    valueOnOff = Serial.read();
    if(valueOnOff == '1')
    {
      digitalWrite(pinLED, HIGH);
      Serial.println("LED is ON");
    }
    else if(valueOnOff == '0')
    {
      digitalWrite(pinLED, LOW);
      Serial.println("LED is OFF");
    }
    else
    {
    }
  }
  //if value is 1 on the LED
  //if value is 0 off the LED
}
