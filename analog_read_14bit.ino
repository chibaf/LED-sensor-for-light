void setup(){
  Serial.begin(9600);
  analogReadResolution(10); //change to 14-bit resolution
	}
	
void loop(){
  int reading = analogRead(A3); // returns a value between 0-16383
  Serial.println(reading);
  delay(500);
}