#include "Multimedia.h"

/*
Multimedia::Multimedia(std::string no, std::string nf){
    nomObjet = no;
    nomFichier = nf;
}; */

void Multimedia::affiche(std::ostream & s) const {
    s << this->getNomObjet()<< " dans le fichier "<<this->getNomFichier()<<std::endl;
};

//virtual =  va appeler la bonne version de la fonction (sinon appelle la fonc de l'objet de base)

//