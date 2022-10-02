int led_rouge=2;
int led_orange=4;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led_rouge,OUTPUT);
  pinMode(led_orange,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led_rouge,HIGH);
  Serial.println("rouge HIGH ");
  delay(500);
  digitalWrite(led_orange,HIGH);
  Serial.println("orange HIGH ");
  delay(1000);
  digitalWrite(led_rouge,LOW);
  Serial.println("rouge Low ");
  delay(500);
  digitalWrite(led_orange,LOW);
  Serial.println("orange LOW");
  delay(1000);
}
