long blinkStart;
const int blinkDelay = 1000;
bool isHigh= false;
void setup() {
  pinMode(LED_BUILTIN,OUTPUT);
  long blinkStart = millis();
}

void loop() {
  if(millis() - blinkStart >= blinkDelay){
   isHigh = !isHigh;
   digitalWrite(LED_BUILTIN,isHigh ? HIGH:LOW); 
  }
}
