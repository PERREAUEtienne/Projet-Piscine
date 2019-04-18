#include <iostream>
#include <queue>
#include <stack>

#include "sommet.h"
#include <string>
#include <iostream>
#include "svgfile.h"


Sommet::Sommet(int id,double x,double y):m_id{id},m_x{x},m_y{y}
{
}
Sommet::~Sommet()
{
    //dtor
}
double Sommet::Getx(){


    return m_x;



}
double Sommet::Gety(){


return m_y;

}
int Sommet::Getid()
{
    return m_id;
}

