
#include <iostream>
#include <string>
#include <fstream>
using namespace std;






int main()

{
        ifstream fichier("broadway.txt", ios::in);

        if(fichier)
        {
                int entier1;


                fichier >> entier1 ;  /*on lit jusqu'� l'espace et on stocke ce qui est lu dans la variable indiqu�e */
                std::cout << entier1 << endl;
                fichier.close();

        }
        else
                cerr << "Impossible d'ouvrir le fichier !" << endl;

        return 0;
}


