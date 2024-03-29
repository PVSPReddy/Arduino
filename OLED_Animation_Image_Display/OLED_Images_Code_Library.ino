
void testDisplayBitmap(String message)
{
  //Set Text Size
  display.setTextSize(1);
  //Set Display Color
  display.setTextColor(SSD1306_WHITE);

  //display the dynamic message
  display.setCursor(0,0);
  display.println(message);
  
  //Display
  display.display();
}

void testDynamicMessage(String message)
{
  //Set Text Size
  display.setTextSize(1);
  //Set Display Color
  display.setTextColor(SSD1306_WHITE);

  //display the dynamic message
  display.setCursor(0,0);
  display.println(message);
  
  //Display
  display.display();
}

void testPersonalMessage()
{
  //Set Text Size
  display.setTextSize(1);
  //Set Display Color
  display.setTextColor(SSD1306_BLACK, SSD1306_WHITE);
  
  display.setCursor(0,0);
  display.println("Siva");
  
  display.setCursor(0,9);
  display.write(3);
  
  display.setCursor(0,18);
  display.println("Joshna");
  
  //Display
  display.display();
}

void testMessage()
{
  //Set Text Size
  display.setTextSize(1);
  //Set Display Color
  display.setTextColor(SSD1306_BLACK, SSD1306_WHITE);
  
  display.setCursor(0,0);
  display.println("1");
  
  display.setCursor(0,9);
  display.println("2");
  
  display.setCursor(0,18);
  display.println("3");
  
  display.setCursor(0,27);
  display.println("123456789012345678901");//21 characters
  
  //Display
  display.display();
}

void displayDrawings()
{
  
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0,0);
  display.println("Rectangle");
  display.drawRect(0, 15, 15, 17, WHITE);//X, Y, Width, Height
  display.display();
  delay(2000);
  display.clearDisplay();
  
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0,0);
  display.println("Filled Rectangle");
  display.fillRect(0, 15, 60, 40, WHITE);//X, Y, Width, Height
  display.display();
  delay(2000);
  display.clearDisplay();
  
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0,0);
  display.println("Round Rectangle");
  display.drawRoundRect(0, 15, 60, 40, 8, WHITE);//X, Y, Width, Height, Corner Radius
  display.display();
  delay(2000);
  display.clearDisplay();

  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0,0);
  display.println("Filled Round Rectangl");
  display.fillRoundRect(0, 15, 60, 40, 8, WHITE);//X, Y, Width, Height, Corner Radius
  display.display();
  delay(2000);
  display.clearDisplay();

  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0,0);
  display.println("Circle");
  display.drawCircle(20, 35, 20, WHITE);//CenterX, CenterY, Radius
  display.display();
  delay(2000);
  display.clearDisplay();

  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0,0);
  display.println("Filled Circle");
  display.fillCircle(20, 35, 20, WHITE);//CenterX, CenterY, Radius
  display.display();
  delay(2000);
  display.clearDisplay();

  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0,0);
  display.println("Triangle");
  display.drawTriangle(30, 15, 0, 60, 60, 60, WHITE);//3 X & Y coordinates (x0, y0, x1, y1, x2 & y2) 
  display.display();
  delay(2000);
  display.clearDisplay();

  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0,0);
  display.println("Filled Triangle");
  display.fillTriangle(30, 15, 0, 60, 60, 60, WHITE);//3 X & Y coordinates (x0, y0, x1, y1, x2 & y2) 
  display.display();
  delay(2000);
  display.clearDisplay();
  
}

const unsigned char testImage [] PROGMEM = {
  // 'Dollar Icon', 128x32px
0xff, 0xfc, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xc0, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xfe, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xf8, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xf0, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xf0, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xe0, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xc0, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xcf, 0xff, 0xff, 0xf3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0x8f, 0xf8, 0x1f, 0xf1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0x8f, 0xf1, 0x8f, 0xf1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0x8f, 0xe7, 0xe7, 0xf1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0x8f, 0xc6, 0x63, 0xf1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0x0f, 0xc6, 0x03, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0x0f, 0xc7, 0xc3, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0x0f, 0xc0, 0xe3, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0x0f, 0xc0, 0x33, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0x8f, 0xc6, 0x23, 0xf1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0x8f, 0xe7, 0xe7, 0xf1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0x8f, 0xf0, 0x0f, 0xf1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0x8f, 0xf8, 0x1f, 0xf1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xcf, 0xff, 0xff, 0xf3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xc0, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xe0, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xf0, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xf0, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xf8, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xfe, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xc0, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xfc, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};

