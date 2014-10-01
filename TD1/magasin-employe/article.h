#ifndef ARTICLE_H
#define ARTICLE_H
#include <string>
using namespace std;
class Article {
private:
static int nombreArticles = 0;
int numArticle;
float prixAchat;
string libelleArticle;
public:
Article(int prix, string libelle);
vector <PrixArticle*> listArt;
};
#endif
