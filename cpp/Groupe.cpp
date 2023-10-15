#include "Groupe.h"
#include "Multimedia.h"
#include <list>
#include <algorithm>

void Groupe::affiche(ostream &s) const{

    for(auto it : *this) {
        it->affiche(s);
    }
};

void Groupe::jouer() const {

    for(auto it : *this) {
        it->jouer();
    }
};
