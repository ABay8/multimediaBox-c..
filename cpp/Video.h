/*
 * Video.h
 *
 *  Created on: Dec 14, 2022
 *      Author: anais
 */

#ifndef VIDEO_H_
#define VIDEO_H_
#include <iostream>
#include <string>
#include "Multimedia.h"
using namespace std;


class Video : public Multimedia{
    private:
    double duree{};

    friend class Table;
    friend class Groupe;
    friend class Film;

    Video(){};
    Video(std::string nomObjet, std::string nomFichier, double duree);

    public:
    ~Video(){std::cout << "Video deleted" << std::endl;};

    void setDuree(double d){duree=d;};
    double getDuree() const {return duree;};

    void jouer() const override;
        
    void affiche(std::ostream & outputStream) const override {
        Multimedia::affiche(outputStream);
        outputStream << "Durée: " << this->getDuree() <<std::endl;
    }; 

};





#endif /* VIDEO_H_ */
