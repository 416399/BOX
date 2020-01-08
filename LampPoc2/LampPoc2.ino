int LED = 13;
int LED2 = 12;
int LED3 = 11;

int BUTTON = 2;
int BUTTON2 = 3;
int BUTTON3 = 4;

void setup(){

pinMode(LED,OUTPUT);

pinMode(BUTTON,INPUT);

pinMode(LED2,OUTPUT);

pinMode(BUTTON2,INPUT);

pinMode(LED3,OUTPUT);

pinMode(BUTTON3,INPUT);
}

void loop(){

if(digitalRead(BUTTON) == HIGH){

digitalWrite(LED,1);

}else{

digitalWrite(LED,0);

}
if(digitalRead(BUTTON2) == HIGH){

digitalWrite(LED2,1);

}else{

digitalWrite(LED2  ,0);

}
if(digitalRead(BUTTON3) == HIGH){

digitalWrite(LED3,1);

}else{

digitalWrite(LED3  ,0);

}

}
