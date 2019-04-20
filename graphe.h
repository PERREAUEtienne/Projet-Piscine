#ifndef GRAPHE_H_INCLUDED
#define GRAPHE_H_INCLUDED
#include <vector>
#include <string>
#include <iostream>
#include "sommet.h"
#include "arete.h"
#include <set>
#include <unordered_map>
#include <unordered_set>

class graphe
{
    public:
        ///constructeur qui charge le graphe en m�moire
        //format du fichier ordre/liste des sommets/taille/liste des ar�tes
        graphe(std::string,std::string);
        void kruskal();
        ~graphe();

    private:


        std::vector<Sommet*> m_sommet;
        std::vector<arete*> m_arete;


};
#endif // GRAPHE_H_INCLUDED
