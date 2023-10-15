#ifndef PHOTO_H_
#define PHOTO_H_
#include <iostream>
#include <string>
#include "Multimedia.h"
using namespace std;


class Photo : public Multimedia{
    private:
    double latitude{}, longitude{};

    friend class Groupe;
    friend class Table;
    Photo(){};
    Photo(std::string nomObjet, std::string nomFichier, double latitude, double longitude);

    public:

    ~Photo(){std::cout << "Photo deleted" << std::endl;};
    
    void setLatitude(double lat){latitude=lat;};
    void setLongitude(double lon){longitude=lon;};

    double getLatitude() const {return latitude;};
    double getLongitude() const {return longitude;};

    void affiche(std::ostream & outputStream) const override {
        Multimedia::affiche(outputStream);
        outputStream << "latitude: " << this->getLatitude() << " et longitude:  "<<this->getLongitude()<<std::endl;
    }; 


    virtual void jouer() const override;

};



#endif /* PHOTO_H_ */
