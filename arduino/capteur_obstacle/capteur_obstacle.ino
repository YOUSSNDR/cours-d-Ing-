#include<Servo.h>
int evite;
Servo servo1;
void setup() {
  Serial.begin(9600);
  pinMode(A1,OUTPUT);
  servo1.attach(4);
  
  
}

void loop() {
 evite=digitalRead(A1);

 Serial.print("sensor ");
 Serial.println(evite);

if (evite == HIGH){
  servo1.write(90);
  }
else {
  servo1.write(0);
  }

}
