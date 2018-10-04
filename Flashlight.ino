const int led = 11;
const int lightPin = A0;

int brightness = 255;
int lightSensorValue = 0;
int lightValue = 0;
void setup() {
  Serial.begin(9600);

  pinMode(led, OUTPUT);
  pinMode(lightPin, OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  
  lightSensorValue = analogRead(lightPin);

 lightSensorValue = lightSensorValue * 5;
  
  lightValue = lightSensorValue/2;

  brightness = 255 - lightValue;

  Serial.print(" raw lightSensor value: ");
  Serial.print(lightSensorValue);
  Serial.print(" mapped lightValue value: ");
  Serial.print(lightValue);

  Serial.print(" the current brightness: ");
  Serial.println(brightness);
  analogWrite(led, brightness);
  
  
}
