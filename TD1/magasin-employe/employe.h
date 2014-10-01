#ifndef EMPLOYE_H
#define EMPLOYE_H
#include <iostream>
#include <string>
#include "Magasin.h"
using namespace std;
class Employe {
	private:
		int numEmpl;
		string nomEmpl;
		string telEmpl;
		string emailEmpl;
		Magasin *lieu;
		static int ID = 0;
	public: 
		bool estDirigeant;
		Employer(){
			ID++;
			numEmpl = ID;
		}
};
#endif
