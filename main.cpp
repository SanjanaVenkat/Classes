//Sanjana Venkat
//11.8.18
//Classes project, can add, search for and delete different types of media
#include <iostream>
#include <cstring>
#include "parent.h"
//#include "videogames.h"
//#include "movies.h"
//#include "music.h"
#include <vector>

using namespace std;

vector <media*>* medialist;
//to add media
void addMedia(vector <media*>* medialist) {
  //media* m = new media();
    char mediatype[3];
    //three different types of media to add
  cout << "Enter 1 if you want to add a videogame, 2 if you want to add a music\
, or 3 if you want to add a movie" << endl;
  cin >> mediatype;
  //adds videogame
  if (mediatype[0] == '1') {
    videogame* v = new videogame();
    cout << "Adding a videogame" << endl;
    int yr = 0;
  cout << "Enter the year" << endl;
  cin >> yr;
  v->setYear(yr);
  char te[100];
  cout << "Enter the title" << endl;
  cin >> te;
  v->setTitle(te);
  char pu[100];
  cout << "Enter publisher" << endl;
  cin >> pu;
  v->setPublisher(pu);
  char ra[5];
  cout << "Enter rating" << endl;
  cin >> ra;
  v->setRating(ra);
  v->getType();
  medialist->push_back(v);
  cout << v->getType() << endl;
  }
  //adds music
  else if (mediatype[0] == '2') {
    music* mu = new music();
    cout << "Adding a music" << endl;
    int yr = 0;
  cout << "Enter the year" << endl;
  cin >> yr;
  mu->setYear(yr);
  char te[100];
  cout << "Enter the title" << endl;
  cin >> te;
  mu->setTitle(te);
  char pu[100];
  cout << "Enter publisher" << endl;
  cin >> pu;
  mu->setPublisher(pu);
  char ar[100];
  cout << "Enter artist" << endl;
  cin >> ar;
  mu->setArtist(ar);
  int dur = 0;
  cout << "Enter the duration (sec)" << endl;
  cin >> dur;
  mu->setDuration(dur);
  medialist->push_back(mu);
  }
  //adds movie
  else if (mediatype[0] == '3') {
 movie* mo = new movie();
    cout << "Adding a movie" << endl;
    int yr = 0;
  cout << "Enter the year" << endl;
  cin >> yr;
  mo->setYear(yr);
  char te[100];
  cout << "Enter the title" << endl;
  cin >> te;
  mo->setTitle(te);
  char di[100];
  cout << "Enter director" << endl;
  cin >> di;
  mo->setDirector(di);
  char ra[5];
  cout << "Enter rating" << endl;
  cin >> ra;
  mo->setRating(ra);
  int dur = 0;
  cout << "Enter the duration (min)" << endl;
  cin >> dur;
  mo->setDuration(dur);
  medialist->push_back(mo);

  }
  /*
  int yr = 0;
  cout << "Enter the year" << endl;
  cin >> yr;
  m->setYear(yr);
  char te[100];
  cout << "Enter the title" << endl;
  cin >> te;
  m->setTitle(te);
  medialist->push_back(m);
  */
  /*
  cout << "Printing media" << endl;
  for (int i = 0; i < medialist->size(); i++) {
    media* m = (*medialist)[i];
    cout << m->getYear() << " " << m->getTitle() << " " << m->getPublisher() << endl;
  }
  */
   
}