const unsigned char testImageTwo [] PROGMEM = {
  // 'Dollar Icon', 32x32px
0xff, 0xfc, 0x3f, 0xff, 0xff, 0xc0, 0x03, 0xff, 0xff, 0x00, 0x00, 0xff, 0xfe, 0x00, 0x00, 0x7f, 
0xf8, 0x00, 0x00, 0x1f, 0xf0, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 0x0f, 0xe0, 0x00, 0x00, 0x07, 
0xc0, 0x00, 0x00, 0x03, 0xcf, 0xff, 0xff, 0xf3, 0x8f, 0xf8, 0x1f, 0xf1, 0x8f, 0xf1, 0x8f, 0xf1, 
0x8f, 0xe7, 0xe7, 0xf1, 0x8f, 0xc6, 0x63, 0xf1, 0x0f, 0xc7, 0x03, 0xf0, 0x0f, 0xc3, 0xc3, 0xf0, 
0x0f, 0xc1, 0xe3, 0xf0, 0x0f, 0xc0, 0x23, 0xf0, 0x8f, 0xc6, 0x63, 0xf1, 0x8f, 0xe7, 0xe7, 0xf1, 
0x8f, 0xf1, 0x8f, 0xf1, 0x8f, 0xf8, 0x1f, 0xf1, 0xcf, 0xff, 0xff, 0xf3, 0xc0, 0x00, 0x00, 0x03, 
0xe0, 0x00, 0x00, 0x07, 0xf0, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 0x0f, 0xf8, 0x00, 0x00, 0x1f, 
0xfe, 0x00, 0x00, 0x7f, 0xff, 0x00, 0x00, 0xff, 0xff, 0xc0, 0x03, 0xff, 0xff, 0xfc, 0x3f, 0xff 
};

void displayImage()
{
  // Clear the buffer.
  display.clearDisplay();
  
  // Display bitmap
//  display.drawBitmap(48, 0,  testImage, 128, 32, WHITE);//X, Y, image, Width of bitmap, Height of bitmap
  
  display.drawBitmap(48, 0,  testImageTwo, 32, 32, WHITE);//X, Y, image, Width of bitmap, Height of bitmap
  
  display.display();
}


const unsigned char testGifImageFrame1 [] PROGMEM = {
// '0_xCJ1LegluxAv_wuh-0', 96x24px
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 
0x00, 0x00, 0x7f, 0xff, 0xff, 0xc0, 0x3f, 0xbc, 0x0f, 0xff, 0xff, 0xf0, 0x2b, 0xf6, 0x03, 0xff, 
0xfe, 0x0f, 0xff, 0xff, 0xc3, 0xff, 0xff, 0x83, 0xff, 0xff, 0xf0, 0x7f, 0xf8, 0x7f, 0xff, 0xff, 
0xf0, 0x7f, 0xfe, 0x1f, 0xff, 0xff, 0xfc, 0x1f, 0xf1, 0xff, 0xff, 0xff, 0xfe, 0x3f, 0xfc, 0x7f, 
0xff, 0xff, 0xff, 0x8f, 0xc3, 0xff, 0xff, 0xff, 0xff, 0x0f, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xc3, 
0x87, 0xff, 0xff, 0xff, 0xff, 0x87, 0xe1, 0xff, 0xff, 0xff, 0xff, 0xe1, 0x8f, 0xff, 0xff, 0xff, 
0xff, 0xc7, 0xe3, 0xff, 0xff, 0xff, 0xff, 0xf1, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xe3, 0xc7, 0xff, 
0xff, 0xff, 0xff, 0xf8, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xe3, 0xc7, 0xff, 0xff, 0xff, 0xff, 0xf8, 
0x1f, 0xff, 0xfa, 0xbf, 0xff, 0xe3, 0xc7, 0xff, 0xfe, 0xbf, 0xff, 0xf8, 0x1f, 0xff, 0x80, 0x07, 
0xff, 0xe3, 0xc7, 0xff, 0xe0, 0x01, 0xff, 0xf8, 0x8f, 0xfe, 0x00, 0x73, 0xff, 0xc7, 0xe3, 0xff, 
0x80, 0x1c, 0xff, 0xf1, 0x87, 0xfc, 0x00, 0x78, 0xff, 0x87, 0xe1, 0xff, 0x00, 0x1e, 0x3f, 0xe1, 
0xc3, 0xfc, 0x00, 0x00, 0xff, 0x0f, 0xf0, 0xff, 0x00, 0x00, 0x3f, 0xc3, 0xf1, 0xfc, 0x00, 0x01, 
0xfe, 0x3f, 0xfc, 0x7f, 0x80, 0x00, 0x3f, 0x8f, 0xf8, 0x3e, 0x00, 0x01, 0xf0, 0x7f, 0xfe, 0x1f, 
0x80, 0x00, 0xfe, 0x1f, 0xfe, 0x0f, 0xc0, 0x0f, 0xc1, 0xff, 0xff, 0x83, 0xe0, 0x01, 0xf0, 0x7f, 
0xff, 0xc0, 0x25, 0x78, 0x0f, 0xff, 0xff, 0xf0, 0x16, 0x5e, 0x03, 0xff, 0xff, 0xfe, 0x00, 0x01, 
0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x5f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff

};

