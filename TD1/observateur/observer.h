#ifndef OBSERVER_H
#define OBSERVER_H
class Observable;
class Observer {
 public:
  Observer();
  ~Observer();
  virtual void update(Observable *change) = 0;
};
#endif
