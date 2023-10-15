#ifndef MULTIMEDIA_H_
#define MULTIMEDIA_H_
#include <iostream>
#include <string>
#include <memory>

using namespace std;

class Multimedia {
    protected:
    std::string nomObjet{}, nomFichier{};


    public:
    Multimedia(){};
    Multimedia(std::string nomObjet, std::string nomFichier){};
    virtual ~Multimedia(){};

    virtual void setNomObjet(std::string no) {nomObjet = no;};
    virtual void setNomFichier(std::string nf) {nomFichier = nf;};

    std::string getNomObjet() const {return nomObjet;};
    std::string getNomFichier() const {return nomFichier;};

    virtual void affiche(std::ostream & outputStream) const;

    virtual void jouer() const = 0; //pour dire que c'est abstrait et doit être redéfini par les sous classes
};

#endif /* MULTIMEDIA_H_ */