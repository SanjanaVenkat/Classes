#include <iostream>
#include <cstring>
//#include "videogames.h"
//#include "movies.h"
#include "music.h"
#include "parent.h"

using namespace std;
//get types of media by returning an int

int music::getType() {
  return 2;
}

music::music() {

}

music::~music() {

}


//music functions
void music::setArtist(char a[]) {
  strcpy(artist, a);
}

void music::setDuration(int du) {
  duration = du;
}

void music::setPublisher(char p[]) {
  strcpy(publisher, p);
}

char* music::getArtist() {
  return artist;
}

int music::getDuration() {
  return duration;
}

char* music::getPublisher() {
  return publisher;
}

