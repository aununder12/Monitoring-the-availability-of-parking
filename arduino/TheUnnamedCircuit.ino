//  _ ___ _______     ___ ___ ___  ___ _   _ ___ _____ ___ 
// / |_  )__ /   \   / __|_ _| _ \/ __| | | |_ _|_   _/ __| 
// | |/ / |_ \ |) | | (__ | ||   / (__| |_| || |  | | \__ \ 
// |_/___|___/___/   \___|___|_|_\\___|\___/|___| |_| |___/ 
// 
// The Unnamed Circuit
// 
// Made by Aun Under
// License: CC-BY-SA 3.0
// Downloaded from: https://circuits.io/circuits/2834541-the-unnamed-circuit

int button = 2;
int led1 = 13;
int led2 = 12;  
int buttonState = 0;
void setup() {
Serial.begin(9600);
  pinMode(led1,OUTPUT);   
  pinMode(led2,OUTPUT);  
  pinMode(button,INPUT);     
}
void loop(){
	  buttonState = digitalRead(button);
 if (buttonState == HIGH) {     
	Serial.println("turn LED on");
   digitalWrite(led2, LOW);  
   digitalWrite(led1, HIGH);  
  } 
 else {
	Serial.println("turn LED off");
    digitalWrite(led2, HIGH); 
    digitalWrite(led1, LOW); 
  }
}
