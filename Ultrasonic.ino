//
//Referencess
//https://wiki.seeedstudio.com/Grove-Speaker/
//https://wiki.seeedstudio.com/Grove-Ultrasonic_Ranger/

#include "Ultrasonic.h"
#define SPEAKER 3

int BassTab[]={1911,1702,1516,1431,1275,1136,1012};
Ultrasonic ultrasonic(7);
long Range;
int note_index;
void setup()
{
   pinMode(SPEAKER,OUTPUT);
   digitalWrite(SPEAKER,LOW);
   Serial.begin(9600);
}
void loop()
{
 Range = ultrasonic.MeasureInCentimeters();
 Serial.println(Range/5);
 note_index = Range/5;  
 if (note_index <36){sound(note_index);}
 else { digitalWrite(SPEAKER,LOW);}
}

void sound(uint8_t note_index)
{
    for(int i=0;i<100;i++)
    {
        digitalWrite(SPEAKER,HIGH);
        delayMicroseconds(BassTab[note_index]);
        digitalWrite(SPEAKER,LOW);
        delayMicroseconds(BassTab[note_index]);
    }
}
