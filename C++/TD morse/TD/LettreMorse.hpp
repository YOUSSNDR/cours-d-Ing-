#include <cstring>

class LettreMorse {
    public:
        LettreMorse();
        const char* A = ".-";
        const char* B = "-...";
        const char* C = "-.-.";
        const char* D = "-..";
        const char* E = ".";
        const char* F = "..-.";
        const char* G = "--.";
        const char* H = "....";
        const char* I = "..";
        const char* J = ".---";
        const char* K = "-.-";
        const char* L = ".-..";
        const char* M = "--";
        const char* N = "-.";
        const char* O = "---";
        const char* P = ".--.";
        const char* Q = "--.-";
        const char* R = ".-.";
        const char* S = "...";
        const char* T = "-";
        const char* U = "..-";
        const char* V = "...-";
        const char* W = ".--";
        const char* X = "-..-";
        const char* Y = "-.--";
        const char* Z = "--..";


};

class Traducteur {
    public:
        const char* trad(char lettre){
            const char* T= LettreMorse::lettre ;//traduction de la lettre en morse
            int taille=T.size();
            for(int i=0;i>taille;i++){
                if (T[i]=='.'){
                    digitalWrite(LED_BUILTIN,HIGH);
                    delay(500);
                    digitalWrite(LED_BUILTIN,LOW);
                    delay(1000);
                } else if (T[i]=='-'){
                    digitalWrite(LED_BUILTIN, HIGH);
                    delay(1500);
                    digitalWrite(LED_BUILTIN,LOW);
                    delay(1000);
                } else{
                    break;
                }
            }  
        }
}