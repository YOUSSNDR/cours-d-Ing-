#include "LettreMorse.h"
#include <Arduino.h>
#include <string.h>
using namespace std;
char l; //pour parcourir les lettres
const char* tra; //pour les lettres traduites
int longu;//longuerur des mots
int ttap= 500; //temps d"un tap court

class Traducteur {
    public:
    void trad1(const char* code){ //fait la traduction
      size_t longu = strlen(code);
      for(int i=0;i<longu;i++){
        l=code[i];
        Morse(); //change la variable tra
        trad2(); //agit sur la led
      }
    }

    void trad2(){
      int tail;
          size_t tail = strlen(tra);
      for (int i=0;i<tail;i++){
        if (tra[i] == "." ){
          point();
        }
        else if (tra[i] == "-"){
          tiret();
        }
        else {
          delay(ttap*3);
        }
      }
    }

    void point(){
      Serial.print(".");
      digitalWrite(LED_BUILTIN, HIGH);
      delay(ttap);
      digitalWrite(LED_BUILTIN, LOW);
      delay(ttap);
    }

    void tiret(){
      Serial.print("-");
      digitalWrite(LED_BUILTIN, HIGH);
      delay(ttap * 3);
      digitalWrite(LED_BUILTIN, LOW);
      delay(ttap);
    }

    void morse(){
    if (l == "A" || l == "a"){
      tra= LettreMorse::A();
      Serial.print(" ");
    }
    else if (l == "B" || l == "b"){
      tra= LettreMorse::B();
      Serial.print(" ");
    }
    else if (l == "C" || l == "c"){
      tra= LettreMorse::C();
      Serial.print(" ");
    }
    else if (l == "D" || l == "d"){
      tra= LettreMorse::D();
      Serial.print(" ");
    }
    else if (l == "E" || l == "e"){
      tra= LettreMorse::E();
      Serial.print(" ");
    }
    else if (l == "f" || l == "f"){
      tra= LettreMorse::f();
      Serial.print(" ");
    }
    else if (l == "G" || l == "g"){
      tra= LettreMorse::G();
      Serial.print(" ");
    }
    else if (l == "H" || l == "h"){
      tra= LettreMorse::H();
      Serial.print(" ");
    }
    else if (l == "I" || l == "i"){
      tra= LettreMorse::I();
      Serial.print(" ");
    }
    else if (l == "J" || l == "j"){
      tra= LettreMorse::J();
      Serial.print(" ");
    }
    else if (l == "K" || l == "k"){
      tra= LettreMorse::K();
      Serial.print(" ");
    }
    else if (l == "L" || l == "l"){
      tra= LettreMorse::L();
      Serial.print(" ");
    }
    else if (l == "M" || l == "m"){
      tra= LettreMorse::M();
      Serial.print(" ");
    }
    else if (l == "N" || l == "n"){
      tra= LettreMorse::N();
      Serial.print(" ");
    }
    else if (l == "O" || l == "o"){
      tra= LettreMorse::O();
      Serial.print(" ");
    }
    else if (l == "P" || l == "p"){
      tra= LettreMorse::P();
      Serial.print(" ");
    }
    else if (l == "Q" || l == "q"){
      tra= LettreMorse::Q();
      Serial.print(" ");
    }
    else if (l == "R" || l == "r"){
      tra= LettreMorse::R();
      Serial.print(" ");
    }
    else if (l == "S" || l == "s"){
      tra= LettreMorse::S();
      Serial.print(" ");
    }
    else if (l == "T" || l == "t"){
      tra= LettreMorse::T();
      Serial.print(" ");
    }
    else if (l == "U" || l == "u"){
      tra= LettreMorse::U();
      Serial.print(" "); 
    }
    else if (l == "V" || l == "v"){
      tra= LettreMorse::V();
      Serial.print(" ");
    }
    else if (l == "W" || l == "w"){
      tra= LettreMorse::W();
      Serial.print(" ");
    }
    else if (l == "X" || l == "x"){
      tra= LettreMorse::X();
      Serial.print(" ");
    }
    else if (l == "Y" || l == "y"){
      tra= LettreMorse::Y();
      Serial.print(" ");
    }
    else if (l == "Z" || l == "z"){
      tra= LettreMorse::Z();
      Serial.print(" ");
    }
  }
}