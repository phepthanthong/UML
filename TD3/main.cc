#include "Bintz.h"
#include <iostream>
using namespace std;

int main(){
  cout << "C'est un Bintz" << endl;
  cout << "entrer un etat (normal,faim,manger,reposer)" << endl;
  int entrer; cin >> entrer;
  etat Bintz_etat = faim;
  if (entrer == faim)
    {
      Bintz a;
      a.pleurer();
    }
}
