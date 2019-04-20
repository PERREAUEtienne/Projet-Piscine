
#include <iostream>
#include <string>
#include <fstream>
#include "svgfile.h"
#include "graphe.h"
#include "arete.h"







int main()

{

        graphe g{"broadway.txt","broadway_weights.txt"};
        g.kruskal();





        return 0;
}


