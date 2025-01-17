#include <NewPing.h>



#define TRIGGER_PIN  12  // Arduino pin tied to trigger pin on the ultrasonic sensor.
#define ECHO_PIN     11  // Arduino pin tied to echo pin on the ultrasonic sensor.
#define MAX_DISTANCE 200 // Maximum distance we want to ping for (in centimeters). 

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); // NewPing setup of pins and maximum distance.

void setup() {

  Serial.begin(57600); // Don’t worry about this for now :)

}

void loop() {

  delay(50); // Wait 50ms between pings (about 20 pings/sec). 29ms should be the shortest delay between pings.
  unsigned int sendPing = sonar.ping(); // Send ping, get ping time in microseconds.
  unsigned int distanceMeasured = sendPing / US_ROUNDTRIP_CM ; // Convert ping time to distance in cm

  // This prints out the distance measured by the sensor in a new screen

  Serial.print(millis());
  Serial.print(", ");
  Serial.println(distanceMeasured);

}

 

