#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
 
using namespace std;
 
int main()
{
    srand(time(0));
    vector<string> tabNom(0);
    tabNom.push_back("Pierroot");
    tabNom.push_back("Loulou");
    tabNom.push_back("Fred");
    tabNom.push_back("Milan");
    tabNom.push_back("Camberlin");
    tabNom.push_back("Theo");
    tabNom.push_back("Thibowow");
    tabNom.push_back("Enzo");
    tabNom.push_back("Esteban");
    tabNom.push_back("Julien");
    tabNom.push_back("Rayane");
    tabNom.push_back("Evan");
 
    int nbAleatoire;
    while (tabNom.size() > 1)
    {
        nbAleatoire = rand() % tabNom.size();
        string nom = tabNom[nbAleatoire];
        tabNom.erase(tabNom.begin() + nbAleatoire);
 
        nbAleatoire = rand() % tabNom.size();
        cout << nom << " sera avec le plouc  " << tabNom[nbAleatoire] << endl;
        tabNom.erase(tabNom.begin() + nbAleatoire);
    }
 
 
    return 0;
}
