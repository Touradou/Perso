#include <Ultrasonic_sensor.h>


Ultrasonic_sensor sensor;


void setup() {
  Serial.begin(115200);
}

void loop() {
  sensor.read_distance();
}