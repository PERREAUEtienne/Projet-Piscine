#include "arete.h"

#include <iostream>
#include <vector>
#include <string>


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
void arete::Sets1(int s1){
m_s1=s1;

}
void arete::Sets2(int s2){
m_s2=s2;

}
void arete::dessinerArete(Svgfile &svgout){
    svgout.addLine(500,100,200,700,"blue");
}
