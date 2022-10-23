/*
 * ListeNotes.h
 *
 *  Created on: 4 oct. 2022
 *      Author: Sébastien Rothhut
 */

#ifndef SRC_LISTENOTES_H_
#define SRC_LISTENOTES_H_

class ListeNotes {
    private:
        static const int maxNotes = 10;
        float notes[10];
        int nbNotes = 0;
    public:
        ListeNotes();
        ~ListeNotes();
        bool ajouterNote(const float note);
        bool retirerNote();
        float getNote(int n);
        float calculerMoyenne();
};



#endif /* SRC_LISTENOTES_H_ */
