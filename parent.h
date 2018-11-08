#include <iostream>
#include <cstring>

using namespace std;

//void addMedia();
//void searchMedia();

//media class (where all three medias have an overlap)
class media {
 public:
  media();
  ~media();
  void setTitle(char t[]);
  char* getTitle();
  void setYear(int y);
  int getYear();
 virtual int getType();
 private:
  int year;
  char title[100];
};
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

//music class
class music: public media {
  public:
  music();
  ~music();
  void setArtist(char a[]);
  void setDuration(int du);
  void setPublisher(char p[]);
  char* getArtist();
  int getDuration();
  char* getPublisher();
  int getType();
  private:
  char artist[100];
  int duration;
  char publisher[100];
};

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



