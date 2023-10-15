#include "Photo.h"
#include <string>

Photo::Photo(std::string no, std::string nf, double lat, double lon){
    nomObjet = no;
    nomFichier = nf;
    latitude = lat;
    longitude = lon;
};

void Photo::jouer() const{
    string s = "imagej "+ nomFichier +" &";
    system(s.data());
};