// Alan Turing
// CPSC 120-XX
// Lab-01, prob-01
// 2020-01-29
// alan.turing@important.cs
//
// Demomstrating arithmetic with integers
//

// Your computer scientist of the day is Alan Turing
// https://en.wikipedia.org/wiki/Alan_Turing
// He is the founder of theoretical computer science and inventor of
// the Turing machine, Turing test, Turing-completeness and many other
// significant contributions. He was instrumental in the cryptanalysis
// of the Engima ciphering system used by the Nazi Germany. This
// effort was adapted for the film "Imitation Game".

#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{

int x;
int y;

  cout << "Please enter the first integer: ";
cin >> x;

  cout << "Please enter the second integer: ";
cin >> y;

int sum = x + y;
cout << "The sum is " << sum << "\n";

int difference = x - y;
cout << "The difference is " << difference << "\n";

  int product = x * y;
  cout << "The product is " << difference << "\n";

  int quotient = x / y;
  cout << "The quotient is " << quotient << "\n";




  return 0;
}
