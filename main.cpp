 #include <FastLED.h>

#define num_strip 50
CRGB leds[num_strip];

void displayColors(int Color_one,int Color_two,int Color_three);

void setup() {
  // put your setup code here, to run once:
 FastLED.addLeds<NEOPIXEL, 2>(leds, num_strip);
 FastLED.addLeds<NEOPIXEL,1>(leds, num_strip);
}
const int SIZE = 5;

void loop() {
  // put your main code here, to run repeatedly:
  int red = 160;
  int green = 160;
  int blue = 160;
 
 displayColors(red,0,0);//red
 
 displayColors(0,green,0);//green
  
 displayColors(0,0,blue);//blue
 displayColors(0,128,128);//teal
 displayColors(red,0,blue);//purple
 displayColors(red,green,blue);//white
 displayColors(50,0,13);//burgundy
 displayColors(0,0,0);//reset

for(int i = 0;i < 20;i++)
{
    leds[i] = CRGB(100,0,100);//this creates just magenta
    FastLED.show();
    delay(75);
}
for(int i = 20;i < 40 ;i++)
{
  leds[i] = CRGB(0,120,120);//this creates TEAL
    FastLED.show();
    delay(75);  
}

for(int i = 40; i < 60;i++)
{
  leds[i] = CRGB(red,green,0);//this creates just yellow
    FastLED.show();
    delay(75);  
}
for(int i = 60;i < 80;i++)
{
  if(i >= 70)
  {
   leds[i] = CRGB(red,0,blue);//this creates just purple
    FastLED.show();
    delay(75);
  }
  else
  {
    leds[i] = CRGB(0,green,0);//this creates just green
      FastLED.show();
      delay(75);
  }  
}
for(int i = 80;i < 100;i++)
{
  if(i >= 90 )
  {
   leds[i] = CRGB(red,0,0);//this creates just red
    FastLED.show();
     delay(75); 
  }
  else
  {
    leds[i] = CRGB(0,0,blue);//this creates just blue
      FastLED.show();
      delay(75);  
  }
}
for(int i = 100;i < 120;i++)
{
  if(i >= 110 )
  {
   leds[i] = CRGB(0,green,blue);//this creates just cyan
    FastLED.show();
     delay(75); 
  }
  else
  {
    leds[i] = CRGB(blue,green,blue);//this creates just white
      FastLED.show();
      delay(75);  
  }
}
for(int i = 120;i < 150;i++)
{
  if(i >= 135 )
  {
   leds[i] = CRGB(red,green,0);//this creates just creates yellow
    FastLED.show();
     delay(75); 
  }
  else  
  {
    leds[i] = CRGB(red,0,blue);//this creates just magenta
      FastLED.show();
      delay(75);  
  }
}

delay(2000);
//
 displayColors(0,green,blue);//makes teal
   delay(2000);
    displayColors(0,0,0);//makes black
   for(int j = 0; j < SIZE; j++)
   {
    for(int i = 0; i < 160; i++)
    {
      for(int k = 0; k < 75; k++ )
      {
        if(k%3 == 0)
          leds[k] = CRGB(0,0,i);//blue 
        else
          leds[k] = CRGB(0,i,0);//green    
      }
      FastLED.show();
      delay(25);
    }
      //delay(100);
    for(int i = 0; i < 160; i++)
    {
      for(int k = 75; k < 150; k++)
      {
        if(k%3 == 0)
          leds[k] = CRGB(i,i,0); //yellow
        else
          leds[k] = CRGB(i,0,i); //magenta/purple
      }
        FastLED.show();
      delay(25);
    }
  }
//
}

/*
this is just a function for a single color to go all the way though the led lights
*/
void displayColors(int Color_one,int Color_two,int Color_three)
{
   for(int i = 0; i < 150;i++)
  {
    leds[i] = CRGB( Color_one, Color_two, Color_three);//this creates just red
    FastLED.show();
     //delay(75); 
  }
  
}