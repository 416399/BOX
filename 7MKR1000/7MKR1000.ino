#include <WiFi101.h>
#include <WiFiServer.h>
#include <WiFiClient.h>

char ssid[] = "LAPTOP-PQ5Q9JFU 4536";
char password[] = "H9l4946|";
//char ssid[] = "DESKTOP-PLMATCB 7643";
//char password[] = "6a3}5S00";
 
WiFiServer server(26);
WiFiClient client;

int ledPinA=8;
int ledPin=7;
int sensorPin=6;
boolean val=0;

void setup() {
   pinMode(ledPinA, OUTPUT);
  pinMode(ledPin, OUTPUT); 
  pinMode(sensorPin, INPUT);
  Serial.begin (9600);
  Serial.begin(9600);
  WiFi.begin(ssid, password);

  server.begin();
}

void loop() {

 val = digitalRead(sensorPin);
//als het geluid te hard is geeft de arduino het signaal "too loud" door. Een van de led lampen gaat uit terwijl de andere aan gaat. 
             if (val==HIGH) {
             client.print("TOO LOUD");
             digitalWrite(ledPin, HIGH);
             digitalWrite(ledPinA, LOW);
             }
             else {
             client.print("FINE");
             digitalWrite(ledPin, LOW);
             digitalWrite(ledPinA, HIGH);
             }

  if(WiFi.status() == WL_CONNECTED){
 
    client = server.available();
      Serial.println("Connected");

      while(client.connected()){
        val = digitalRead(sensorPin);

             if (val==HIGH) {
             client.print("TOO LOUD");
             Serial.println("Too loud b");
             digitalWrite(ledPin, HIGH);
             digitalWrite(ledPinA, LOW);
             }
             else {
             //client.print("FINE");
             digitalWrite(ledPin, LOW);
             digitalWrite(ledPinA, HIGH);
             }

            Serial.println("Connected to a client");
            delay(15);
            } 


            }
  else{
    Serial.println("Can't connect to the WiFi network.");
    WiFi.begin(ssid, password);
    server.begin();
    delay(1000);
  }
}
