#ifndef SOMMET_H_INCLUDED
#define SOMMET_H_INCLUDE
#include <vector>
class sommet
{
    public:
    sommet(std::string id,float x, float y);
    private:
        /// Voisinage : liste d'adjacence
        std::vector<sommet> listsommet;

        /// Données spécifiques du sommet
        std::string m_id; // Identifiant
        float m_x, m_y; // Position
};


#endif // SOMMET_H_INCLUDED
