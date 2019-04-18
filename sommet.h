#ifndef SOMMET_H_INCLUDED
#define SOMMET_H_INCLUDE
#include <string>
#include <iostream>
#include <vector>


class Sommet
{
    public:
    Sommet(int id,double x, double y);
    ~Sommet();
    double Getx();
    double Gety();
    int Getid();
    private:
        /// Voisinage : liste d'adjacence;

        /// Données spécifiques du sommet
    protected:
        int m_id; // Identifiant
        double m_x, m_y; // Position
};


#endif // SOMMET_H_INCLUDED

