////Defining the required packages
//#include<SPI.h>
//#include<Wire.h>
//#include<Adafruit_GFX.h>
//#include<Adafruit_SSD1306.h>

////Pin Allocation
//int analogPin_OLEDSDA = A4;
//int analogPin_OLEDSCK = A5;
//int digitalPin_OLEDReset = 12;//This is not connected but using as this is a formality, or else this brings a error screen with noises
//Adafruit_SSD1306 display(digitalPin_OLEDReset);

//Global Variables
#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 32 // OLED display height, in pixels

void init_OLED()
{
  //Initialising the OLED Display
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);//0x3C is the address of I2C
  display.clearDisplay();
}

void oLEDMain()
{
//  display_DataOnScreen("Siva Joshna");
//  testMessage();
//  displayImage();
//  testPersonalMessage();
//  testDynamicMessage("Siva Joshna");
//  displayDrawings();
  displayImage();
}

void on_OLED()
{
  display.ssd1306_command(SSD1306_DISPLAYON);
}

void display_DataOnScreen(String message)
{
  //Set Text Size
  display.setTextSize(1);
  //Set Display Color
  display.setTextColor(SSD1306_BLACK, SSD1306_WHITE);
//  //Set Cursour Value
//  display.setCursor(0,0);
//  //Add Display Message
//  display.println(message);
//  display.println(message);
//  display.println(message);
//  display.println(message);
  
  
  display.setCursor(0,0);
  display.println("1");
  
//  display.setCursor(0,8);
  display.setCursor(0,9);
  display.println("2");
  
//  display.setCursor(0,16);
  display.setCursor(0,18);
  display.println("3");
  
//  display.setCursor(0,24);
  display.setCursor(0,27);
  display.println("123456789012345678901");//21 characters
  
  //Display
  display.display();
}

void clear_OLEDScreen()
{
  display.clearDisplay();
}

void off_OLED()
{
  display.ssd1306_command(SSD1306_DISPLAYOFF);
}
