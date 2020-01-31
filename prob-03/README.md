## Instructions
In this lab, you will be creating a program that estimates a subject's [basal metabolic rate](https://en.wikipedia.org/wiki/Basal_metabolic_rate) using the Mifflin St Jeor Equation. The program prompt's the subject to enter his or her weight in pounds, height in inches, age in years, and his or her sex. From there, a calculation is made and the estimate is reported back to the subject.

You will be given the following starter code. Each line that has a TODO ("to do") - you must do something there. This is to help you get started. As the semester goes on there will be less and less prompting and you are expected to exercise independence and creativity in working on these exercises.

At the top of every file is a header. You shall edit the header and replace it with your name, your class and section, the date you started the exercise, and your email address. As a bonus, the start of each lab has information about an important figure in the field of computer science. You're expected to read the linked Wikipedia page as part of your lab exercise.

```
// Bui Tuong Phong
// CPSC 120-XX
// Lab-01, prob-01
// 2020-01-29
// bui.tuong.phong@important.cs
//
// Estimating your basal metabolic rate using the
// Mifflin St Jeor Equation.
// See https://en.wikipedia.org/wiki/Basal_metabolic_rate 
//

// Your computer scientist of the day is Bui Tuong Phong
// https://en.wikipedia.org/wiki/Bui_Tuong_Phong
// Phong was the inventor of the Phong reflection model and the
// Phong shading interpolation method. He made foundational
// contributions to computer graphics.

#include <iostream>
using namespace std;


int main(int argc, char* argv[])
{
  // TODO: Declare a variable named weight_in_pounds
  //       hardcode the value to 42.
  //       Remember the official style guide is online at
  //       http://bit.ly/37Dl4UJ

  // TODO: Declare a variable named height_in_inches

  // TODO: Declare a variable named age_in_years

  // TODO: Declare a variable named sex
  //       Remember we're going to ask for a number in the program
  //       and not a string.

  // TODO: Declare a variable named bmr_adjustment

  // TODO: Declare a variable bmr_estimate;
  //       The units of bmr_estimate are kcal or kilocalories.
  //       kilocalorie is the scientificly accurate name for 
  //       what we refer to as a calorie. One kcal is the amount
  //       of energy needed to raise 1 kilogram (2.2 lbs) of water
  //       by 1ºC (about 2ºF). A slice of pizza is about 300 kcal.



  // TODO: Prompt the user for their weight in pounds

  // TODO: Prompt the user for their height in inches

  // TODO: Prompt the user for their age in years

  // TODO: Prompt the user for their sex; ask the participant to
  //       enter 1 for female and 2 for male.

  // TODO: If sex is equal to 1 then set bmr_adjustment to -161;
  //       else set bmr_adjustment to 5.



  // TODO: Calculate the participant's BMR.
  /*
  bmr = (10.0 * (weight_in_pounds / 2.205)) +
        (6.25 * (height_in_inches * 2.54)) -
        (5.0 * age_in_years) +
        bmr_adjustment;
  */
  
  // TODO: Print the participant's BMR with the units and a link for
  //       further information.

  return 0;
}
```

The Mifflin St Jeor Equation is included in the program. You can uncomment the lines on which the equation is given and adapt the code as you see fit.

### Tips

