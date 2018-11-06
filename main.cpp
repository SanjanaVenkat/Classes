#include <iostream>
#include <cstring>
#include "videogames.h"
#include "movies.h"
#include "music.h"
#include "parent.h"

using namespace std;


void getResponse(char response[10]) {
  bool running = true;
  cout << "Enter ADD, SEARCH, DELETE, or QUIT" << endl;
  cin >> response;
  running == true;
}


int main() {
char response[10];
 bool running = true;
  getResponse(response);
  while (running == true) {
 if (response[0] == 'A'&& response[1] == 'D' && response[2] == 'D') {
   cout << "Running add loop" << endl;
  addMedia();
   getResponse(response);
 }
 else if (response[0] == 'S' && response[1] == 'E' && response[2] == 'A' && response[3] == 'R' && response[4] == 'C' && response[5] == 'H') {
   cout << "Running search loop" << endl;
   searchMedia();
   getResponse(response);
 }
 else if (response[0] == 'D' && response[1] == 'E' && response[2] == 'L' && response[3] == 'E' && response[4] == 'T' && response[5] == 'E') {
   cout << "Running delete loop" << endl;
  getResponse(response);
 }
   else if (response[0] == 'Q' && response[1] == 'U' && response[2] == 'I' && response[3] == 'T') {
     cout << "Quitting" << endl;
     return 0;
   }
   else {
     cout << "Enter a valid response" << endl;
     getResponse(response);
   }
  }
}
