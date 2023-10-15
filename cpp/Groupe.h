#ifndef GROUPE_H_
#define GROUPE_H_
#include <iostream>
#include <string>
#include <list>
#include "Multimedia.h"
using namespace std;

class Groupe : public std::list<shared_ptr<Multimedia>> {
    protected:
    friend class Table;
    std::string nomGroupe{};
    Groupe(){};
    Groupe(std::string g) {nomGroupe = g;};

    public:

    virtual ~Groupe(){std::cout << "Group deleted" << std::endl;};

    std::string getNomGroupe() const {return nomGroupe;};

    void affiche(ostream &s) const;

    void jouer() const;

};

#endif /* GROUPE_H_ */
