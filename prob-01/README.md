## Instructions
In this lab, you will be creating a program that prompts the user for 2 integers, and prints their sum (addition), difference (subtraction), product (multiplication), and quotient (division).

You will be given the following starter code. Each line that has a TODO ("to do") - you must do something there. This is to help you get started. As the semester goes on there will be less and less prompting and you are expected to exercise independence and creativity in working on these exercises.

At the top of every file is a header. You shall edit the header and replace it with your name, your class and section, the date you started the exercise, and your email address. As a bonus, the start of each lab has information about an important figure in the field of computer science. You're expected to read the linked Wikipedia page as part of your lab exercise.

```
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
  
  // TODO: Declare 2 integers.
  //       Remember the official style guide is online at
  //       http://bit.ly/37Dl4UJ

  // TODO: Prompt the user for the first integer.
  cout << "Please enter the first integer: ";

  // TODO: Prompt the user for the second integer.
  cout << "Please enter the second integer: ";

  // TODO: Print the sum (+) of the two numbers with a message.
  // Remember that "\n" means new line
  cout << "The sum is " << "\n";
  
  // TODO: Print the difference (-) of the two numbers with a message.
  cout << "The difference is " << "\n";

  // TODO: Print the product (*) of the two numbers with a message.
  cout << "The product is " << "\n";
  
  // TODO: Print the quotient (/) of the two numbers with a message.
  // Assume the second number is subtracted from the first.
  cout << "The product is " << "\n";


  // TODO: Remove all the TODO comments!
  
  return 0;
}
```

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
##### Tricky stuff to watch out for
```
dollars = 5;
```
If this is the first mention of `dollars`, this will fail with a compile error, since the compiler doesn't know what `dollars` is. To fix it, use
```
int dollars = 5;
```
Then later in your code, you are free to use `dollars` as you please.


```
int int = 4;
```
This also throws a compile error! `int` is a reserved word to declare an integer, so the second `int` will fail. Instead, call it something else that's not already taken. Most editors like Atom will change color for reserved words. Instead, use something like
```
int my_number = 4;
```

What happens when you divde an integer by another integer? The result is another integer. If I divide 9 by 4, the answer is 2, remainder 1. If I divide 4 by 9, the answer is 0, remainder 4. The division operator will only tell you the quotient and not the remainder. Use floating point numbers if you desire numbers that can represent fractions of while numbers such as 2.4 or 1.78.

Remember that the the types must match on both sides of every binary operator such as `=`, `+`, `-`, `*`, and `/`.

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

##### Reading a word or sentence with spaces
You won't need to worry about that for this lab, but for those of you who are curious
```
string words;
cin >> words;

cout << words;
```
Try this. Did it skip any words?

`cin` stops at what we call whitespace, which is either a space, tab, or new line. If you would like to use `cin` for sentences, there is a `getline` function that will get covered in the future.

#### Arithmetic operators
C++ supports a variety of basic operators for manipulating numbers. For this lab, we are concerned with
* Addition: use `+`
* Subtraction: use `-`
* Multiplication: use `*`

For example,
```
int x = 3 + 4; // Create an integer, call it x, and assign it the value 3 added to 4 (which should be 7).
int y = 5 - 2; // Create an integer, call it y, and assign it the value 5 subtract 2 (which should be 3).
int z = 2 * 6; // Create an integer, call it z, and assign it the value 6 times 2 (which should be 12).
int q = 4 / 2; // Create an integer, call it q, and assign it the value 4 divided by 2 (which should be 2).
int r = 2 / 4; // Create an integer, call it r, and assign it the value 2 divided by 4 (which should be 0).
```

## Testing Your Code
Computers only ever do exaxtly what they are told, exactly the way they are told it, and never anything else. Testing is an important process to writing a program. You need to test for the program to behave correctly and test that the program behaves incorrectly in a predictable way.

As programmers we have to remember that there are a lot of ways that we can write the wrong program and only one to a few ways to write the correct program. We have to be aware of [cognitive biases](https://en.wikipedia.org/wiki/List_of_cognitive_biases) that we may exercise that lead us to believe we have correctly completed our program. That belief may be incorrect and our software may have errors. [Errors in software](https://www.wired.com/2005/11/historys-worst-software-bugs/) may lead to loss of [life](https://www.nytimes.com/2019/03/14/business/boeing-737-software-update.html), [property](https://en.wikipedia.org/wiki/Mariner_1), [reputation](https://en.wikipedia.org/wiki/Pentium_FDIV_bug), or [all of the above](https://en.wikipedia.org/wiki/2009%E2%80%9311_Toyota_vehicle_recalls).

### Test strategy
Start simple, and work your way up. Good tests are specific, cover a broad range of fundamentally different possibilities, can identify issues quickly, easily, and directly, without need for much set up, and can almost be diagnosed by inspection if the code fails to execute the test correctly.

### Cases to try
0s can often lead to interesting behavior, such as always causing a product with it also to be 0
1. (0, 0): Expected sum: 0 difference: 0 product: 0  quotient: 0
1. (0, 1): Expected sum: 1 difference: -1 product: 0 quotient: 0
1. (1, 0): Expected sum: 1 difference: 1 product: 0 quotient: garbage
1. (1, 1): Expected sum: 2 difference: 0 product: 1 quotient: 1

Numbers can be negative
1. (-1, -1): Expected sum: -2 difference: 0 product: 1 quotient: 1
1. (-1, 1): Expected sum: 0 difference: -2 product: -1 quotient: -1
1. (1, -1) Expected sum: 0 difference 2 product: -1 quotient: -1

Other numbers
1. (1, 2): Expected sum: 3 difference -1 product: 2 quotient: 0
1. (2, 1): Expected sum: 3 difference: 1 product: 2 quotient: 2
1. (15, 6): Expected sum: 21 difference: 9 product: 90 quotient: 2

The test cases above are by no means exhaustive with what you can do with an int (hint: there are limitations to how big or small a number can actually get in C++).

