int ledPin= 7;
int sensorPin= 6;
boolean val =0;

void setup(){
  pinMode(ledPin, OUTPUT);
  pinMode(sensorPin, INPUT);
  Serial.begin (9600);
}
  
void loop (){
  val =digitalRead(sensorPin);
  Serial.println (val);
  // Als een hard geluid word gedetecteerd gaat het lampje aan.
  if (val==HIGH) {
    digitalWrite(ledPin, HIGH);
    delay(5000); 
  }
  else {
    digitalWrite(ledPin, LOW);
  }
}
