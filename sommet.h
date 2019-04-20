#ifndef SOMMET_H_INCLUDED
#define SOMMET_H_INCLUDE
#include <string>
#include <iostream>
#include <vector>
#include "svgfile.h"


class Sommet
{
    public:
    Sommet(int id,float x, float y);
    ~Sommet();
    float Getx();
    float Gety();
    int Getid();
    int getCC();
    void putCC(int cc);
    void build(Svgfile& svgout);
    void dessin(Svgfile& svgout);
    void Setx2(float x);
    void Sety2(float y);
    private:
        /// Voisinage : liste d'adjacence;

        /// Données spécifiques du sommet
    protected:
        int m_id,m_cc; // Identifiant
        float m_x, m_y;
        float m_x2,m_y2 ;// Position
};


#endif // SOMMET_H_INCLUDED

