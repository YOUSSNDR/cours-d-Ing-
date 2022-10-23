/*
 * Etudiant.cpp
 *
 *  Created on: 4 oct. 2022
 *      Author: Sébastien Rothhut
 */


#include "Etudiant.h"
#include <iostream>
#include <cstring>

using namespace std;

Etudiant::Etudiant(const char nom[], const char prenom[]) {
    strcpy(this->nom, nom);
    strcpy(this->prenom, prenom);
}

Etudiant::Etudiant(const char nom[], const char prenom[], ListeNotes listeNotes) : notes(listeNotes) {
    strcpy(this->nom, nom);
    strcpy(this->prenom, prenom);
}

void Etudiant::retournerNom(char nomComplet[]) {
    strcpy(nomComplet, this->prenom);
    strcat(nomComplet, " ");
    strcat(nomComplet, this->nom);
}
