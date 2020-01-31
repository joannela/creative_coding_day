

int sensorPin = A0;    // select the input pin for the potentiometer
int sensorValue = 0;  // variable to store the value coming from the sensor

int ledPin = 9;      // select the pin for the LED


void setup() {
  Serial.begin(9600);
  // declare the ledPin as an OUTPUT:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // read the value from the sensor:
  float volts = analogRead(sensorPin) * 3.3 / 1023.0;
  //convert value to 'lux'—a meausre of the light's brightness. 
  float microamps = volts/ 10000.0 * 100000;  // across 10,000 Ohms
  float lux = microamps * 5;  

  //Print out the lux value to the Serial monitor

  Serial.print("volts: ");
  Serial.print(microamps);
  Serial.print(" microamps: ");
  Serial.print(microamps);
  Serial.print(" lux: ");
  Serial.println(lux);
  
  delay(1000);
  int ledBrightness = map(lux, 1, 150, 0, 255);
  digitalWrite(ledPin, ledBrightness);
}
