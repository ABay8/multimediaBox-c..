#ifndef FILM_H_
#define FILM_H_
#include <iostream>
#include <string>
#include "Video.h"
using namespace std;


class Film : public Video{
    private:
    double * chapitres {};
    unsigned int nombreChapitres {};

    public:
    Film(){};
    Film(std::string nomObjet, std::string nomFichier) : Video(nomObjet, nomFichier, 0){};
    ~Film(){delete[] chapitres; std::cout << "Film deleted" << std::endl;};

    //Setters et getters
    double* getChapitres() const {return chapitres;}; 
    //const à la fin: la fonction ne modifie pas, const au début avec pointeur et ref, pour rendre la données non modifiable
    unsigned int getNombreChap() const {return nombreChapitres;};

    void setChapitres(const double * chap, unsigned int nbr) {
        //Le "chap" n'appartient pas au film, il faut donc en faire une copie, sinon prob
        //allouer tableau et copier element
        delete[] chapitres;
        chapitres = new double[nbr];
        for(unsigned int i = 0; i<nbr; i++) { chapitres[i] = chap[i] ;};
        nombreChapitres = nbr;
    };

    void afficheDurees() const;

    void affiche(std::ostream & outputStream) const override {
        Multimedia::affiche(outputStream);
        outputStream << "Nombre chapitres: " << this->getNombreChap() <<std::endl;
        this->afficheDurees();
    }; 

};


#endif /* FILM_H_ */
