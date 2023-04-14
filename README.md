# Ultrasonic

This code utilizes the "Ultrasonic.h" library and an Ultrasonic sensor to measure distances in centimeters. The measured distance is then converted to an index, which is used to generate a tone. The code also includes an array of frequency values for the tones to be generated, as well as a speaker pin.

The "setup()" function initializes the speaker pin as an output and sets it to low. Serial communication is also initiated at a baud rate of 9600.

The "loop()" function measures the distance with the Ultrasonic sensor and converts it to an index. If the index is less than 36, the "sound()" function is called with the index as an argument. Otherwise, the speaker is turned off.

The "sound()" function generates a tone based on the frequency value from the array using the tone() function. The frequency is determined by the index passed in as an argument. The tone is played for 100 cycles, with each cycle consisting of a HIGH and LOW phase with a delay determined by the frequency.

Note: This code assumes that the Ultrasonic sensor is connected to pin 7, and the speaker is connected to pin 3. If different pins are used, the code should be modified accordingly.


**How to install a library from zip**
https://wiki.seeedstudio.com/How_to_install_Arduino_Library/
