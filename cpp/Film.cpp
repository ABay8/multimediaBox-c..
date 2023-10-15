#include "Film.h"

void Film::afficheDurees() const{
    double * chap = Film::getChapitres();

    for (unsigned int k = 0; k < Film::getNombreChap(); ++k) {
        std::cout << "Le chapitre " << k << " a pour durée: " << chap[k] <<std::endl;
    }

};