const unsigned char testGifImageFrame2 [] PROGMEM = {
// '0_xCJ1LegluxAv_wuh-69', 96x24px
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 
0x00, 0x00, 0x7f, 0xff, 0xff, 0xc0, 0x3f, 0xbc, 0x0f, 0xff, 0xff, 0xf0, 0x2b, 0xf6, 0x03, 0xff, 
0xfe, 0x0f, 0xff, 0xff, 0xc3, 0xff, 0xff, 0x83, 0xff, 0xff, 0xf0, 0x7f, 0xf8, 0x7f, 0xff, 0xff, 
0xf0, 0x7f, 0xfe, 0x1f, 0xff, 0xff, 0xfc, 0x1f, 0xf1, 0xff, 0xff, 0xff, 0xfe, 0x3f, 0xfc, 0x7f, 
0xff, 0xff, 0xff, 0x8f, 0xc3, 0xff, 0xff, 0xff, 0xff, 0x0f, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xc3, 
0x87, 0xff, 0xff, 0xff, 0xff, 0x87, 0xe1, 0xff, 0xff, 0xff, 0xff, 0xe1, 0x8f, 0xff, 0xff, 0xff, 
0xff, 0xc7, 0xe3, 0xff, 0xff, 0xff, 0xff, 0xf1, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xe3, 0xc7, 0xff, 
0xff, 0xff, 0xff, 0xf8, 0x1f, 0xfd, 0x9f, 0xff, 0xff, 0xe3, 0xc7, 0xff, 0xab, 0xff, 0xff, 0xf8, 
0x1f, 0xe0, 0x01, 0xff, 0xff, 0xe3, 0xc7, 0xfc, 0x00, 0x3f, 0xff, 0xf8, 0x1f, 0xc0, 0x0e, 0x7f, 
0xff, 0xe3, 0xc7, 0xf0, 0x03, 0x9f, 0xff, 0xf8, 0x8f, 0x80, 0x0e, 0x3f, 0xff, 0xc7, 0xe3, 0xe0, 
0x03, 0x8f, 0xff, 0xf1, 0x87, 0x80, 0x00, 0x1f, 0xff, 0x87, 0xe1, 0xe0, 0x00, 0x0f, 0xff, 0xe1, 
0xc3, 0x80, 0x00, 0x3f, 0xff, 0x0f, 0xf0, 0xe0, 0x00, 0x0f, 0xff, 0xc3, 0xf1, 0xc0, 0x00, 0x7f, 
0xfc, 0x3f, 0xfc, 0x70, 0x00, 0x1f, 0xff, 0x8f, 0xf8, 0x30, 0x01, 0xff, 0xf8, 0x7f, 0xfe, 0x1c, 
0x00, 0x7f, 0xfe, 0x1f, 0xfe, 0x0f, 0xff, 0xff, 0xc3, 0xff, 0xff, 0x83, 0xef, 0xff, 0xf0, 0x7f, 
0xff, 0xc0, 0x1f, 0xd8, 0x0f, 0xff, 0xff, 0xf0, 0x3f, 0xf9, 0x03, 0xff, 0xff, 0xfe, 0x00, 0x01, 
0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x5f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
};

