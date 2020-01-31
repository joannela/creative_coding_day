#include <NewTone.h>

const int speakerPin= 8; // The speaker is connected to pin 8 through a 100ohm resistor


void setup() { 

// nothing in the setup!

} 

void loop() { 

NewTone(speakerPin, 440); 	// play a tone through speakerPin (pin 8) at a frequency of 440Hz 
delay(250); // determines length of note, if there is no delay notes are played simultaneously

NewTone(speakerPin, 880, 500);// play a tone through speakerPin (pin 8) at a frequency of 880Hz
delay(500);

noNewTone(); // this stops a note from playing

delay(500);

}

