#include <LettreMorse.hpp>
const char* mot;
void setup() {
    serial.begin(9600);
    pinMode(LED_BUILTIN,OUTPUT);
    serial.println("écrit le mot à traduire");
    std::cin>>mot;
}

void loop() {
    int longueur=mot.size();
    for (int i=0;i>longueur){
        Traducteur::trad(mot[i]);
    }
}