const unsigned char testGifImageFrame3 [] PROGMEM = {
// '0_xCJ1LegluxAv_wuh-63', 96x24px
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xbf, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 
0x00, 0x00, 0x7f, 0xff, 0xff, 0xc0, 0x3f, 0xdc, 0x0f, 0xff, 0xff, 0xf0, 0x2b, 0xf6, 0x03, 0xff, 
0xfe, 0x0f, 0xff, 0xff, 0xc3, 0xff, 0xff, 0x83, 0xff, 0xff, 0xf0, 0x7f, 0xf8, 0x7f, 0xff, 0xff, 
0xf0, 0x7f, 0xfe, 0x1f, 0xff, 0xff, 0xfc, 0x1f, 0xf1, 0xff, 0xff, 0xff, 0xfe, 0x3f, 0xfc, 0x7f, 
0xff, 0xff, 0xff, 0x8f, 0xc3, 0xff, 0xff, 0xff, 0xff, 0x0f, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xc3, 
0x87, 0xff, 0xff, 0xff, 0xff, 0x87, 0xe1, 0xff, 0xff, 0xff, 0xff, 0xe1, 0x8f, 0xe4, 0x3f, 0xff, 
0xff, 0xc7, 0xe3, 0xfe, 0x1f, 0xff, 0xff, 0xf1, 0x1f, 0x00, 0x07, 0xff, 0xff, 0xe3, 0xc7, 0xc0, 
0x01, 0xff, 0xff, 0xf8, 0x1e, 0x00, 0x71, 0xff, 0xff, 0xe3, 0xc7, 0x80, 0x1c, 0x7f, 0xff, 0xf8, 
0x1c, 0x00, 0x71, 0xff, 0xff, 0xe3, 0xc7, 0x00, 0x1c, 0x3f, 0xff, 0xf8, 0x1c, 0x00, 0x00, 0xff, 
0xff, 0xe3, 0xc7, 0x00, 0x00, 0x7f, 0xff, 0xf8, 0x8e, 0x00, 0x01, 0xff, 0xff, 0xc7, 0xe3, 0x00, 
0x00, 0x7f, 0xff, 0xf1, 0x86, 0x00, 0x03, 0xff, 0xff, 0x87, 0xe1, 0xc0, 0x00, 0xff, 0xff, 0xe1, 
0xc3, 0xc0, 0x1f, 0xff, 0xff, 0x0f, 0xf0, 0xf0, 0x03, 0xff, 0xff, 0xc3, 0xf1, 0xff, 0xff, 0xff, 
0xfe, 0x3f, 0xfc, 0x7f, 0xff, 0xff, 0xff, 0x8f, 0xf8, 0x3f, 0xff, 0xff, 0xf0, 0x7f, 0xfe, 0x0f, 
0xff, 0xff, 0xfe, 0x1f, 0xfe, 0x07, 0xff, 0xff, 0xc1, 0xff, 0xff, 0x81, 0xff, 0xff, 0xf0, 0x7f, 
0xff, 0xc0, 0x2f, 0xc8, 0x0f, 0xff, 0xff, 0xf0, 0x17, 0xf9, 0x03, 0xff, 0xff, 0xfe, 0x00, 0x01, 
0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x5f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
};

