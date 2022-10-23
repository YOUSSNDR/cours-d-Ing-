/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cstring>
#include "Etudiant.h"
#include "ListeNotes.h"

using namespace std;

/**
 * Fonction de l'exercice 4
 * Remplit le tableau de caractères affichage avec la liste des étudiants du tableau promo
 **/
void affichagePromoEtudiants(char affichage[], Etudiant promo[], int nombreEtudiants) {
    strcpy (affichage, "Liste promo :\n");
    char copie[101];
    for (int i=0; i<nombreEtudiants; i++) {

        promo[i].retournerNom(copie);
        strcat (affichage, copie);
        if (i != nombreEtudiants-1) {
            strcat (affichage, "\n");
        }
    }
}

int main()
{
    // Exercice 1 : Tableau de 10 notes
    cout<<"EXERCICE 1"<<endl;
    const int nb_notes = 10;
    float notes[nb_notes];
    float sum = 0;
    for (int i = 0; i < nb_notes; i++) {
        cout<<"Entrez la note "<<i+1<<"/10 : ";
        cin>>notes[i];
        sum += notes[i];
    }
    cout<<"Moyenne : "<<sum/nb_notes<<endl;

    // Exercice 2 : Classe ListeNotes
    cout<<"\nEXERCICE 2"<<endl;
    ListeNotes listeNotes;
    listeNotes.ajouterNote(10.0);
    cout << listeNotes.getNote(0) << endl;
    cout << listeNotes.calculerMoyenne() << endl;
    listeNotes.ajouterNote(20.0);
    cout << listeNotes.calculerMoyenne() << endl;
    listeNotes.retirerNote();
    cout << listeNotes.calculerMoyenne() << endl;
    listeNotes.ajouterNote(15.0);

    // Exercice 3 : classe Etudiant - affichage du nom
    cout<<"\nEXERCICE 3"<<endl;
    Etudiant e1("Lupin", "Arsene", listeNotes);
    char affichageNom[101];
    e1.retournerNom(affichageNom);
    cout << affichageNom << endl;

    // Exercice 4 : liste d'étudiants
    cout<<"\nEXERCICE 4"<<endl;
    Etudiant e2("Holmes", "Sherlock");
    Etudiant e3("Dantes", "Edmond");

    Etudiant listeEtudiants[3] = {e1, e2, e3};
    char panneau[2000];
    affichagePromoEtudiants(panneau, listeEtudiants, 3);
    cout << panneau << endl;
}
