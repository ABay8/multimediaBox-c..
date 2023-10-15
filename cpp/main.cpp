//
// main.cpp
// Created on 21/10/2018
//

#include <iostream>
#include <string>
#include "Multimedia.h"
#include "Video.h"
#include "Photo.h"
#include "Film.h"
#include "Groupe.h"
#include "Table.h"
#include <memory>


using namespace std;

int main(int argc, const char* argv[])
{
    std::cout << "Hello brave new world" << std::endl;
    //return 0;
    std::string no = "un";
    std::string nf = "fichierUn";
    /*Multimedia * o;
    o = new Multimedia(no, nf);
    std::string n = o-> getNomObjet();
    std::cout << "Le nom est:" << n << std::endl;
    //o->affiche(); //fonctionne aussi

    Photo * t;
    t = new Photo(no,"/mnt/c/Users/anais/Desktop/Cours/IMA/IMA204/TP/TP1/Source.jpg", 13, 15.5);
    double lat = t->getLatitude();
    double lon = t->getLongitude();
    std::cout << "Latitude: " << lat << " et Longitude: " << lon << std::endl;
    t->affiche();
    t->jouer();
*/
    Table* table = new Table();
    shared_ptr<Multimedia>* tab = new shared_ptr<Multimedia>[6];
    unsigned int c = 0;
    tab[c++] = table->newPhoto("p1", "/cal/exterieurs/abayani-21/Desktop/INF224/Ressources/cell.tif", 5, 7.9);
    tab[c++] = table->newVideo("v1", "/cal/exterieurs/abayani-21/Desktop/INF224/Ressources/bird.mp4", 3);
    tab[c++] = table->newPhoto("p2", "/cal/exterieurs/abayani-21/Desktop/INF224/Ressources/brain.tif", 6.6, 10);
    tab[c++] = table->newVideo("v2", "/cal/exterieurs/abayani-21/Desktop/INF224/Ressources/fishes.mp4", 6);
    tab[c++] = table->newPhoto("p3", "/cal/exterieurs/abayani-21/Desktop/INF224/Ressources/carte.tif", 5.6, 7);
    tab[c++] = table->newVideo("v3", "/cal/exterieurs/abayani-21/Desktop/INF224/Ressources/goat.mp4", 5);


    for (unsigned int k = 0; k < c; ++k) {
        tab[k]->jouer();
    }

    /*
    double* chap = new double[1];
    chap[0] = 5.5;

    Film* f;
    f = new Film("Avatar", "fichierFilm");
    f->setChapitres(chap, 1);
    f->afficheDurees(); 
    */

    /*
    Table* table = new Table();
    std::map<std::string, shared_ptr<Multimedia>> tableObjets = table->getTableObjets();
    std::map<std::string, shared_ptr<Groupe>> tableGroupes = table->getTableGroupes();

    shared_ptr<Video>v1(table->newVideo("v1", "f1", 3));

    shared_ptr<Video>v2(table->newVideo("v2", "f2", 65));
    shared_ptr<Photo>p1(table->newPhoto("p1", "f1", 4.1, 7));
    shared_ptr<Photo>p2(table->newPhoto("p2", "f2", 23.1, 1.5));

    shared_ptr<Groupe>g(table->newGroupe("Groupe"));
    auto it = g->begin();

    g->insert(it++, v1);
    g->insert(it++, v2);
    g->insert(it++, p1);
    g->insert(it++, p2);
    g->affiche(std::cout);

    p2->affiche(std::cout);
*/
    return 0;
}
 