const unsigned char testGifImageFrame4 [] PROGMEM = {
// '0_xCJ1LegluxAv_wuh-52', 96x24px
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xdf, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 
0x80, 0x00, 0x7f, 0xff, 0xff, 0xc0, 0x3f, 0xbc, 0x0f, 0xff, 0xff, 0xf0, 0x0b, 0xf6, 0x03, 0xff, 
0xfe, 0x0f, 0xff, 0xff, 0xc3, 0xff, 0xff, 0x83, 0xff, 0xff, 0xf0, 0x7f, 0xf8, 0x79, 0x7f, 0xff, 
0xf0, 0x7f, 0xfe, 0x0f, 0xbf, 0xff, 0xfc, 0x1f, 0xf1, 0x80, 0x07, 0xff, 0xfe, 0x3f, 0xfc, 0x70, 
0x01, 0xff, 0xff, 0x8f, 0xc3, 0x00, 0x31, 0xff, 0xff, 0x0f, 0xf0, 0xc0, 0x04, 0x7f, 0xff, 0xc3, 
0x86, 0x00, 0x78, 0xff, 0xff, 0x87, 0xe1, 0x80, 0x1e, 0x3f, 0xff, 0xe1, 0x8c, 0x00, 0x00, 0xff, 
0xff, 0xc7, 0xe3, 0x00, 0x00, 0x3f, 0xff, 0xf1, 0x1e, 0x00, 0x00, 0xff, 0xff, 0xe3, 0xc7, 0x80, 
0x00, 0x3f, 0xff, 0xf8, 0x1f, 0x00, 0x01, 0xff, 0xff, 0xe3, 0xc7, 0xc0, 0x00, 0x7f, 0xff, 0xf8, 
0x1f, 0xc0, 0x07, 0xff, 0xff, 0xe3, 0xc7, 0xf0, 0x01, 0xff, 0xff, 0xf8, 0x1f, 0xfd, 0xff, 0xff, 
0xff, 0xe3, 0xc7, 0xfd, 0x6f, 0xff, 0xff, 0xf8, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xc7, 0xe3, 0xff, 
0xff, 0xff, 0xff, 0xf1, 0x87, 0xff, 0xff, 0xff, 0xff, 0x87, 0xe1, 0xff, 0xff, 0xff, 0xff, 0xe1, 
0xc3, 0xff, 0xff, 0xff, 0xff, 0x0f, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xc3, 0xf1, 0xff, 0xff, 0xff, 
0xfc, 0x3f, 0xfc, 0x7f, 0xff, 0xff, 0xff, 0x8f, 0xf8, 0x3f, 0xff, 0xff, 0xf8, 0x7f, 0xfe, 0x1f, 
0xff, 0xff, 0xfe, 0x1f, 0xfe, 0x0f, 0xff, 0xff, 0xc3, 0xff, 0xff, 0x83, 0xff, 0xff, 0xf0, 0x7f, 
0xff, 0xc0, 0x2f, 0xd8, 0x0f, 0xff, 0xff, 0xf0, 0x17, 0xf9, 0x03, 0xff, 0xff, 0xfe, 0x00, 0x01, 
0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x5f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
};

const unsigned char testGifImageFrame5 [] PROGMEM = {
// '0_xCJ1LegluxAv_wuh-40', 96x24px
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 
0x80, 0x00, 0x7f, 0xff, 0xff, 0xc0, 0xb5, 0xdc, 0x0f, 0xff, 0xff, 0xf0, 0x0a, 0x5c, 0x03, 0xff, 
0xfe, 0x0f, 0x80, 0x0f, 0xc3, 0xff, 0xff, 0x83, 0xf0, 0x03, 0xf0, 0x7f, 0xf8, 0x7e, 0x00, 0x13, 
0xf0, 0x7f, 0xfe, 0x1f, 0xc0, 0x04, 0x7c, 0x1f, 0xf1, 0xfc, 0x00, 0x79, 0xfe, 0x3f, 0xfc, 0x7f, 
0x00, 0x1e, 0x7f, 0x8f, 0xc3, 0xfc, 0x00, 0x00, 0xff, 0x0f, 0xf0, 0xff, 0x00, 0x04, 0x3f, 0xc3, 
0x87, 0xfc, 0x00, 0x01, 0xff, 0x87, 0xe1, 0xff, 0x00, 0x00, 0x7f, 0xe1, 0x8f, 0xfe, 0x00, 0x01, 
0xff, 0xc7, 0xe3, 0xff, 0x80, 0x00, 0x7f, 0xf1, 0x1f, 0xff, 0x80, 0x07, 0xff, 0xe3, 0xc7, 0xff, 
0xe0, 0x01, 0xff, 0xf8, 0x1f, 0xff, 0xf9, 0x7f, 0xff, 0xe3, 0xc7, 0xff, 0xfd, 0x0f, 0xff, 0xf8, 
0x1f, 0xff, 0xff, 0xff, 0xff, 0xe3, 0xc7, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x1f, 0xff, 0xff, 0xff, 
0xff, 0xe3, 0xc7, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xc7, 0xe3, 0xff, 
0xff, 0xff, 0xff, 0xf1, 0x87, 0xff, 0xff, 0xff, 0xff, 0x87, 0xe1, 0xff, 0xff, 0xff, 0xff, 0xe1, 
0xc3, 0xff, 0xff, 0xff, 0xff, 0x0f, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xc3, 0xf1, 0xff, 0xff, 0xff, 
0xfc, 0x3f, 0xfc, 0x7f, 0xff, 0xff, 0xff, 0x8f, 0xf8, 0x3f, 0xff, 0xff, 0xf8, 0x7f, 0xfe, 0x1f, 
0xff, 0xff, 0xfe, 0x1f, 0xfe, 0x0f, 0xff, 0xff, 0xc3, 0xff, 0xff, 0x83, 0xff, 0xff, 0xf0, 0x7f, 
0xff, 0xc0, 0x2f, 0xd8, 0x0f, 0xff, 0xff, 0xf0, 0x17, 0xf9, 0x03, 0xff, 0xff, 0xfe, 0x00, 0x01, 
0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x5f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
};

