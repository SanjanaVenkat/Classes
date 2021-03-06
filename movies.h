#include <iostream>
#include <cstring>
#include "parent.h"

using namespace std;

#ifndef MOVIES_H
#define MOVIES_H

//movie class
class movie: public media {
  public:
  movie();
  ~movie();
  void setDirector(char di[]);
  void setDuration(int du);
  void setRating(char r[]);
  char* getDirector();
  int getDuration();
  char* getRating();
  int getType();
  private:
  char director[100];
  int duration;
  char rating[5];
};

#endif

