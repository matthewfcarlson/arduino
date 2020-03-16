/*
 * Simply turns on and off pin 3 once a second
 * 
 * By Jon E. Froehlich
 * @jonfroehlich
 * http://makeabilitylab.io
 * 
 * Example Tinkcard circuit:
 *  - https://www.tinkercad.com/things/3EzaisGSd0c-blink-led-onoff
 * 
 * Adapted from the official Arduino Blink example:
 *   File -> Examples -> 01. Basics -> Blink
 */

// While not necessary, it's a good idea to use const variables
// for constants like specifying pins that you use.
const int LED_OUTPUT_PIN = 3;

// The setup function runs once when you press reset or power the board
void setup() {
  // On the Arduino Uno, Leonardo, etc. pins 0 - 13 can either be input or output.
  // We must specify how we're using the pin by using pinMode. In this case, we want to
  // control an LED, so set the pin to OUTPUT
  pinMode(LED_OUTPUT_PIN, OUTPUT);
}

// The loop function runs over and over again forever
void loop() {
  digitalWrite(LED_OUTPUT_PIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                          // delay is in milliseconds; so wait one second
  digitalWrite(LED_OUTPUT_PIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                          // wait for a second
}