#### Style
You must adhere to the [CPSC 120 Style Guide](https://docs.google.com/document/d/1uZtGnbQk7ktXpfruUn7pDVLMWGakIaXPJDJBEUWvZ3c/edit). It is important that what we write is easy to read and well organized. When in doubt, ask your instructor or ILA for assistance.

#### Comments
Whenever you want to write a message to yourself, you can write a comment. A comment is something that starts with the `//` characters (double forward slash or slash-slash). The compiler will ignore everything after the `//` characters.

A multiline comment can be done by chaining many `//` on multiple lines. An alternative is to wrap your comment in `/*` (slash star) and `*/` (star slash).

```
// This is a single line comment. Always indent your comments with your code.
// This is a second line that is commented.
/* This is
 * a multiline
 * comment. It is typical to start each line with a * to make it
 * easy to see that it is a multiline comment.
 * You end the comment with a star slash on it's own line.
 */
```

#### Declaring Variables
Variables are useful for referencing data that might get used in multiple places, and can be assigned or altered as needed. But before they can be used, they first need to be declared so the compiler knows what your code is talking about.
```
int month;      // Declares a variable called month and doesn't initialize it.
                // The value is undefined until you assign a value.
                // The value is softcoded.
int day = 4;    // Declares a variable called day and initializes it to 4.
                // The value is hardcoded.
month = 9;      // Assigns 9 to month using the = operator.
                // The value of month was undefined and now it is defined.
```

#### `cout`
The general format for `cout` will generally look something like `cout << stuff;` where `stuff` is what you actually want to print. For example,
```
cout << 4;

cout << "Hello, world!\n";
```
Remember the semicolon `;` at the end! If you'd like to print multiple things at once in order, separate them using `<<` in between. For example,
```
cout << "Hi " << "my name" << " " << "is" << " Jeff!" << endl;
```

When working with `cout` the name of the `<<` operator is the "put-to", "stream insertion", or "insertion" operator. Sometimes people will refer to it as the "double angle brackets" or "double less than".

`cout` supports printing all the built-in types, regardless if it's a string or a number. For example,
```
cout << "The sum of 3 and 4 is " << 7 << endl;
```

The `endl` and `"\n"` are needed to move the cursor to the next line. If you forget to include them then the output to your console will be on one single line.

#### cin
The general format for cin will usually look something like `cin >> stuff;` where `stuff` needs to be declared beforehand. Calling cin on it would then assign whatever the user types something when prompted and presses enter when they're done. For example,
```
int salary_you_want_for_your_job_offer;    // Must declare the variable first so when you cin later it knows what you are talking about.
cin >> salary_you_want_for_your_job_offer; // This line won't work if the line above isn't there at some point before.
```
Note the use of `>>` for `cin` vs `<<` for `cout`. The `>>` operator is the "get-from", "stream extraction", or "extraction" operator. Sometimes people will refer to it as "double right angle bracket" or double greater than".

## Testing Your Code
Computers only ever do exaxtly what they are told, exactly the way they are told it, and never anything else. Testing is an important process to writing a program. You need to test for the program to behave correctly and test that the program behaves incorrectly in a predictable way.

As programmers we have to remember that there are a lot of ways that we can write the wrong program and only one to a few ways to write the correct program. We have to be aware of [cognitive biases](https://en.wikipedia.org/wiki/List_of_cognitive_biases) that we may exercise that lead us to believe we have correctly completed our program. That belief may be incorrect and our software may have errors. [Errors in software](https://www.wired.com/2005/11/historys-worst-software-bugs/) may lead to loss of [life](https://www.nytimes.com/2019/03/14/business/boeing-737-software-update.html), [property](https://en.wikipedia.org/wiki/Mariner_1), [reputation](https://en.wikipedia.org/wiki/Pentium_FDIV_bug), or [all of the above](https://en.wikipedia.org/wiki/2009%E2%80%9311_Toyota_vehicle_recalls).

### Test strategy
Computers only ever do exaxtly what they are told, exactly the way they are told it, and never anything else. Testing is an important process to writing a program. You need to test for the program to behave correctly and test that the program behaves incorrectly in a predictable way.

As programmers we have to remember that there are a lot of ways that we can write the wrong program and only one to a few ways to write the correct program. We have to be aware of [cognitive biases](https://en.wikipedia.org/wiki/List_of_cognitive_biases) that we may exercise that lead us to believe we have correctly completed our program. That belief may be incorrect and our software may have errors. [Errors in software](https://www.wired.com/2005/11/historys-worst-software-bugs/) may lead to loss of [life](https://www.nytimes.com/2019/03/14/business/boeing-737-software-update.html), [property](https://en.wikipedia.org/wiki/Mariner_1), [reputation](https://en.wikipedia.org/wiki/Pentium_FDIV_bug), or [all of the above](https://en.wikipedia.org/wiki/2009%E2%80%9311_Toyota_vehicle_recalls).

In this program it is very hard to test this program because so much of it counts on the user to enter accurate information. What you can focus on testing is the accuracy of your calculations given accurate information.

A way to improve the behavior of your program is to perform sanity checks before performing your calculations. Ask yourself, what are sane and reasonable values that can be entered.
* What values are reasonable for height or weight? Can you have negative values? What about very large values such as 1,000,000 or very small values such as 2?
* What values are reasonable for age? Can you have a negative age? Are there any upper bounds to age? Is this calculation accurate for babies, toddlers, or children?
* Is there any inter-relationship between the different data the user is inputting? Is it reasonable to calculate the BMR of a very, very tall person who has a weight near zero? Can you come up with a programmatic way to ensure the data values are in proportion to one another to make the BMR report meaningful?
