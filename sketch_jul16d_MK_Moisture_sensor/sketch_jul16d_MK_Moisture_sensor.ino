
#define sensorPin A0 
#define SensorPin A1
float sensorValue = 0; 
int led = 12; 
int led_1 = 13;
 

void setup() { 
 Serial.begin(9600); 
 //pinMode(led,OUTPUT);
} 
void loop() { 


int reading = analogRead(SensorPin);


  // Convert the reading into voltage:
float voltage = reading * (5000 / 1024.0);

  // Convert the voltage into the temperature in degree Celsius:
 float temperature = voltage / 10;
 for (int i = 0; i <= 100; i++)
 
 { 
   sensorValue = sensorValue + analogRead(sensorPin); 
   delay(100); 
 } 

 sensorValue = sensorValue/100.0;
   // Print the temperature in the Serial Monitor:
Serial.println("Temperature");
Serial.println(temperature);

Serial.print(" \xC2\xB0"); // shows degree symbol
Serial.println("C");

Serial.println("\n");
Serial.println("Moisture");
Serial.println(sensorValue);


if(temperature > 20){
    digitalWrite(led_1, HIGH);
    Serial.print("The light is now on");
  }
  else {
digitalWrite(led_1, LOW);
Serial.print("The light is now Off");
  }


if(sensorValue > 10){
      digitalWrite(led, HIGH);
      //Serial.print("The light is now on ,please turn of the pump");
    }
else {
 digitalWrite(led, LOW);
 //Serial.print("The light is now Off,please turn on the pump");
 } 

 delay(1000); 
}