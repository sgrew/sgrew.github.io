// Scott Grew
// CPSC 120-05
// Lab-01, prob-03
// 2020-01-29
// scottgrew949@csu.fullerton.edu
//

#include <iostream>
using namespace std;


int main(int argc, char* argv[])
{
  // TODO: Declare a variable named weight_in_pounds
  //       hardcode the value to 42.
  //       Remember the official style guide is online at
  //       http://bit.ly/37Dl4UJ
int weight_in_pounds = 42;
  // TODO: Declare a variable named height_in_inches
int height_in_inches;
  // TODO: Declare a variable named age_in_years
int age_in_years;
  // TODO: Declare a variable named sex
  //       Remember we're going to ask for a number in the program
  //       and not a string.
int sex;
  // TODO: Declare a variable named bmr_adjustment
int bmr_adjustment;
  // TODO: Declare a variable bmr_estimate;
  //       The units of bmr_estimate are kcal or kilocalories.
  //       kilocalorie is the scientificly accurate name for
  //       what we refer to as a calorie. One kcal is the amount
  //       of energy needed to raise 1 kilogram (2.2 lbs) of water
  //       by 1ºC (about 2ºF). A slice of pizza is about 300 kcal.
int bmr_estimate;

  // TODO: Prompt the user for their weight in pounds
cout << "Enter weight in pounds\n";
cin >> weight_in_pounds;
  // TODO: Prompt the user for their height in inches
cout << "Enter height in inhes\n";
cin >> height_in_inches;
// TODO: Prompt the user for their age in years
cout << "Enter age in years\n";
cin >> age_in_years;
  // TODO: Prompt the user for their sex; ask the participant to
  //       enter 1 for female and 2 for male.
cout << "If female enter 1, if male enter 2\n";
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
        bmr_adjustment;
  cout << bmr << "kcal\n";

  return 0;
}
