/*
 * ListeNotes.cpp
 *
 *  Created on: 4 oct. 2022
 *      Author: Sébastien Rothhut
 */


#include "ListeNotes.h"
#include <iostream>

using namespace std;

ListeNotes::ListeNotes() {}

ListeNotes::~ListeNotes() {}

bool ListeNotes::ajouterNote(const float note) {
    if (nbNotes == maxNotes) {
        return false;
    }
    notes[nbNotes] = note;
    nbNotes++;
    return true;
}

bool ListeNotes::retirerNote() {
    if (nbNotes == 0) {
        return false;
    }
    nbNotes--;
    return true;
}

float ListeNotes::getNote(int n) {
    if (n >= 0 && n < nbNotes) {
        return notes[n];
    } else {
        cout<<"ERREUR - entrée invalide : "<<n<<endl;
        return -1;
    }
}

float ListeNotes::calculerMoyenne() {
    float somme = 0;
    for (int i = 0; i < nbNotes ; i++) {
        somme += notes[i];
    }
    return somme / nbNotes;
}

