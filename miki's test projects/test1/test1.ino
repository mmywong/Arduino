/*
by Michelle Wong of Yume Yumiko
LED Strips
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

void setColor(int red, int green, int blue)
{
    analogWrite(redPin, red);
    analogWrite(greenPin, green);
    analogWrite(bluePin, blue);
}
