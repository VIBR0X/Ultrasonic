# Ultrasonic

This code defines a speaker pin using a macro definition (#define SPEAKER 3) and initializes it as an output pin in the 
pinInit() function (pinMode(SPEAKER,OUTPUT)). The sound() function is used to play different bass notes defined in the 
BassTab array. The loop in the loop() function plays each note in the BassTab array and waits for 500 milliseconds before
 moving on to the next note.
The sound() function uses a loop to generate a square wave of the frequency corresponding to the current note by toggling
 the speaker pin on and off with a delay of half the period of the note. The period of each note is determined by its 
frequency and is calculated as the reciprocal of the frequency. The delayMicroseconds() function is used to delay for a 
given number of microseconds.
