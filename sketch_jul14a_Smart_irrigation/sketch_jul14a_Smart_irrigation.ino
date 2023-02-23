#define sensorPin A0
#define SensorPin A1
float sensorValue = 0; 
 int led = 12; 
void setup() {
  // put your setup code here, to run once:
  //initialize communication at baud rate which is 9600
  Serial.begin(9600);
 // pinMode(3,OUTPUT); //output pin for relay board, this will sent signal to the relay
 // pinMode(6,INPUT); //input pin coming from soil sensor
  
}

void loop() {
  // put your main code here, to run repeatedly:
  // Convert the reading into voltage:
  int reading = analogRead(SensorPin);
  float voltage = reading * (5000 / 1024.0);

  // Convert the voltage into the temperature in degree Celsius:
  float temperature = voltage / 10;

 for (int i = 0; i <= 100; i++)
 
 { 
   sensorValue = sensorValue + analogRead(sensorPin); 
   delay(100); 
 } 

 sensorValue = sensorValue/100.0;





  // Print the temperature in the Serial Monitor and Moisture:
  Serial.println("Temperature:");
  Serial.println(temperature);
  Serial.println("C");

   Serial.print("\n");

 // Serial.print(" \xC2\xB0"); // shows degree symbol
Serial.println("Moisture:");
Serial.println(sensorValue);

delay(1000); // wait a second between readings















 if(temperature > 28){
      digitalWrite(led, HIGH);
      Serial.print("The light is now on");
    }
    else {
 digitalWrite(led, LOW);
 Serial.print("The light is now Off");
    } 


}

















































 

