#include <iostream>
#include <cstring>
#include "parent.h"

using namespace std;

#ifndef VIDEOGAMES_H
#define VIDEOGAMES_H

//videogame class
class videogame: public media {
  public:
  videogame();
  ~videogame();
  void setPublisher(char p[]);
  void setRating(char r[]);
  char* getPublisher();
  char* getRating();
  int getType();
  private:
  char publisher[100];
  char rating[5];
};

#endif

