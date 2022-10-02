float potentio=0;
float tension=0;
float c=90/5;
float T
#include<Servo.h> //bibliothèque servo
 Servo servo1; //on défini servo1 comme sevomoteur
void setup() {
  Serial.begin(9600);
  servo1.attach(4); //on ratache le servo a sa borne (directement compris comme sorti)
  Serial.println(potentio);
  potentio=analogRead(0);
  

}

void loop() {
  //servo1.detach(); //on arrête de maintenir la position
  Serial.println(potentio);
  potentio=analogRead(0);
  tension=potentio/204,6 ;
  if 
  Serial.print("tension= ");
  Serial.println( tension);
  Serial.print(
  int t=tension*c;
  servo1.write(t);
  
//  servo1.write(45);
//  delay(1000);
//  servo1.write(90);
//  delay(1000);
//  servo1.detach();
//  delay(2000);
//  servo1.attach(4);
//  servo1.write(0);
//  delay(1000);
}
