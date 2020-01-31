// Scott Grew
// CPSC 120-05
// Lab-01, prob-02
// 2020-01-30
// scottgrew949@csu.fullerton.edu
//
// Simple guessing game

#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{

int secret_number = 42;

int guess;

cout << "Guess a number: ";

cin >> guess;

cout << "You guessed " << guess << " , Nice Try!" <<"\n";

if (secret_number == guess) {
  cout << "Come get a stamp champ!" <<"\n";
}
else if (secret_number > guess){
  cout << "Sucks to suck..." <<"\n";
}

else if (secret_number < guess){
  cout << "Come on, try again..." <<"\n";
}

  return 0;
}
