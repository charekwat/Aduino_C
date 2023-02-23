
#define sensorPin A0

int Moisture;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  //initialize communication at baud rate which is 9600
}

void loop() {
  // put your main code here, to run repeatedly:
  int reading1 = analogRead(sensorPin);
  int reading2 = analogRead(sensorPin);

  int led = 8;

  // Convert the reading into voltage:
  float voltage = reading1 * (5000 / 1024.0);

  // Convert the voltage into the temperature in degree Celsius:
  float temperature = voltage / 10;

  // Print the temperature in the Serial Monitor:
  Serial.print(temperature);
  Serial.print(" \xC2\xB0"); // shows degree symbol 
  Serial.print(moisture);
  Serial.print()

  Serial.println("C");
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