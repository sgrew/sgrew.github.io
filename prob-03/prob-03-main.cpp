// Scott Grew
// CPSC 120-05
// Lab-01, prob-03
// 2020-02-04
// scottgrew949@csu.fullerton.edu
//

#include <iostream>
using namespace std;


int main(int argc, char* argv[])
{

int weight_in_pounds = 42;

int height_in_inches;

int age_in_years;

int sex;

int bmr_adjustment;

int bmr_estimate;

cout << "Enter weight in pounds:\n";
cin >> weight_in_pounds;

cout << "Enter height in inches:\n";
cin >> height_in_inches;

cout << "Enter age in years:\n";
cin >> age_in_years;


cout << "If female enter 1, if male enter 2:\n";
cin >> sex;

if (sex==1){
  bmr_adjustment = -161;
}

if (sex==2){
  bmr_adjustment = 5;
}

  float bmr;
  bmr = (10.0 * (weight_in_pounds / 2.205)) +
        (6.25 * (height_in_inches * 2.54)) -
        (5.0 * age_in_years) +
        bmr_adjustment; {
          
  cout << bmr << " kcal\n";

  if (sex!=1 && sex!=2){
     cout << "Hmmm, what are you then?\n";
  }

  cout << "Check the link below for more information:\n";
  cout << "https://www.calculator.net/bmr-calculator.html\n";
}

  return 0;
}
