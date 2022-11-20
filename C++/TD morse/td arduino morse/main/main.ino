#include "LettreMorse.h"
#include <string.h>
#include <Traducteur.cpp>

String code = "";

traducteur::trad()
void setup() {
Serial.begin(9600);
pinMode(LED_BUILTIN, OUTPUT);
//pinMode(buz, OUTPUT);
Serial.println("I am ready...");
}

void loop() {
  while (Serial.available()){
    code=Serial.readString();
    Serial.print(code);
    Serial.print("=");
    trad(const char *code)
Serial.println("");
}
delay(1000);
}
