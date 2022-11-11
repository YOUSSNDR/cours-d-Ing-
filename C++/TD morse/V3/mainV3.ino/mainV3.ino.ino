#include "LettreMorseV3.h"
#include <string.h>
#include <Arduino.h>
using namespace std;

LettreMorse lm;
int ttap= 250; //temps d"un tap(bip) court
int code;



void setup() {
Serial.begin(9600);
pinMode(LED_BUILTIN, OUTPUT);
//pinMode(buz, OUTPUT);
Serial.println("I am ready...");
}

void loop() {
  if (Serial.available()){
    code=Serial.read();
    lm.morsetr(code);
    Serial.println(lm.morse);
    trad2();
    delay(ttap*3);
  }
}


void trad2(){
  for (int i=0;true;i++){
    if (lm.morse[i] == '.' ){
      point();
    }
        else if (lm.morse[i] == '-'){
          tiret();
        }
        else {
         break;
        }
      }
    }

    void point(){
      digitalWrite(LED_BUILTIN, HIGH);
      delay(ttap);
      digitalWrite(LED_BUILTIN, LOW);
      delay(ttap);
    }

    void tiret(){
      digitalWrite(LED_BUILTIN, HIGH);
      delay(ttap * 3);
      digitalWrite(LED_BUILTIN, LOW);
      delay(ttap);
    }