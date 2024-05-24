// creates variables which will be used to assign pins to outputs
int ledPinR = 11 ;
int ledPinG = 10 ;
int ledPinB = 9 ;

void setup() {
  // sets pins to outputs using variables
  pinMode (ledPinR, OUTPUT) ;
  pinMode (ledPinG, OUTPUT) ;
  pinMode (ledPinB, OUTPUT) ;
}

void loop() {
rgbLedDisplay(random(256), random(256), random(256)) ; // calls the rgbLedDisplay function and choses three random numbers for the R, G, B values
delay(600); // waits for a period of time
}

void rgbLedDisplay(int red, int green, int blue) {  // creates the rgbLedDisplay and red, green, and blue variables
  analogWrite(ledPinR, constrain(red, 0, 255)) ;    // sets the LedPin to an output and locks the value between 0 and 255
  analogWrite(ledPinG, constrain(green, 0, 255)) ;  // sets the LedPin to an output and locks the value between 0 and 255
  analogWrite(ledPinB, constrain(blue, 0, 255)) ;   // sets the LedPin to an output and locks the value between 0 and 255
}