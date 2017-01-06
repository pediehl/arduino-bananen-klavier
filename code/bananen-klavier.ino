#include <CapacitiveSensor.h>

CapacitiveSensor   cs_2_3 = CapacitiveSensor(2,3);        // 5M Wiederstand zwinschen Pins 2 & 3, Pin 3 ist der Sensor-Pin

long NOTE_C4 = 262;
int speakerPin = 13; // Piezo-Lautsprecher an Pin 13 

void setup()                    
{
   
}

void loop()                    
{
    long start = millis();
    long total1 =  cs_2_3.capacitiveSensor(30);
 
    if (total1 > 10000)                  // wird sehr gross wenn der Sensor direkt berührt wird
    {                                   
      tone(speakerPin,NOTE_C4);
    }
    else
    {
     noTone(speakerPin); 
    }
    
    delay(10);                              
}
