/*Hardware req
Arduino Board
10k ohm Potentiometer*/
void void setup()
{
    Serial.begin(9600); //serial port
}
void loop(){
    int sensorvalue = analogRead(A10);
    serial.printl(sensorvalue);
    delay(1);
}