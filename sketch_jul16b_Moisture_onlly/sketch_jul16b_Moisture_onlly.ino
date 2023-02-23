const int VAL_PROBE = 0; // Analog pin 0
const int DRY = 0; // the value after the LED goes ON
const int WET =20;
void setup() {
    Serial.begin(9600);
}

void LedState(int state) {
    digitalWrite(13, state);
}
 
void loop() {
    int moisture = analogRead(VAL_PROBE);
   // int moisture_percentage = map(moisture,DRY,0,WET,100);
 
    Serial.println(moisture);
 
    if(moisture >   DRY) {
        LedState(HIGH);
    } else   {
        LedState(LOW);
    }
    delay(1000);
}