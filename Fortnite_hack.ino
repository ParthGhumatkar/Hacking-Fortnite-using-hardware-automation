#include<Keyboard.h>
int buttonPin = 9;  // Set a button to pin 9 

void setup()
{
  pinMode(buttonPin, INPUT);  // Set the button as an input
  digitalWrite(buttonPin, HIGH);  // Pull the button high
}

void loop()
{
  if (digitalRead(buttonPin) == 0) 
  {
    Keyboard.press("1");
    
    Keyboard.press("h");   
    delay(100);  
    
    Keyboard.press("l");   
    
    Keyboard.press("j");   
    delay(100); 
     
    Keyboard.press("k");   
  
  }
  keyboard.end();
}
