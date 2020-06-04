/*
   exercises.c program
   author: @dkillough
   cs.utexas.edu/~dekilo
   supplementary practice material for use in conjunction with learn-c.org (copyright n.d.)

   please note that the only reason why helper functions work underneath their respective numbers is due to their declaration in Exercises.h
 */

#include "Exercises.h"
#include "solns.c"

// 1. Hello World
/* write a simple hello world statement in c using printf. It's basically the same as System.out.println */
void one() {
  printf("Hello, world!\n\n");
}

// 2. Vars/types
/* write a statement to add two ints together, then print them out */
void two(int a, int b) {
  int sum;
  /* your code here */
  (checkTwo(a, b) == sum) ? printf("#2 passed\n\n") : printf("** #2 FAILED **\n\n");
}

// 3. Arrays: SEE REFERENCE #2
/* init an array with 10 elements, then fill it with values identical to their index.
 * Print the array.
 */
void three() {
  int arr[10], i;
  /* your code here */
  checkThree(arr) ? printf("#3 passed\n") : printf("** #3 FAILED **\n\n");
}

// 4. Multidimensional Arrays
/* initialize 2 2D arrays of THE SAME SIZE and fill them with random elements.
 * Loop through each (nested for loops are fine) and compare values at each index.
 * Print the number of times the values at each index are the same */
void four() {
  int size1;
  int size2;
  int arr1[size1][size2];
  int arr2[size1][size2];
  int i, j, runningTotal = 0;
  /* your code here */
  (checkFour(arr1, arr2, size1, size2) == runningTotal) ? printf("#4 passed\n") : printf("** #4 FAILED **\n\n");
}

// 5. Conditions
/* Complete a number guessing game iteratively:
 * Pick a number, either using rand() or hard coding it in
 * Ask the user to guess a number
 * If they guess incorrectly, tell them to try again
 * If they guessed too high, tell them to guess lower
 * If they guessed too low, tell them to guess higher
 * Repeat until they guess the number
*/
void five() {
  // exampleFive(); // example solution
}

// 6. Strings
/* write a method that asks for a word as input, then prints it back out letter by letter. Set a character limit for memory's sake. */
void six() {
  // exampleSix();
}

// 7. For loops
/* initialize an array that contains the first 8 powers of 2 (2, 4, 8 ... 256) using one for loop */
void seven() {
  int arr[8];
  int i;
  arr[0] = 2;

  /* for loop goes here */

  printf("{ "); // print statements to check your answer
  for (i = 0; i < 8; i++) {
    printf("%i ", arr[i]);
  }
  printf("}\n\n");
  checkSeven(arr) ? printf("#7 passed\n") : printf("** #7 FAILED **\n\n");
}

// eight, nine, and ten are in the solutions file because admittedly they aren't very good examples and at this point I doubt you need a tutorial on how to use a while loop. 
// Feel free to look at them anyways to understand how they work 



/* ************************ *
 * ***** " advanced " ***** *
 * *(actually new c stuff)* *
 * ************************ */


// 11. Pointers
/* Declare a variable and reference a pointer to it. Print both it and its
 * deferenced value; they should be identical */
void eleven() {
  /* your code here */
  exampleEleven(); // example solution, if you want it
}

// 12. Structures: SEE REFERENCE #4
/* Create a structure called "link" that contains a char* with a link to a youtube video as well as some metadata of your choice (video title, author, file format, date uploaded, etc.). Then print the data */
void twelve() {
  typedef struct {
    /* your code here */
  } link;
  /* more code here */
  exampleTwelve(); // example solution, if you want it
}

// 13. Functions by reference
/* Typically, you'd pass a value into a function and return a value back
 * Passing a function by reference lets you pass an address to the item's memory and directly change the element.
 * 
 * Structure "worth" has been created in exercises.h
 * It has properties price and value, which are both values
 * 
 * Initialize a new "worth" object and set the price and value properties to a given value
 */
void thirteen() {
  /* your code here */
  exampleThirteen(); // example solution
}

void helpThirteen(worth* product) {
  /* modify the product's properties here
   * use arrow notation (`product->[prop] [modifications]`) for legibility */
}

// 14. Dynamic Allocation
/* this is literally just declaring a new struct but with a value of memory dependent on the size of the element. 
 * important for some labs later in the semester (but the labs also rotate every semester).
 * YOU MUST FREE IT WHEN YOU'RE DONE or you will cause a memory leak.
 * 
 * Declare a new "worth" object using dynamic allocation with the sizeof(worth).
 * Set price and value variables at some value, then print them all out. 
*/
void fourteen() {
  /* your code here */
  exampleFourteen(); // example solution
}

