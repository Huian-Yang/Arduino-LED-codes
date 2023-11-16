const int led = 13; 
const int sensorPin = A0;

int lightLevel; 

void setup() {
  Serial.begin(9600);
  pinMode(sensorPin, INPUT);
  pinMode(led, OUTPUT);
  
}

void loop() { {
  digitalWrite (led, HIGH);
  
  lightLevel = analogRead(sensorPin);

  delay(2000);
  
  Serial.print("The photoresistor is reading: ");
  Serial.println(lightLevel);


  digitalWrite (led, LOW);

  lightLevel = analogRead(sensorPin);

  Serial.print("The photoresistor is reading: ");
  Serial.println(lightLevel);


}

  delay(2000);
  
}