const unsigned char testGifImageFrame6 [] PROGMEM = {
// '0_xCJ1LegluxAv_wuh-30', 96x24px
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xbf, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 
0x00, 0x00, 0x7f, 0xff, 0xff, 0xc0, 0x3f, 0xdc, 0x0f, 0xff, 0xff, 0xf0, 0x2b, 0xfa, 0x03, 0xff, 
0xfe, 0x0f, 0xff, 0xff, 0xc1, 0xff, 0xff, 0x83, 0xff, 0xff, 0xf0, 0x7f, 0xf8, 0x7f, 0xff, 0x80, 
0x38, 0x7f, 0xfe, 0x1f, 0xff, 0xe0, 0x0c, 0x1f, 0xf1, 0xff, 0xfe, 0x00, 0x06, 0x3f, 0xfc, 0x7f, 
0xff, 0x80, 0x03, 0x8f, 0xc3, 0xff, 0xfc, 0x00, 0xf3, 0x0f, 0xf0, 0xff, 0xfe, 0x00, 0x3c, 0xc3, 
0x87, 0xff, 0xf8, 0x00, 0x41, 0x87, 0xe1, 0xff, 0xfe, 0x00, 0x20, 0xe1, 0x8f, 0xff, 0xf8, 0x00, 
0x03, 0xc7, 0xe3, 0xff, 0xfe, 0x00, 0x00, 0x71, 0x1f, 0xff, 0xfc, 0x00, 0x03, 0xe3, 0xc7, 0xff, 
0xff, 0x00, 0x00, 0xf8, 0x1f, 0xff, 0xfe, 0x00, 0x0f, 0xe3, 0xc7, 0xff, 0xff, 0x80, 0x03, 0xf8, 
0x1f, 0xff, 0xff, 0xc0, 0x7f, 0xe3, 0xc7, 0xff, 0xff, 0xf0, 0x1f, 0xf8, 0x1f, 0xff, 0xff, 0xff, 
0xff, 0xe3, 0xc7, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xc7, 0xe3, 0xff, 
0xff, 0xff, 0xff, 0xf1, 0x87, 0xff, 0xff, 0xff, 0xff, 0x87, 0xe1, 0xff, 0xff, 0xff, 0xff, 0xe1, 
0xc3, 0xff, 0xff, 0xff, 0xff, 0x0f, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xc3, 0xf1, 0xff, 0xff, 0xff, 
0xfe, 0x3f, 0xfc, 0x7f, 0xff, 0xff, 0xff, 0x8f, 0xf8, 0x3f, 0xff, 0xff, 0xf0, 0x7f, 0xfe, 0x1f, 
0xff, 0xff, 0xfe, 0x1f, 0xfe, 0x0f, 0xff, 0xff, 0xc1, 0xff, 0xff, 0x83, 0xff, 0xff, 0xf0, 0x7f, 
0xff, 0xc0, 0x2f, 0xc8, 0x0f, 0xff, 0xff, 0xf0, 0x17, 0xf9, 0x03, 0xff, 0xff, 0xfe, 0x00, 0x01, 
0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x5f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
};

