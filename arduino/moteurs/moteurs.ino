int ENB=9;
int IN3=6;
int IN4=7;
void setup() {
  pinMode(ENB,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  digitalWrite(ENB,LOW);

  //direction du moteur
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH);
}

void loop() {
  //plein régime
  analogWrite(ENB,255);

}
