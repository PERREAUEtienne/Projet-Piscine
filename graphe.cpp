#include <fstream>
#include <iostream>
#include "graphe.h"
#include <vector>
#include <string>
#include "svgfile.h"




graphe::graphe(std::string nomFichier,std::string fichierpoids)
{
    std::ifstream ifs{nomFichier};
    std::ifstream ifs2{fichierpoids};
    Svgfile svgout;
    svgout.addLine(500,200,400,100,"blue");
    if (!ifs)
        throw std::runtime_error( "Impossible d'ouvrir en lecture " + nomFichier );
    if (!ifs2)
        throw std::runtime_error( "Impossible d'ouvrir en lecture " + nomFichier );

    int nb_sommet;
    ifs >> nb_sommet;
    if ( ifs.fail() )
        throw std::runtime_error("Probleme lecture ordre du graphe");
    int id;
    double x,y;
    //lecture des sommets

    for (int i=0; i<nb_sommet; ++i)
    {
        ifs>>id; // Identifiants du sommet
        if(ifs.fail())
            throw std::runtime_error("Probleme lecture données sommet");
        ifs>>x; // coordonnées en abscisse
        if(ifs.fail())
            throw std::runtime_error("Probleme lecture données sommet");
        ifs>>y; // coordonnées en ordonnée
        if(ifs.fail())
            throw std::runtime_error("Probleme lecture données sommet");

        Sommet* a = new Sommet(id,x,y);
        m_sommet.push_back(a);
        //std::cout << m_sommet[1].Getx() << std::endl;
        //std::cout << m_sommet[i]->Getid()<< std ::endl;
        //std::cout << m_sommet[i]->Gety() << std::endl;
        //std::cout << m_sommet[i]->Gety() << std::endl ;






    }


    int nb_arete,nb_poids;
    ifs >> nb_arete;
    ifs2 >> nb_arete;
    ifs2 >> nb_poids;
    int s1,s2;
    float poids1,poids2;

    if ( ifs.fail() )
        throw std::runtime_error("Probleme lecture taille du graphe");

    //lecture des aretes

    for (int i=0; i<nb_arete; ++i)
    {

        ifs >> id;
        ifs2 >>id;
        ifs >> s1;
        ifs2>>poids1;
        ifs >> s2;
        ifs2>>poids2;

        arete* b = new arete(id,s1,s2,poids1,poids2);
        m_arete.push_back(b);










    }

    for (int i=0 ; i < nb_arete; i++)
    {
        //for (int j=0; j < nb_arete;j++){

        if ((m_arete[i]->Getpoids1()) > (m_arete[i+1] -> Getpoids1()))
        {
            arete* c = m_arete [i];
            m_arete[i]=m_arete[i+1];
            m_arete[i+1]= c;
            //std::cout << m_arete[i]->Getpoids1() << std::endl;

        }

        }

    int v1;
    int v2;
    for (int i=0; i <nb_arete;i++){
            if ((m_arete[i]->Gets1()) != (m_arete[i]->Gets2())){
                v1= m_arete[i]->Gets1();
                v2=m_arete[i]->Gets2();

                svgout.addLine(m_sommet[v1]->Getx(), m_sommet[v1]->Gety(), m_sommet[v2]->Getx(),m_sommet[v2]->Gety(),"blue");
                //m_arete[i]->Sets1(0);
                //m_arete[i]->Sets2(0);

            }

                }
    }
        //}










graphe::~graphe()
{
}
