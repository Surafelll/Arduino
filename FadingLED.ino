int led = 9;       
int brightness = 0; 
int fadeAmount = 5; 


void setup()
{
    // declare pin 9 to be an output:
    pinMode(led, OUTPUT);
}

// the loop routine runs over and over again forever:

void loop()
{
    // set the brightness of pin 9:
    analogWrite(led, brightness);
    // change the brightness for next time through the loop:
    brightness = brightness + fadeAmount;
    // reverse the direction of the fading at the ends of the fade:
    if (brightness == 0 || brightness == 255)
    {
        fadeAmount = -fadeAmount;
    }
    // wait for 30 milliseconds to see the dimming effect
    delay(300);
}