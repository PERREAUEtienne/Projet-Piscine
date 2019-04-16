#ifndef GRAPHE_H_INCLUDED
#define GRAPHE_H_INCLUDED
#include <vector>
#include <string>
#include <iostream>

struct sommet
{
    std::string id;
    float x,y;

};
struct arete
{
    std::string id;
    float x,y;
};

class graphe
{
    public:
        ///constructeur qui charge le graphe en mémoire
        //format du fichier ordre/liste des sommets/taille/liste des arêtes
        graphe(std::string);
        ~graphe();

    private:


        std::vector<sommet> liste_sommet;
        std::vector<arete> liste_arete;


};
#endif // GRAPHE_H_INCLUDED
