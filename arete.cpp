#include "arete.h"

#include <iostream>
#include <vector>
#include <string>
#include <graphe.h>

arete::arete(int id,int s1,int s2,float poids1,float poids2):m_id{id},m_s1{s1},m_s2{s2},m_poids1{poids1},m_poids2{poids2}
{
}
arete::~arete()
{

}
int arete::Getida()
{
    return m_id;
}
int arete::Gets1()
{
    return m_s1;
}
int arete::Gets2()
{
    return m_s2;
}
float arete::Getpoids1()
{
    return m_poids1;
}
float arete::Getpoids2()
{
    return m_poids2;
}
void arete::build(Svgfile& svgout){


}