const unsigned char testGifImageFrame7 [] PROGMEM = {
// '0_xCJ1LegluxAv_wuh-20', 96x24px
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xbf, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 
0x00, 0x00, 0x7f, 0xff, 0xff, 0xc0, 0x3f, 0xdc, 0x0f, 0xff, 0xff, 0xf0, 0x2b, 0xfa, 0x03, 0xff, 
0xfe, 0x0f, 0xff, 0xff, 0xc3, 0xff, 0xff, 0x83, 0xff, 0xff, 0xe0, 0x7f, 0xf8, 0x7f, 0xff, 0xff, 
0xf0, 0x7f, 0xfe, 0x1f, 0xff, 0xff, 0xfc, 0x1f, 0xf1, 0xff, 0xff, 0xff, 0xfe, 0x3f, 0xfc, 0x7f, 
0xff, 0xff, 0xff, 0x8f, 0xc3, 0xff, 0xff, 0xff, 0xff, 0x0f, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xc3, 
0x87, 0xff, 0xff, 0xe0, 0x07, 0x87, 0xe1, 0xff, 0xff, 0xf8, 0x01, 0xe1, 0x8f, 0xff, 0xff, 0x80, 
0x00, 0xc7, 0xe3, 0xff, 0xff, 0xe0, 0x00, 0x31, 0x1f, 0xff, 0xff, 0x00, 0x3c, 0x63, 0xc7, 0xff, 
0xff, 0xc0, 0x0f, 0x18, 0x1f, 0xff, 0xff, 0x00, 0x08, 0x63, 0xc7, 0xff, 0xff, 0xc0, 0x02, 0x18, 
0x1f, 0xff, 0xff, 0x00, 0x00, 0x63, 0xc7, 0xff, 0xff, 0xc0, 0x00, 0x18, 0x1f, 0xff, 0xff, 0x80, 
0x00, 0x63, 0xc7, 0xff, 0xff, 0xc0, 0x00, 0x38, 0x8f, 0xff, 0xff, 0xc0, 0x01, 0xc7, 0xe3, 0xff, 
0xff, 0xf0, 0x00, 0x71, 0x87, 0xff, 0xff, 0xfa, 0x2f, 0x87, 0xe1, 0xff, 0xff, 0xff, 0x07, 0xe1, 
0xc3, 0xff, 0xff, 0xff, 0xff, 0x0f, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xc3, 0xf1, 0xff, 0xff, 0xff, 
0xfe, 0x3f, 0xfc, 0x7f, 0xff, 0xff, 0xff, 0x8f, 0xf8, 0x3f, 0xff, 0xff, 0xf0, 0x7f, 0xfe, 0x1f, 
0xff, 0xff, 0xfe, 0x1f, 0xfe, 0x0f, 0xff, 0xff, 0xc1, 0xff, 0xff, 0x83, 0xff, 0xff, 0xf0, 0x7f, 
0xff, 0xc0, 0x2f, 0xc8, 0x0f, 0xff, 0xff, 0xf0, 0x17, 0xf9, 0x03, 0xff, 0xff, 0xfe, 0x00, 0x01, 
0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x5f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
};

