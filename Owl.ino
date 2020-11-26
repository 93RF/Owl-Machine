#include <Servo.h> 
Servo myservo;

const int ledPin = 9;
int pos = 0; // naming pins makes program easier to read
int piezoPin = 11;

void setup() { // setup function runs once when you press reset or power the board
  pinMode(ledPin, OUTPUT); // initialize digital pin 9 as an output
  myservo.attach(10);
}

void loop() { // loop function runs over and over again forever
  
  digitalWrite(ledPin, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                  // wait for a second
   
   for(pos = 0; pos <= 180; pos += 1) // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    myservo.write(pos);            // tell servo to go to position in variable 'pos' 
    delay(15);                     // waits 15ms for the servo to reach the position 
  }
    tone(piezoPin, 1000, 50);
    delay(50); 
    tone(piezoPin, 700, 50);
    delay(50); 
    tone(piezoPin, 800, 50);
    delay(50); 
    tone(piezoPin, 1000, 50);
    delay(50);   
    
  for(pos = 180; pos>=0; pos-=1)   // goes from 180 degrees to 0 degrees 
  {                                
    myservo.write(pos);            // tell servo to go to position in variable 'pos' 
    delay(15);
    } 

  digitalWrite(ledPin, HIGH);    // turn the LED off by making the voltage LOW
  delay(1000);

}
