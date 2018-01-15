#include <Arduino.h>
// the setup function runs once when you press reset or power the board
void setup() {
    // initialize digital pin 13 as an output.
    pinMode(13, OUTPUT);
}

#define SHORT_PUSLE 200
#define LONG_DELAY 1500

// the loop function runs over and over again forever
void loop() {
    for(int idx = 0; idx < 4; idx++) {
      digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
      delay(SHORT_PUSLE);
      digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
      delay(SHORT_PUSLE * 2);
    }

    delay(LONG_DELAY);
}
