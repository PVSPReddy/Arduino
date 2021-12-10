//Program : Fade in and out of LED - LOW to HIGH

//Pin number declaration
//For LED
int pinFade = 5;//PWM(Pulse Width Modulation) pin

//Global variable declaration
//For Booleans
bool doneFadeOut = false;
//For integers
int delayTimeCommon = 500;



void setup() {
  // put your setup code here, to run once:
  //Pin initialzation for Fading led
  pinMode(pinFade, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  if(!doneFadeOut)
  {
    //Fading Out from 0ff to 0 i.e., 0%
    analogWrite(pinFade, 0);
    //delay
    delay(delayTimeCommon);
    //Fading Out to 25% i.e., (255*(1/4))
    analogWrite(pinFade, 63);
    //delay
    delay(delayTimeCommon);
    //Fading Out to 50% i.e., (255*(2/4))
    analogWrite(pinFade, 127);
    //delay
    delay(delayTimeCommon);
    //Fading Out to 75% i.e., (255*(3/4))
    analogWrite(pinFade, 191);
    //delay
    delay(delayTimeCommon);
    //Fading Out to 100% i.e., (255*(4/4))
    analogWrite(pinFade, 255);
    //delay
    delay(delayTimeCommon);
    doneFadeOut = false;
  }
  else
  {
    //Fading Out to 100% i.e., (255*(4/4))
    analogWrite(pinFade, 255);
    //delay
    delay(delayTimeCommon);
    //Fading Out to 75% i.e., (255*(3/4))
    analogWrite(pinFade, 191);
    //delay
    delay(delayTimeCommon);
    //Fading Out to 50% i.e., (255*(2/4))
    analogWrite(pinFade, 127);
    //delay
    delay(delayTimeCommon);
    //Fading Out to 25% i.e., (255*(1/4))
    analogWrite(pinFade, 63);
    //delay
    delay(delayTimeCommon);
    //Fading Out from 0ff to 0 i.e., 0%
    analogWrite(pinFade, 0);
    //delay
    delay(delayTimeCommon);
    doneFadeOut = true;
  }
  //Fading In to 0
}
