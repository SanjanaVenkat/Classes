#include <iostream>
#include <cstring>
//#include "videogames.h"
//#include "movies.h"
//#include "music.h"
#include "parent.h"

using namespace std;
//get types of media by returning an int
int media::getType() {
  return 0;
}
int videogame::getType() {
  return 1;
}
int music::getType() {
  return 2;
}
int movie::getType() {
  return 3;
}
//constructors and destructors
media::media() {

}

media::~media() {

}
movie::movie() {

}

movie::~movie() {

}
music::music() {

}

music::~music() {

}

videogame::videogame() {

}

videogame::~videogame() {

}


//media functions

void media::setYear(int y) {
  year = y;
}

void media::setTitle(char t[]) {
  strcpy(title, t);
}

char* media::getTitle() {
  return title;
}

int media::getYear() {
  return year;
}
//movie functions
void movie::setDirector(char di[]) {
  strcpy(director, di);
}

void movie::setDuration(int du) {
  duration = du;
}

void movie::setRating(char r[]) {
  strcpy(rating, r);
}

char* movie::getDirector() {
  return director;
}

int movie::getDuration() {
  return duration;
}
char* movie::getRating() {
  return rating;
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