//deleting loop
void deleteMedia(vector <media*>* medialist) {
  int index = -1;
  char searchtype[3];
    cout << "Enter 1 if you want to search by title, or 2 if you want to search\
 by year" << endl;
    cin >> searchtype;
    //deletes media based on title
    if (searchtype[0] == '1') {
      cout << "Deleting by title" << endl;
      char inputstr[100];
      cout << "What title are you deleting?" << endl;
      cin >> inputstr;
      videogame* v;
      music* mu;
      movie* mo;
      bool foundt = true;
       while (foundt) {
   index = -1;
   //runs through all media looking for what to delete
  for (int i = 0; i < medialist->size(); i++) {
    media* m = (*medialist)[i];
    //cout << m->getType() << endl;
    if (m->getType() == 1) {
      v = (videogame*)m;
      if (strcmp(inputstr, v->getTitle()) == 0) {
        index = i;
        break;
      }
    }

    if (m->getType() == 2) {
      mu = (music*)m;
      if (strcmp(inputstr, mu->getTitle()) == 0) {
        index = i;
        break;
      }
    }

    if (m->getType() == 3) {
      mo = (movie*)m;
      if (strcmp(inputstr, mo->getTitle())) {
        index = i;
        break;
      }
    }
    //delets
    if (index > -1) {
      foundt = true;
      //delete *medialist[i];
      medialist->erase(medialist->begin()+index);
    }
    else {
      foundt = false;
    }
  }

 }
    }
    //does the same as above, except deletes by year
    else if (searchtype[0] == '2') {
      int input = 0;
      cout << "Deleting by year" << endl;
      cout << "What year are you deleting?" << endl;
      cin >> input;
      videogame* v;
 music* mu;
 movie* mo;
 bool foundy = true;
 while (foundy) {
   index = -1;
  for (int i = 0; i < medialist->size(); i++) {
    media* m = (*medialist)[i];
    //cout << m->getType() << endl;
    if (m->getType() == 1) {
      v = (videogame*)m;
      if (input == v->getYear()) {
	index = i;
	break;
      }
    }

    if (m->getType() == 2) {
      mu = (music*)m;
      if (input == mu->getYear()) {
	index = i;
	break;
      }
    }

    if (m->getType() == 3) {
      mo = (movie*)m;
      if (input == mo->getYear()) {
	index = i;
	break;
      }
    }
    if (index > -1) {
      foundy = true;
      //delete *medialist[i];
      medialist->erase(medialist->begin()+index);
    }
    else {
      foundy = false;
    }
  }

 }

    }
    else {
      cout << "Enter a valid type" << endl;
      cin >> searchtype;

    }
  }

//search loop, similar to delete except prints out matching medias instead of deletes them
void searchMedia(vector <media*>* medialist) {
    char searchtype[3];
    cout << "Enter 1 if you want to search by title, or 2 if you want to search\
 by year" << endl;
    cin >> searchtype;
    if (searchtype[0] == '1') {
      char inputstr[100];
      cout << "Searching by title" << endl;
      cout << "What title are you searching for" << endl;
      cin >> inputstr;
        videogame* v;
 music* mu;
 movie* mo;
  for (int i = 0; i < medialist->size(); i++) {
    media* m = (*medialist)[i];
    //cout << m->getType() << endl;
    if (m->getType() == 1) {
      v = (videogame*)m;
      if (strcmp(inputstr, v->getTitle()) == 0) {
cout << "Videogame: Title: "<< v->getTitle() << " Year: " << v->getYear()\
 << " Publisher: " << v->getPublisher() << " Rating: " << v->getRating() << endl;

      }
    }

    if (m->getType() == 2) {
      mu = (music*)m;
      if (strcmp(inputstr, mu->getTitle()) == 0) {
cout << "Music: Title: " << mu->getTitle() << " Year: " << mu->getYear() \
<< " Artist: " << mu->getArtist() << " Duration: "<< mu->getDuration() << " Publisher: " << mu->getPublisher() << endl;

      }
      //else {
      //        cout << endl;
      //}
    }

    if (m->getType() == 3) {
      mo = (movie*)m;
      if (strcmp(inputstr, mo->getTitle()) == 0) {
cout << "Movie: Title: " << mo->getTitle() << " Year: " << mo->getYear() \
<< " Director: " << mo->getDirector()  << " Duration: " << mo->getDuration() <<
" Rating: " << mo->getRating() << endl;        

      }
      //else {
      //cout << endl;
      //}
    }

  }
    }
    else if (searchtype[0] == '2') {
      int input = 0;
      cout << "Searching by year" << endl;
      cout << "What year are you searching for" << endl;
      cin >> input;
      videogame* v;
 music* mu;
 movie* mo;
  for (int i = 0; i < medialist->size(); i++) {
    media* m = (*medialist)[i];
    //cout << m->getType() << endl;
    if (m->getType() == 1) {
      v = (videogame*)m;
      if (input == v->getYear()) {
      cout << "Videogame: Title: "<< v->getTitle() << " Year: " << v->getYear()<< " Publisher: " << v->getPublisher() << " Rating: " << v->getRating() << endl;
      }
    }
    
    if (m->getType() == 2) {
      mu = (music*)m;
      if (input == mu->getYear()) {
cout << "Music: Title: " << mu->getTitle() << " Year: " << mu->getYear() \
<< " Artist: " << mu->getArtist() << " Duration: "<< mu->getDuration() << " Publisher: " << mu->getPublisher() << endl;
      }
      //else {
      //	cout << endl;
      //}
    }
    
    if (m->getType() == 3) {
      mo = (movie*)m;
      if (input == mo->getYear()) {
cout << "Movie: Title: " << mo->getTitle() << " Year: " << mo->getYear() \
<< " Director: " << mo->getDirector()  << " Duration: " << mo->getDuration() <<
" Rating: " << mo->getRating() << endl;
      }
      //else {
      //cout << endl;
      //}
    }

  }

    }
    else {
      cout << "Enter a valid type" << endl;
      cin >> searchtype;

    }
  }

