float potentio=0;
float tension=0;
float var=255/5;
float dio=0;
int i=0;
void setup() {
Serial.begin(9600);
}

void loop() {
//  Serial.println(potentio);
//  potentio=analogRead(0);
//  tension=potentio/204,6 ;
//  Serial.print("tension= ");
//  Serial.println( tension);
//  dio= tension*var;
//  analogWrite(3,dio);
//  delay(500);

  for(i=0;i<=255;i++){
    analogWrite(3,i);
    delay(10);
  }
    
  
}
