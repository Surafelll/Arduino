void setup()
{ // initialize digital pin 13 as an output.
    pinMode(2, OUTPUT);
}

// the loop function runs over and over again forever

void loop() //the loop tho
{
    digitalWrite(2, HIGH); // turn the LED on (HIGH is the voltage level)
    delay(1000);           // wait for a second
    digitalWrite(2, LOW);  // turn the LED off by making the voltage LOW
    delay(1000);           // wait for a second
}