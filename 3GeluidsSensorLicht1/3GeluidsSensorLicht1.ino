/*
 * Rui Santos 
 * Complete Project Details https://randomnerdtutorials.com
*/
int ledPin=7;
int sensorPin=8;
boolean val=0;

void setup(){
 pinMode(ledPin, OUTPUT); 
  pinMode(sensorPin, INPUT);
  Serial.begin (9600);
}
  
void loop (){
  val = digitalRead(sensorPin);
  Serial.println(val);
  // Als de sensor geluid detecteerd gaat het led lampje even aan. 
  if (val==HIGH) {
    digitalWrite(ledPin, HIGH);
    delay(2000);
  }
  else {
    digitalWrite(ledPin, LOW);
  }
}
