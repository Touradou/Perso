#include <Arduino.h>
#include <Ultrasonic.h>

Ultrasonic ultrasonic1(12, 13);
// Trig -> D12
// Echo -> D13

class Ultrasonic_sensor
{
private:
    int data;
    int p_data;
public:
    void read_distance();
    };

void Ultrasonic_sensor::read_distance()
{
    data = ultrasonic1.read();
    if (data == 357)
    {
        data = p_data;
    } else {
        p_data = data;
    }
    Serial.print("Sensor : ");
    Serial.print(data); // Prints the distance on the default unit (centimeters)
    Serial.println("cm");
    
    
}


