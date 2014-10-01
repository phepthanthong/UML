#include "Bintz.h"
#include <iostream>
using namespace std;

Bintz::Bintz(){
  cout << "appel contructeur Bintz()" << endl;
}
Bintz::~Bintz(){
  cout << "appel destructeur ~Bintz()" << endl;
}
void Bintz::pleurer(){
  cout << "Bintz a pleure" << endl;
}
void Bintz::sourire(){
  cout << "Bintz a souri" << endl;
}
void Bintz::mettreBavoir(){
  cout << "Bintz a mis un Bavoir" << endl;
}
void Bintz::retirerBavoir(){
  cout << "Bintz a retire le Bavoir" << endl;
}
void Bintz::manger(){
  cout << "Bintz est en train de manger" << endl;
}
