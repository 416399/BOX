/*
 * Rui Santos 
 * Complete Project Details https://randomnerdtutorials.com
*/
int ledPinA=6;
int ledPin=7;
int sensorPin=8;
boolean val=0;

void setup(){
 pinMode(ledPinA, OUTPUT);
 pinMode(ledPin, OUTPUT); 
  pinMode(sensorPin, INPUT);
  Serial.begin (9600);
}
  
void loop (){
  val = digitalRead(sensorPin);
  Serial.println(val);
  // when the sensor detects a signal above the threshold value, LED flashes
  if (val==HIGH) {
    digitalWrite(ledPin, HIGH);
    digitalWrite(ledPinA, LOW);
    delay(2000);
  }
  else {
    digitalWrite(ledPin, LOW);
      digitalWrite(ledPinA, HIGH);
  }
}