const unsigned char testGifImageFrame8 [] PROGMEM = {
// '0_xCJ1LegluxAv_wuh-10', 96x24px
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xbf, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 
0x00, 0x00, 0x7f, 0xff, 0xff, 0xc0, 0x3f, 0xdc, 0x0f, 0xff, 0xff, 0xf0, 0x2b, 0xfa, 0x03, 0xff, 
0xfe, 0x0f, 0xff, 0xff, 0xc3, 0xff, 0xff, 0x83, 0xff, 0xff, 0xf0, 0x7f, 0xf8, 0x7f, 0xff, 0xff, 
0xf0, 0x7f, 0xfe, 0x1f, 0xff, 0xff, 0xfc, 0x1f, 0xf1, 0xff, 0xff, 0xff, 0xfe, 0x3f, 0xfc, 0x7f, 
0xff, 0xff, 0xff, 0x8f, 0xc3, 0xff, 0xff, 0xff, 0xff, 0x0f, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xc3, 
0x87, 0xff, 0xff, 0xff, 0xff, 0x87, 0xe1, 0xff, 0xff, 0xff, 0xff, 0xe1, 0x8f, 0xff, 0xff, 0xff, 
0xff, 0xc7, 0xe3, 0xff, 0xff, 0xff, 0xff, 0xf1, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xe3, 0xc7, 0xff, 
0xff, 0xff, 0xff, 0xf8, 0x1f, 0xff, 0xff, 0x80, 0x1f, 0xe3, 0xc7, 0xff, 0xff, 0xf0, 0x07, 0xf8, 
0x1f, 0xff, 0xfe, 0x00, 0x07, 0xe3, 0xc7, 0xff, 0xff, 0x80, 0x01, 0xf8, 0x1f, 0xff, 0xfc, 0x00, 
0xf3, 0xe3, 0xc7, 0xff, 0xff, 0x00, 0x3c, 0xf8, 0x8f, 0xff, 0xf8, 0x00, 0x41, 0xc7, 0xe3, 0xff, 
0xfe, 0x00, 0x18, 0x71, 0x87, 0xff, 0xf8, 0x00, 0x01, 0x87, 0xe1, 0xff, 0xfe, 0x00, 0x00, 0x61, 
0xc3, 0xff, 0xfc, 0x00, 0x03, 0x0f, 0xf0, 0xff, 0xff, 0x00, 0x00, 0xc3, 0xf1, 0xff, 0xff, 0x00, 
0x06, 0x3f, 0xfc, 0x7f, 0xff, 0xc0, 0x01, 0x8f, 0xf8, 0x3f, 0xff, 0xd0, 0x78, 0x7f, 0xfe, 0x1f, 
0xff, 0xf8, 0x0e, 0x1f, 0xfe, 0x0f, 0xff, 0xff, 0x81, 0xff, 0xff, 0x81, 0xff, 0xff, 0xf0, 0x7f, 
0xff, 0xc0, 0x2f, 0xc8, 0x0f, 0xff, 0xff, 0xf0, 0x17, 0xf9, 0x03, 0xff, 0xff, 0xfe, 0x00, 0x01, 
0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x5f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
};

void displayAnimationEyes(int frameNum)
{
  int bitmapStartX = 16;
  int bitmapStartY = 8;
  int bitmapWidth = 96;
  int bitmapHeight = 24;
  
  // Clear the buffer.
  display.clearDisplay();
  
  //Set Text Size
  display.setTextSize(1);
  //Set Display Color
  display.setTextColor(WHITE);
  //Set Cursour Value
  display.setCursor(48,0);//((128-7)/2)
  //Add Display Message
  display.println("Loading");
  
  // Display bitmap
  switch(frameNum)
  {
    case 1:
      display.drawBitmap(bitmapStartX, bitmapStartY,  testGifImageFrame1, bitmapWidth, bitmapHeight, WHITE);//X, Y, image, Width of bitmap, Height of bitmap
    break;
    case 2:
      display.drawBitmap(bitmapStartX, bitmapStartY,  testGifImageFrame2, bitmapWidth, bitmapHeight, WHITE);//X, Y, image, Width of bitmap, Height of bitmap
    break;
    case 3:
      display.drawBitmap(bitmapStartX, bitmapStartY,  testGifImageFrame3, bitmapWidth, bitmapHeight, WHITE);//X, Y, image, Width of bitmap, Height of bitmap
    break;
    case 4:
      display.drawBitmap(bitmapStartX, bitmapStartY,  testGifImageFrame4, bitmapWidth, bitmapHeight, WHITE);//X, Y, image, Width of bitmap, Height of bitmap
    break;
    case 5:
      display.drawBitmap(bitmapStartX, bitmapStartY,  testGifImageFrame5, bitmapWidth, bitmapHeight, WHITE);//X, Y, image, Width of bitmap, Height of bitmap
    break;
    case 6:
      display.drawBitmap(bitmapStartX, bitmapStartY,  testGifImageFrame6, bitmapWidth, bitmapHeight, WHITE);//X, Y, image, Width of bitmap, Height of bitmap
    break;
    case 7:
      display.drawBitmap(bitmapStartX, bitmapStartY,  testGifImageFrame7, bitmapWidth, bitmapHeight, WHITE);//X, Y, image, Width of bitmap, Height of bitmap
    break;
    case 8:
      display.drawBitmap(bitmapStartX, bitmapStartY,  testGifImageFrame8, bitmapWidth, bitmapHeight, WHITE);//X, Y, image, Width of bitmap, Height of bitmap
    break;
    default:
      display.drawBitmap(bitmapStartX, bitmapStartY,  testGifImageFrame1, bitmapWidth, bitmapHeight, WHITE);//X, Y, image, Width of bitmap, Height of bitmap
    break;
  }
  display.display();
}
