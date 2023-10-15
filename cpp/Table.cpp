#include <iostream>
#include <string>
#include <memory>
#include <map>
#include "Multimedia.h"
#include "Groupe.h"
#include "Photo.h"
#include "Video.h"
#include "Film.h"
#include "Table.h"
using namespace std;

shared_ptr<Photo> Table::newPhoto(std::string nomObjet, std::string nomFichier, double latitude, double longitude){
    shared_ptr<Photo>p(new Photo(nomObjet, nomFichier, latitude, longitude));
    tableObjets[nomObjet] = p ;
    return p;
};


shared_ptr<Video> Table::newVideo(std::string nomObjet, std::string nomFichier, double duree){
    shared_ptr<Video>p(new Video(nomObjet, nomFichier, duree));
    tableObjets[nomObjet] = p ;
    return p;
};


shared_ptr<Film> Table::newFilm(std::string nomObjet, std::string nomFichier){
    shared_ptr<Film>p(new Film(nomObjet, nomFichier));
    tableObjets[nomObjet] = p ;
    return p;
};


shared_ptr<Groupe> Table::newGroupe(std::string g){
    shared_ptr<Groupe>p(new Groupe(g));
    tableGroupes[g] = p ;
    return p;
};

void Table::affiche(std::string nom) const {
    
    auto it = tableObjets.find(nom);
    if (it != tableObjets.end()){
        tableObjets.find(nom)->second->affiche(std::cout);
        return ;
    }

    auto ot = tableGroupes.find(nom);
    if (ot != tableGroupes.end()) {
    tableGroupes.find(nom)->second->affiche(std::cout);
    return ;
    }

    std::cout << "Non trouvé" << std::endl ;

};


void Table::jouer(std::string nom) const {

    auto it = tableObjets.find(nom);
    if (it != tableObjets.end()){
        tableObjets.find(nom)->second->jouer();
        return ;
    }

    auto ot = tableGroupes.find(nom);
    if (ot != tableGroupes.end()) {
    tableGroupes.find(nom)->second->jouer();
    return ;
    }


    std::cout << "Non trouvé" << std::endl ;


};

//Comment peut-on l'interdire, afin que seule la classe servant à manipuler les objets puisse en créer de nouveaux ?

