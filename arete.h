#ifndef ARETE_H_INCLUDED
#define ARETE_H_INCLUDED
#include <vector>
#include <string>
#include "svgfile.h"

class arete{


    public:
    arete(int id,int s1,int s2,float poids1,float poids2);
    ~arete();
    int Getida();
    int Gets1();
    int Gets2();
    float Getpoids1();
    float Getpoids2();
    void Sets1(int s1);
    void Sets2(int s2);
    void dessinerArete(Svgfile &svgout);

    private:
    int m_id;
    int m_s1;
    int m_s2;
    float m_poids1;
    float m_poids2;












};

#endif // ARETE_H_INCLUDED
