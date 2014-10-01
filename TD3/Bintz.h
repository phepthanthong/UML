#ifndef BINTZ_H
#define BINTZ_H
#include <iostream>
#include <string>

class Bintz {
 private:
  enum etat {normal,faim,manger,reposer};
  //etat Bintz_etat = faim;
 public:
  Bintz();
  ~Bintz();
  void pleurer();
  void sourire();
  void mettreBavoir();
  void retirerBavoir();
  void manger();
  void miseAJourEtat(enum etat);

};
#endif
