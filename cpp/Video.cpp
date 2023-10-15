#include "Video.h"

Video::Video(std::string no, std::string nf, double d){
    nomObjet = no;
    nomFichier = nf;
    duree = d;
};

void Video::jouer() const{
    string s = "mpv "+ nomFichier +" &";
    system(s.data());
};