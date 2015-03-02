/*
by Michelle Wong of Yume Yumiko
LED Lights
ver. Miku "39" Event
*/

/*------COLOR CHART------*//*
    setColor(255, 0, 0);     // Red
    setColor(75, 10, 0);      // Orange
    setColor(50, 50, 0);    // Yellow
    setColor(0, 255, 0);     // Green
    setColor(29, 325, 0);   //lime
    setColor(0, 160, 165);  //  Miku
    setColor(0, 90, 200); // light blue
    setColor(0, 10, 255);   // Blue
    setColor(15, 0, 205);   // Purple
    setColor(15, 0, 8);    //luka
    setColor(34, 0, 5);   // Pink
    setColor(255, 255, 255); // White
    setColor(0, 0, 0); //black
*/

//initialize LED pins
int greenPin = 6;
int redPin = 5;
int bluePin = 3;
int fadeAmount = 5;
int brightness = 255;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(redPin, OUTPUT);  
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);  
}

void loop(){
  //intro 1
  if(millis() == 0)
  {
    setColor(0,0,0);
    delay(100);
  }
  if(millis() == 1100)
    setColor(0,0,0);
    
  if(millis() == 3350)
    setColor(0, 160, 165); // miku
  if(millis() == 3480)
    setColor(50, 50, 0); // yellow
  if(millis() == 3640)
    setColor(15, 0, 8); // luka
  if(millis() == 3815)
    setColor(0, 90, 200); // light blue
  if(millis() == 4015)
    setColor(200, 1, 1); // red
  if(millis() == 4017)
    setColor(0,0,0);
 
   //intro 2
  if(millis() == 6760)
    setColor(0, 255, 0); // green
  if(millis() == 6900)
    setColor(15, 0, 205); // purple
  if(millis() == 7100)
    setColor(0, 90, 200); // light blue
  if(millis() == 7150)
    setColor(29, 325, 0); // lime
  if(millis() == 7200)
    setColor(15, 0, 8); // pink/luka
  if(millis() == 7201)
    setColor(0,0,0);
    
   //first blast white
  if(millis() == 7255)
  {
    setColor(255,255,255);
    delay(200);
     for(int i = 20; i>0; i--)
    {   
     setColor(i,i,i);
     delay(120);
    }
    setColor(0,0,0);
  }
   
  //second blast white
  if(millis() == 10700)
  {
    setColor(255,255,255);
    delay(200);
     for(int i = 20; i>0; i--)
    {   
     setColor(i,i,i);
     delay(120);
    }
    setColor(0,0,0);
  }
  
  //flicker before first verse
  //fade out temporary placeholder
  if(millis() == 13600){
    setColor(0,160,165);
    delay(50);
    setColor(0,0,0);
    delay(50);
  } 
  if(millis() == 13700){
    setColor(0, 160, 165);
    delay(50);
    setColor(0,0,0);
    delay(50);
  }
  if(millis() == 13940){
    setColor(0,160,165);
    delay(50);
    setColor(0,0,0);
    delay(50);
  }
  if(millis() == 14100){
    setColor(0, 160, 165);
    delay(50);
    setColor(0,0,0);
    delay(50);
  }
  if(millis() == 14250){
    setColor(0,160,165);
    delay(50);
    setColor(0,0,0);
    delay(50);
  }   
  //-------------------------------------VERSE ONE-------------------------------------------//
    //heartbeat (first verse)
    while((millis() > 14250) && (millis() <23200))
    {
       setColor(255,255,255);
       delay(50);
       setColor(200,200,200);
       delay(50);
       setColor(150,150,150);
       delay(50);
       setColor(0,0,0);
       delay(200);
    }
    
    //mid transition
    if(millis() == 23200)
    {
      setColor(0, 160, 165); // miku
      delay(50);
      setColor(0, 0, 0);
      delay(50);
    }
    if(millis() == 23520){
      setColor(0, 160, 165); // miku
      delay(10);
      setColor(0, 0, 0);
      delay(10);
    }
    if(millis() == 24545){
      setColor(0, 160, 165); // miku
      delay(1);
      setColor(0, 0, 0); 
      delay(1);
    }
    if(millis() == 25050){
      setColor(0, 160, 165); // miku
      delay(50);
      setColor(0, 0, 0);
      delay(50);
    }
    
    //heartbeat (first verse part 2)
    while((millis() >= 25065) && (millis() <33300))
    {
       setColor(255,255,255);
       delay(50);
       setColor(200,200,200);
       delay(50);
       setColor(150,150,150);
       delay(50);
       setColor(0,0,0);
       delay(200);
    }
    
    //transition
    if(millis() == 35050){
      setColor(0, 0, 0);
      delay(100);
    }
    if(millis() == 35150){
      setColor(255,255,255);
      delay(100);
    }  
    if(millis() == 35250){
      setColor(0, 0, 0);
      delay(90);
    }
    if(millis() == 35350){
      setColor(255,255,255);
      delay(100);
    }
    
    //fade in concert
    while(millis() >= 35700 && millis() <=45200)
    {
      for(int i = 0; i<15; i++)
      {   
       setColor(0, i+5, i);
       delay(85);
      }
    setColor(0,0,0);
    delay(50);
    }
    
    //impactful before chorus
    if(millis() == 45300)
    {
      setColor(255,255,255);
       for(int i = 20; i>0; i--)
      {   
       setColor(i*10, i*10, i*10);
       delay(20);
      }
      setColor(0,0,0);
    }
    if(millis() == 45820){
      setColor(255,255,255);
      delay(50);
    }
    if(millis() == 45830){
      setColor(0,0,0);
      delay(100);
    }
    if(millis() == 46170){
      setColor(255,255,255);
      delay(100);
    }
    if(millis() == 46200){
      setColor(0,0,0);
      delay(100);
    }
    
      
    //CHORUS 1
    if(millis() == 46500 || millis() == 47900 || millis() == 49250 ||
      millis() == 50620 || millis() == 52160 || millis() == 53390)
    {
      setColor(255,255,255);
       for(int i = 20; i>0; i--)
      {   
       setColor(i, i, i);
       delay(50);
      }
      setColor(0,0,0);
    }
    if(millis() == 54850)
    {
      setColor(255, 0, 0);     // Red
      delay(50);
      setColor(75, 10, 0);      // Orange
      delay(50);
      setColor(50, 50, 0);    // Yellow
      delay(50);
      setColor(0, 255, 0);     // Green
      delay(50);
      setColor(29, 325, 0);   //lime
      delay(50);
      setColor(0, 160, 165);  //  Miku
      delay(50);
      setColor(0, 90, 200); // light blue
      delay(50);
      setColor(0, 10, 255);   // Blue
      delay(50);
      setColor(15, 0, 205);   // Purple
      delay(50);
      setColor(15, 0, 8);    //luka
      delay(50);
      setColor(34, 0, 5);   // Pink
      delay(50);
      setColor(15, 0, 205);   // Purple
      delay(50);
      setColor(0, 10, 255);   // Blue
      delay(50);
      setColor(0, 160, 165);  //  Miku
      delay(50);
      setColor(29, 325, 0);   //lime
      delay(50);
      setColor(0, 255, 0);     // Green
      delay(50);
      setColor(50, 50, 0);    // Yellow
      delay(50);
      setColor(75, 10, 0);      // Orange
      delay(50);
      setColor(255, 0, 0);     // Red
      delay(50);
      setColor(0, 0, 0); //black
    }
    
    //opening up my voice
    if(millis() == 56100 || millis() == 56455 || millis() == 56610 || millis() == 56790|| millis() ==  57135)
    {
      setColor(5,0,1); // soft/dim pink
      delay(50);
      setColor(0,0,0);
      delay(30);
    }
    
    if(millis() == 57300)
    {
      setColor(34, 0, 5); //3
      delay(100);
      setColor(0,0,0);
      delay(100);
    }
    if(millis() == 57650)
    {
      setColor(34, 0, 5); //9
      delay(200);
      setColor(0,0,0);
    }
    
    while(millis() > 57850 && millis() < 64000) // 57750
    {
       setColor(255,255,255);
       delay(50);
       setColor(200,200,200);
       delay(50);
       setColor(150,150,150);
       delay(50);
       setColor(0,0,0);
       delay(200);
    }
    //arigatou
    if(millis() == 64330 || millis() == 64510 || millis() == 64840 || millis() == 65180 ||
    millis() == 65540)
    {
      setColor(0, 160, 165); // miku
      delay(100);
      setColor(0,0,0);
      delay(50);
    }
    
    //=======================================SECOND VERSE================================//
     //first blast white
  if(millis() == 65886)
  {
    setColor(255,255,255);
     for(int i = 20; i>0; i--)
    {   
     setColor(i, i, i);
     delay(100);
    }
    setColor(0,0,0);
  }
  
  //second blast white
  if(millis() == 69310)
  {
    setColor(255,255,255);
     for(int i = 20; i>0; i--)
    {   
     setColor(i, i, i);
     delay(100);
    }
    setColor(0,0,0);
  }
  
  //third blast white
  if(millis() == 73420)
  {
    setColor(255,255,255);
     for(int i = 20; i>0; i--)
    {   
     setColor(i, i, i);
     delay(100);
    }
    setColor(0,0,0);
  }
  
  //fourth blast white
  if(millis() == 76850)
  {
    setColor(255,255,255);
     for(int i = 20; i>0; i--)
    {   
     setColor(i, i, i);
     delay(100);
    }
    setColor(0,0,0);
  }
  //second verse begin (slow part)
  if(millis() == 80965)
  {
     setColor(0,28,20);
     for(int i = 20; i>0; i--)
    {   
     setColor(0, i+(i*0.8), i);
     delay(120);
    }
    setColor(0,0,0);
  }
  if(millis() == 83660)
  {
     setColor(0,28,20);
     for(int i = 20; i>0; i--)
    {   
     setColor(0, i+(i*0.8), i);
     delay(120);
    }
    setColor(0,0,0);
  }
  if(millis() == 86270)
  {
     setColor(0,28,20);
     for(int i = 20; i>0; i--)
    {   
     setColor(0, i+(i*0.8), i);
     delay(130);
    }
    setColor(0,0,0);
  }
  
  if(millis() == 89196){
    setColor(0, 160, 165);
    delay(50);
    setColor(0,0,0);
    delay(49);
  } 
  if(millis() == 89296){
    setColor(0, 160, 165);
    delay(100);
    setColor(0,0,0);
    delay(100);
  }
  if(millis() == 89540){
    setColor(0,0,0);
    delay(50);
  }
  if(millis() == 89600){
    setColor(0, 160, 165);
    delay(100);
  }
  if(millis() == 89750){
    setColor(0,0,0);
  }
    //heartbeat (second verse)
    while((millis() > 91760) && (millis() <99475))
    {
       setColor(0,255,200);
       delay(50);
       setColor(0,200,175);
       delay(50);
       setColor(0,150,120);
       delay(50);
       setColor(0,0,0);
       delay(200);
    }
    
    //----------1:39 piano thingy if we want
    //slower part //FIX THIS INTERVALS NOT ON BEAT 2750 2700
    while(millis() >= 102210 && millis() <110100)
    {
      for(int i = 0; i<15; i++)
      {   
       setColor(0, i+5, i);
       delay(90);
      }
      for(int i = 15; i > 0; i--)
      {
        setColor(0,i+5,i);
        delay(90);
      }
    setColor(0,0,0);
    delay(50);
    }
    
    //na
    if(millis() == 113000)
    {
      setColor(0, 160, 165);
      delay(100);
      setColor(0,0,0);
    }
     //ki
    if(millis() == 113195)
    {
       setColor(0, 160, 165);
       delay(100);
       setColor(0,0,0);
      
    }
    //ta
    if(millis() == 113535)
    {
       setColor(0, 160, 165);
       delay(100);
       setColor(0,0,0);
    
    }
    //ku
    if(millis() == 113875)
    {
       setColor(0, 160, 165);
       delay(100);
       setColor(0,0,0);
 
    }
    
    //towards end of verse 2 till arigatou
    if(millis() >= 113975 && millis() <= 123000) //10000
    {
      setColor(0, 160, 165);
      delay(100);
      setColor(0, 130, 180);
      delay(100);
      setColor(0, 90, 200);
      delay(100);
      setColor(0, 50, 215);
      delay(100);
      setColor(0, 10, 200);
      delay(100);
      setColor(0, 50, 215);
      delay(100);
      setColor(0, 90, 200);
      delay(100);
      setColor(0, 130, 180);
      delay(100);
      setColor(0, 160, 165);
      delay(100);
    }
    
    //concert part 
    while((millis() >= 123735) && (millis() <135135))
    {
      for(int i = 0; i<15; i++)
      {   
       setColor(0, i+5, i);
       delay(85);
      }
    setColor(0,0,0);
    delay(50);
    }
    
    //presento
    //heartbeat (second verse)
    while((millis() > 135135) && (millis() <142830))
    {
       setColor(0,255,200);
       delay(50);
       setColor(0,200,175);
       delay(50);
       setColor(0,150,120);
       delay(50);
       setColor(0,0,0);
       delay(100);
    }
    //Ruuuuuuu~~
    if(millis() == 143360)
    {
      setColor(0,255,200);
      for(int i = 15; i > 0; i--)
      {
        setColor(0,i+5,i);
        delay(78);
      }
      setColor(0,0,0);
    }
    
    //kono uta o
   //ko 
    if(millis() == 144565)
    {
       setColor(34, 0, 5);
       delay(100);
       setColor(0,0,0);
    }
    //no
    if(millis() == 144745)
    {
       setColor(0, 160, 165);
       delay(100);
       setColor(0,0,0);
    }
    //u
    if(millis() == 144855)
    {
       setColor(34, 0, 5);
       delay(100);
       setColor(0,0,0);
    }
    //ta
    if(millis() == 145245)
    {
       setColor(0, 160, 165);
       delay(100);
       setColor(0,0,0);
    }
    //o
    if(millis() == 145600)
    {
       setColor(34, 0, 5);
       delay(100);
       setColor(0,0,0);
    }
    
    //%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%THIRD VERSE%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%//
    //SAN
    if(millis() == 158095)
    {
       setColor(0, 160, 165);
       delay(150);
       setColor(0,0,0);
       
    }
    //KYUU!!
    if(millis() == 158440)
    {
       setColor(0, 160, 165);
       delay(100);
       setColor(0,0,0);
    }
    
    //RAINBOW
    while(millis() >= 166630 && millis() <175450)
    {
      setColor(255, 0, 0);     // Red
      delay(50);
      setColor(75, 10, 0);      // Orange
      delay(50);
      setColor(50, 50, 0);    // Yellow
      delay(50);
      setColor(0, 255, 0);     // Green
      delay(50);
      setColor(29, 325, 0);   //lime
      delay(50);
      setColor(0, 160, 165);  //  Miku
      delay(50);
      setColor(0, 90, 200); // light blue
      delay(50);
      setColor(0, 10, 255);   // Blue
      delay(50);
      setColor(15, 0, 205);   // Purple
      delay(50);
      setColor(15, 0, 8);    //luka
      delay(50);
      setColor(34, 0, 5);   // Pink
      delay(50);
      setColor(15, 0, 205);   // Purple
      delay(50);
      setColor(0, 10, 255);   // Blue
      delay(50);
      setColor(0, 160, 165);  //  Miku
      delay(50);
      setColor(29, 325, 0);   //lime
      delay(50);
      setColor(0, 255, 0);     // Green
      delay(50);
      setColor(50, 50, 0);    // Yellow
      delay(50);
      setColor(75, 10, 0);      // Orange
      delay(50);
      setColor(255, 0, 0);     // Red
      delay(50);
    }
    
    //nando
    if(millis() == 176450)
    {
      setColor(255,255,255);
       delay(50);
       setColor(200,200,200);
       delay(50);
       setColor(150,150,150);
       delay(50);
       setColor(0,0,0);
       delay(50);
    }
    
    //datte
    if(millis() == 176955)
    {
      setColor(255,255,255);
       delay(50);
       setColor(200,200,200);
       delay(50);
       setColor(150,150,150);
       delay(50);
       setColor(0,0,0);
       delay(50);
    }
    
    //white flashback
    while((millis() > 177600) && (millis() <180000)) 
    {
       setColor(255,255,255);
       delay(50);
       setColor(200,200,200);
       delay(50);
       setColor(150,150,150);
       delay(50);
       setColor(0,0,0);
       delay(200);
    }
    //blue flashback
    while((millis() > 180340) && (millis() <183320)) 
    {
       setColor(0,255,200);
       delay(50);
       setColor(0,200,175);
       delay(50);
       setColor(0,150,120);
       delay(50);
       setColor(0,0,0);
       delay(200);
    }
    
    //YEAH!
    while(millis() >= 185485 && millis() < 200560)
    {
      setColor(0, 255, 0);
      delay(50);
      setColor(0, 200, 10);
      delay(50);
      setColor(0, 175, 25);
      delay(50);
      setColor(0, 100, 100);
      delay(50);
      setColor(5, 200, 25);
      delay(50);
      setColor(10, 225, 25);
      delay(50);
      setColor(15, 325, 0);
      delay(50);
      setColor(20,225,0);
      delay(50);
    }
    
    
    
}

void setColor(int red, int green, int blue)
{
    analogWrite(redPin, red);
    analogWrite(greenPin, green);
    analogWrite(bluePin, blue);
}
