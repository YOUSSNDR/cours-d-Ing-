#include<TimerOne.h>
int ENB=11;
int IN3=6;
int IN4=7;
float vitesseD;
float Mult=(3.14*6)/(1920*150000*0.000001);
long compteurD;
void setup() {
  Timer1.initialize(150000);
  attachInterrupt(0,changeD,RISING);
  Timer1.attachInterrupt(CalculVitesseD);
  Serial.begin(9600);
  pinMode(ENB,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  digitalWrite(ENB,LOW);

  //direction du moteur
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH);
}
void changeD(){compteurD++;}

void CalculVitesseD(void){ 
  vitesseD=Mult*compteurD;
 //   Serial.println(compteurD);
 Serial.println(vitesseD,2);
  compteurD=0;}


void loop() {
  //plein régime
  analogWrite(ENB,173);
}
