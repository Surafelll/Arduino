void setup()
{ 
    pinMode(2, OUTPUT);
}



void loop()
{
    digitalWrite(2, HIGH); 
    delay(1000);           
    digitalWrite(2, LOW);  // turn the LED off by making the voltage LOW
    delay(1000);           // wait for a second
}