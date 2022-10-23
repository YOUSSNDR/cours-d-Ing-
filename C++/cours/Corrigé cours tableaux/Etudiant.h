/*
 * Etudiant.h
 *
 *  Created on: 4 oct. 2022
 *      Author: Sébastien Rothhut
 */

#ifndef SRC_ETUDIANT_H_
#define SRC_ETUDIANT_H_

#include "ListeNotes.h"

class Etudiant {
    private:
        char nom[50], prenom[50];
        ListeNotes notes;
    public :
        Etudiant(const char nom[], const char prenom[]);
        Etudiant(const char nom[], const char prenom[], ListeNotes listeNotes);
        void retournerNom(char nomComplet[]);
        const ListeNotes& getListeNotes() const;
        void setListeNotes(const ListeNotes& listeNotes);

} ;



#endif /* SRC_ETUDIANT_H_ */
