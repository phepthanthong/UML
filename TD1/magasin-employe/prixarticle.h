#ifndef PRIX_ARTICLE_H
#define PRIX_ARTICLE_H
#include <iostream>
#include <vector>
#include "Magasin.h"
#include "Article.h"
class PrixArticle {
private:
float PrixVente;
Magasin *mag; //vector <Article> v_A;
Article *art; //vector <Magasin*> v_M;
public:
  PrixArticle(float, Article*, Magasin*);
  ~PrixArticle();

  Article* getArticle() const;
  float getPrix() const;
  void meilleurPrix(Article*, vector<PrixArticle*>);
};
}
