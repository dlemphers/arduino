/*
  Double Blink
 
  For setup, activate pin 13 and 12, one for green, one for red
  Then switch them each cycle

 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int GREEN_LED = 13;
int RED_LED = 12;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
	pinMode(GREEN_LED, OUTPUT);
	pinMode(RED_LED, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
	digitalWrite(GREEN_LED, HIGH);   // turn the GREEN LED on (HIGH is the voltage level)
	digitalWrite(RED_LED, LOW);   // turn the RED LED off (LOW is the voltage level)
	delay(500);               // wait for half a second
	// Now switch them
	digitalWrite(GREEN_LED, LOW);
	digitalWrite(RED_LED, HIGH); 
	delay(500);               // wait for half a second
}
