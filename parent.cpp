#include <iostream>
#include <cstring>
#include "videogames.h"
#include "movies.h"
#include "music.h"
#include "parent.h"

using namespace std;

void addMedia() {
  char mediatype[3];
  cout << "Enter 1 if you want to add a videogame, 2 if you want to add a movie, or 3 if you want to add music" << endl;
  cin >> mediatype;
  if (mediatype[0] == '1') {
    cout << "Adding a videogame" << endl;
  }
  else if (mediatype[0] == '2') {
    cout << "Adding a movie" << endl;
  }
  else if (mediatype[0] == '3') {
    cout << "Adding music" << endl;
  }
    else {
      cout << "Enter a valid type" << endl;
      cin >> mediatype;
    }
}

  void searchMedia() {
    char searchtype[3];
    cout << "Enter 1 if you want to search by title, or 2 if you want to search by year" << endl;
    cin >> searchtype;
    if (searchtype[0] == '1') {
      cout << "Searching by title" << endl;
    }
    else if (searchtype[0] == '2') {
      cout << "Searching by year" << endl;
    }
    else {
      cout << "Enter a valid type" << endl;
      cin >> searchtype;

    }
  }
