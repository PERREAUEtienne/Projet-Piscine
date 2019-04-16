#include <fstream>
#include <iostream>
#include "graphe.h"
#include <vector>
#include <string>



graphe::graphe(std::string nomFichier)
{
    std::ifstream ifs{nomFichier};
    if (!ifs)
        throw std::runtime_error( "Impossible d'ouvrir en lecture " + nomFichier );
    int nb_sommet;
    ifs >> nb_sommet;
    if ( ifs.fail() )
        throw std::runtime_error("Probleme lecture ordre du graphe");
    std::string id;
    int x,y;
    //lecture des sommets

    sommet m;

    for (int i=0; i<nb_sommet; ++i)
    {
        ifs>>id;
        if(ifs.fail())
            throw std::runtime_error("Probleme lecture données sommet");
        ifs>>x;
        if(ifs.fail())
            throw std::runtime_error("Probleme lecture données sommet");
        ifs>>y;
        if(ifs.fail())
            throw std::runtime_error("Probleme lecture données sommet");
        ///liste_sommet.push_back(m));
        liste_sommet.push_back(m);
    }
    int nb_arete;
    ifs>> nb_arete;
    int nb_poids;
    ifs >> nb_poids;
    if ( ifs.fail() )
        throw std::runtime_error("Probleme lecture taille du graphe");

    arete a;
    for(int i=0; i <nb_arete;i++){
             ifs>>id;
        if(ifs.fail())
            throw std::runtime_error("Probleme lecture données sommet");
        ifs>>x;
        if(ifs.fail())
            throw std::runtime_error("Probleme lecture données sommet");
        ifs>>y;
        if(ifs.fail())
            throw std::runtime_error("Probleme lecture données sommet");
    liste_arete.push_back(a);

    }






}
graphe::~graphe()
{
}
