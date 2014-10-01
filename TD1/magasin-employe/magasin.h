#ifndef MAGASIN_H
#define MAGASIN_H
#include <string>
#include <string>
#include <vector>
#include <typeinfo>
#include "Employe.h"
using namespace std;
class Magasin {
private:
int numMag;
static int nombreMagasins = 0;
string nomMag;
string adrMag;
Employe *diriger;
vector <Employe*> listEmpl;
vector <PrixArticle*> listMag;
public:
Magasin(string nom, string adr);
};
#endif
