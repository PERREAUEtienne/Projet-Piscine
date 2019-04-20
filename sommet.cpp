#include <iostream>
#include <queue>
#include <stack>

#include "sommet.h"
#include <string>
#include <iostream>


Sommet::Sommet(int id,float x,float y):m_id{id},m_x{x},m_y{y}
{
    m_cc=0;
    m_x2=0;
    m_y2=0;
}

Sommet::~Sommet()
{
    //dtor
}

float Sommet::Getx(){


    return m_x;



}
float Sommet::Gety(){


return m_y;

}
int Sommet::Getid()
{
    return m_id;
}

int Sommet::getCC()
{
    return m_cc;
}
void Sommet::putCC(int cc)
{
    m_cc=cc;
}
void Sommet::Setx2(float x){

    m_x2=x;
}
void Sommet::Sety2(float y){
    m_y2=y;
}
void Sommet::build(Svgfile& svgout)
{
    svgout.addDisk(m_x,m_y,10,"black");
}
void Sommet::dessin(Svgfile& svgout)
{
    svgout.addLine(m_x,m_y,m_x2,m_y2,"black");
}
