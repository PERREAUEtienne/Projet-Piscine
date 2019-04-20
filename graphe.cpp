#include <fstream>
#include <iostream>
#include "graphe.h"
#include <vector>
#include <string>
#include <set>



Svgfile svgout;

graphe::graphe(std::string nomFichier,std::string fichierpoids)
{
    std::ifstream ifs{nomFichier};
    std::ifstream ifs2{fichierpoids};


    if (!ifs)
        throw std::runtime_error( "Impossible d'ouvrir en lecture " + nomFichier );
    if (!ifs2)
        throw std::runtime_error( "Impossible d'ouvrir en lecture " + nomFichier );

    int nb_sommet;
    ifs >> nb_sommet;
    if ( ifs.fail() )
        throw std::runtime_error("Probleme lecture ordre du graphe");
    int id;
    float x,y;

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
        Sommet b(id,x,y);
        b.build(svgout);




        m_sommet.push_back(a);

        //std::cout << m_sommet[1].Getx() << std::endl;
        std::cout <<"\n\n";
        std::cout << "Sommet       Coordonnees" << std::endl;
        std::cout << m_sommet[i]->Getid()<< "               "<< m_sommet[i]->Getx() << "   "<< m_sommet[i]->Gety() << std::endl;


    }



    std::cout <<"=============================================";
    int nb_arete,nb_poids;
    ifs >> nb_arete;
    ifs2 >> nb_arete;
    ifs2 >> nb_poids;
    int s1,s2;
    float poids1,poids2;

    if ( ifs.fail() )
        throw std::runtime_error("Probleme lecture taille du graphe");

    //lecture des aretes

    for (int j=0; j<nb_arete; j++)
    {

        ifs >> id;
        ifs2 >>id;
        ifs >> s1;
        ifs2>>poids1;
        ifs >> s2;
        ifs2>>poids2;

        arete* b = new arete(id,s1,s2,poids1,poids2);
        m_arete.push_back(b);
        std::cout <<"\n\n";
        std::cout <<"                  \n";
        std::cout << "Aretes       Sommets        Poids1     Poids2" << std::endl;
        std::cout << m_arete[j]->Getida()<< "            "<< m_arete[j]->Gets1() << "     "<< m_arete[j]->Gets2() << "         "<< m_arete[j]->Getpoids1() << "          "<< m_arete[j]->Getpoids2() <<std::endl;

    }
}

void graphe::kruskal()
{

    std::cout <<"=============================================";
    arete* c;
    std::cout <<"\n\n\n";
    std::cout<<"Kruskal:"<<std::endl;
    for(int j=0; j<m_arete.size(); j++)
        for (int m=1; m<m_arete.size(); m++)
        {
            if ((m_arete[m-1]->Getpoids1()) > (m_arete[m] -> Getpoids1()))
            {

                c = m_arete [m-1];
                m_arete[m-1]=m_arete[m];
                m_arete[m]= c;
            }


            //std::cout << m_arete[i]->Getpoids1() << std::endl;
        }

    for(int i=0; i<m_sommet.size(); i++)
    {
        m_sommet[i]->putCC(i);
    }

    int i=0,n=0,cc2;

    do
    {
        if((m_sommet[m_arete[i]->Gets1()]->getCC())!= (m_sommet[m_arete[i]->Gets2()]->getCC()))
        {
            n++;
            std::cout<<m_arete[i]->Getida()<<std::endl;
            m_sommet[m_arete[i]->Gets2()]->putCC(m_sommet[m_arete[i]->Gets1()]->getCC());
            cc2=m_sommet[m_arete[i]->Gets2()]->getCC();
            for(int j=0; j<m_sommet.size(); j++)
            {
                if(cc2==m_sommet[j]->getCC())
                    m_sommet[j]->putCC(m_sommet[m_arete[i]->Gets1()]->getCC());
            }
        Sommet b(m_arete[i]->Getida(),(m_sommet[m_arete[i]->Gets2()]->Getx()),(m_sommet[m_arete[i]->Gets2()]->Gety()));
        b.Setx2(m_sommet[m_arete[i]->Gets2()]->Getx());
        b.Sety2(m_sommet[m_arete[i]->Gets2()]->Gety());
        b.dessin(svgout);
        }
        i++;

    }
    while(n!=(m_sommet.size()-1 ));

    /*for(int j=0; j<m_arete.size();j++)
        std::cout<<m_arete[j] -> Getpoids1()<<std::endl;*/
}


graphe::~graphe()
{
}