// 15. Arrays and Pointers
/* Declare a new char array using the malloc([length] * sizeof(char)) syntax
 * Fill it with characters one at a time using a for loop and pointer arithmetic (SEE: Reference #3 and example 20) 
 * REMEMBER TO FREE THE MEMORY WHEN YOU'RE DONE USING IT
*/
void fifteen() {
  /* your code here */
  exampleFifteen(); // example solution
}

// 16. Recursion
/* Recursion in C is identical to recursion in Java and won't really be covered here.
 *
 * Task: cause a segfault using recursion
*/

void sixteen() {
  /* your code here */
  exampleSixteen(); // ... it's not very difficult
}


// 17. LinkedLists
/* Feel free to look at this page on your own, but Young never went over it in 429. */

// 18. Binary Trees
/* Binary trees were never covered except on one or two homework questions later in the semester, one of which was extra credit.
 * If you want to try them for yourself, here are the leetcode links:
 * https://leetcode.com/problems/maximum-depth-of-binary-tree/ 
 * https://leetcode.com/problems/univalued-binary-tree/ 
*/


// 19. Unions

/* Create a new union with two data types, one that holds 8-byte numeric quantities and one that holds a character array of size [8 byte numeric quantity]
 * set the numeric quantity with some value, then print out the character array
 * 
 * SEE: Reference #8 for a small list of data types
*/

void nineteen() {
  /* your code here */
  exampleNineteen(); // example solution
}

// 20. Pointer arithmetics: SEE REFERENCE #3 (again)
/* Spell something using pointer manipulation and printf statements. Be wary of off-by-one errors. */
void twenty() {
  char* alphabet = "abcdefghijklmnopqrstuvwxyz";
  /* your code here */
  exampleTwenty(alphabet); // example solution
}

// 21. Function pointers
/* You don't need to know this for 429 either, but it gives you good experience with how pointers actually work.
 * Print something using a function pointer to a helper method.
 * The function twentyOne() should declare a new function pointer, sync it with the helper method's address, and call the function.
 * The helper method should only have a print statement in it.
 * 
 * Declaration Syntax: [pointer of function's return type] (pointer to name)(argument type(s)) 
 * 
*/
void twentyOne() {
  /* your code here */
  exampleTwentyOne();
}

int helpTwentyOne(long long input) {
  /* print statement here */
}

// 22. Bitmasks 
/* VERY IMPORTANT FOR THE FIRST FEW WEEKS AT LEAST; See reference #6
 * Declare two ints and fill them with some value (doesn't matter what)
 * Create four printf statements with:
 * 1. The bitwise AND of the two ints (&)
 * 2. The bitwise OR of the two ints (|)
 * 3. The bitwise XOR of the two ints (^)
 * 4. The bitwise NOT of *one* of the ints (!)
*/
void twentyTwo() {
  /* your code here */
  exampleTwentyTwo();
}


int main() {
  int picked;
  printf("Which test case would you like to test? Select an exercise #1 through 22\n");
  scanf("%d", &picked);
  switch (picked) {
    case 1:
      one();
      break;
    case 2:
      printf("Enter the first num to add: ");
      int a, b;
      scanf("%d", &a);
      printf("And the second?: ");
      scanf("%d", &b);
      two(a, b);
      break;
    case 3:
      three();
      break;
    case 4:
      four();
      break;
    case 5:
      five();
      break;
    case 6:
      six();
      break;
    case 7:
      seven();
      break;
    case 8:
      eight();
      break;
    case 9:
      nine("Hello");
      break;
    case 10:
      ten();
      break;
    case 11:
      eleven();
      break;
    case 12:
      twelve();
      break;
    case 13:
      thirteen();
      break;
    case 14:
      fourteen();
      break;
    case 15: 
      fifteen();
      break;
    case 16:
      sixteen();
      break;
    case 17:
      printf("See code comments for information on LinkedLists this semester");
      break;
    case 18:
      printf("See code comments for information on Binary Trees this semester");
      break;
    case 19:
      nineteen();
      break;
    case 20:
      twenty();
      break;
    case 21:
      twentyone();
      break;
    case 22:
      twentytwo();
      break;
  }
  return 0; // indicates success
}