//prints out all stored media (not required for project, was just helpful to have)
void printMedia(vector <media*>* medialist) {
 cout << "Printing media" << endl;
 videogame* v;
 music* mu;
 movie* mo;
  for (int i = 0; i < medialist->size(); i++) {
    media* m = (*medialist)[i];
    //cout << m->getType() << endl;
    if (m->getType() == 1) {
      v = (videogame*)m;
      cout << "Videogame: Title: "<< v->getTitle() << " Year: " << v->getYear() << " Publisher: " << v->getPublisher() << " Rating: " << v->getRating() << endl;
    }
    if (m->getType() == 2) {
      mu = (music*)m;
      cout << "Music: Title: " << mu->getTitle() << " Year: " << mu->getYear() << " Artist: " << mu->getArtist() << " Duration: "<< mu->getDuration() << " Publisher: " << mu->getPublisher() << endl;
    }
    if (m->getType() == 3) {
      mo = (movie*)m;
      cout << "Movie: Title: " << mo->getTitle() << " Year: " << mo->getYear() << " Director: " << mo->getDirector()  << " Duration: " << mo->getDuration() <<" Rating: " << mo->getRating() << endl;
    }

  }
}
//to see what user wants to do
void getResponse(char response[10]) {
  bool running = true;
  cout << "Enter ADD, SEARCH, PRINT, DELETE, or QUIT" << endl;
  cin >> response;
  running == true;
}

//main function, runs what user wants to do and calls other functions
int main() {
  vector <media*>* medialist = new vector<media*>();
char response[10];
 bool running = true;
  getResponse(response);
  while (running == true) {
 if (response[0] == 'A'&& response[1] == 'D' && response[2] == 'D') {
   cout << "Running add loop" << endl;
  addMedia(medialist);
   getResponse(response);
 }
 else if (response[0] == 'S' && response[1] == 'E' && response[2] == 'A' && response[3] == 'R' && response[4] == 'C' && response[5] == 'H') {
   cout << "Running search loop" << endl;
   searchMedia(medialist);
   getResponse(response);
 }
 else if (response[0] == 'D' && response[1] == 'E' && response[2] == 'L' && response[3] == 'E' && response[4] == 'T' && response[5] == 'E') {
   cout << "Running delete loop" << endl;
   deleteMedia(medialist);
   getResponse(response);
 }
 else if (response[0] == 'P' && response[1] == 'R' && response[2] == 'I' && response[3] =='N' && response[4] == 'T') {
   cout << "Running print loop" << endl;
   printMedia(medialist);
   getResponse(response);
 }
   else if (response[0] == 'Q' && response[1] == 'U' && response[2] == 'I' && response[3] == 'T') {
     //quits
     cout << "Quitting" << endl;
     return 0;
   }
   else {
     cout << "Enter a valid response" << endl;
     getResponse(response);
   }
  }
}
