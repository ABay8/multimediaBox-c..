#ifndef TABLE_H_
#define TABLE_H_
#include <iostream>
#include <string>
#include <memory>
#include <map>
#include "Multimedia.h"
#include "Groupe.h"
#include "Photo.h"
#include "Video.h"
#include "Film.h"

using namespace std;


class Table {
    private:
    std::map<std::string, shared_ptr<Multimedia>> tableObjets;
    std::map<std::string, shared_ptr<Groupe>> tableGroupes;


    public:
    Table(){};
    virtual ~Table(){};

    std::map<std::string, shared_ptr<Multimedia>> getTableObjets() const{return tableObjets;};
    std::map<std::string, shared_ptr<Groupe>> getTableGroupes() const{return tableGroupes;};


    //Photo, une Vidéo, un Film, un Groupe
    shared_ptr<Photo> newPhoto(std::string nomObjet, std::string nomFichier, double latitude, double longitude);
    shared_ptr<Video> newVideo(std::string nomObjet, std::string nomFichier, double duree);
    shared_ptr<Film> newFilm(std::string nomObjet, std::string nomFichier);
    shared_ptr<Groupe> newGroupe(std::string g);
    
    void affiche(std::string nom) const;
    void jouer(std::string nom) const;


};




#endif /* TABLE_H_ */