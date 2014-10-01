#ifndef OBSERVABLE_H
#define OBSERVABLE_H
#include <iostream>
#include "observer.h"
class Observer;
class Observable {
 public:
  Observable();
  void addObserver(Observer *obs);
  void deleteObserver(Observer *obs);
  void setChanged();
  void notifyObservers(Objet);
};
#endif
