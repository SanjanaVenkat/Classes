#include <iostream>
#include <cstring>
#include "videogames.h"
//#include "movies.h"
//#include "music.h"
#include "parent.h"

using namespace std;
//get types of media by returning an int
int videogame::getType() {
  return 1;
}

//constructors and destructors

videogame::videogame() {

}

videogame::~videogame() {

}
//videogame functions

void videogame::setPublisher(char p[]) {
  strcpy (publisher, p);
}

void videogame:: setRating(char r[]) {
  strcpy (rating, r);
}

char* videogame::getPublisher() {
  return publisher;
}

char* videogame::getRating() {
  return rating;
}

