/*
   exercises.c program
   author: @dkillough
   cs.utexas.edu/~dekilo
   supplementary practice material for use in conjunction with learn-c.org (copyright n.d.)

   >> for incoming CS 429 students @ UT Austin <<

   **Note I had Dr. Young. Dr. Chatterjee uses slightly different material.  

   ... oh, and ignore the compile warnings @ checkFour for now !
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
  int a = rand();
  int *p;
  p = &a;
  printf("Value for the int a: %i\n", a);
  printf("Value for pointer p: %i\n\n", *p);
  (a == *p) ? printf("#11 passed\n") : printf("** #11 FAILED **\n\n");
}

// 12. Structures: SEE REFERENCE #4
/* Create a structure called "link" that prints a link to a YouTube video along with some metadata. */
void twelve() {
  typedef struct {
    /* your code here */
  } link;
  /* more code here */
  // exampleTwelve(); // Example if you want it
}

// 13. Functions by reference
typedef struct {
  int value;
  int price;
} tuition;

void covid(tuition* ut) {
  ut->price *= 1.25; //price equals
  ut->value *= 0.99; //value deminishes
}

void thirteen() {
  tuition ut;
  ut.price = 10000;
  ut.value = 10000;
  covid(&ut);
  printf("The price is %d, but the value is %d\n", ut.price, ut.value);
}

// 14. Dynamic Allocation
/* this is literally just declaring a new struct but with a value of memory dependent on the size of the element. 
 * important for some labs later in the semester.
 * YOU MUST FREE IT WHEN YOU'RE DONE.
*/
void fourteen() {
  tuition * ut = (tuition*) malloc(sizeof(tuition));
  ut->price = 10000;
  ut->value = 10000;
  printf("The price is %d, and the value is %d\n", ut->price, ut->value);
  free(ut);
}

// 15. Arrays and Pointers
void fifteen() {
  int length = 6;
  char* hi = (char*) malloc(6*sizeof(char));
  int i;
  for(i = 0; i < length; i++) {
    *(hi + i) = 'A';
  }
  printf("%s\n", hi);
  free(hi);
}

// 16. Recursion
/* Recursion in C is identical to recursion in Java and won't really be covered here.
 *
 * Task: cause a segfault using recursion
 */
void sixteen() {
  // exampleSixteen(); // ... it's not very difficult
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

/***** BROKEN ********/

void nineteen() {
  union cpu {
    char* brand;
    char* name;
    int price; 
  };

  union cpu i5;
  i5.brand = "Intel";
  i5.name = "Core i5-9600K";
  i5.price = 196;

  union cpu ryzen5;
  ryzen5.brand = "AMD";
  ryzen5.name = "Ryzen 5 3600";
  ryzen5.price = 167;

  // example
  // using unions you can only access one element per line.
  // get around this by splitting up your statements into multiple lines. Not super efficient but it works.
  printf("The %s ", i5.brand);
  printf("%s CPU costs ", i5.name);
  printf("$%d, while the ", i5.price);
  printf("%s ", ryzen5.brand);
  printf("%s costs ", ryzen5.name);
  printf("$%d", ryzen5.price);

}

// 20. Pointer arithmetics: SEE REFERENCE #3 (again)
void twenty() {
  char* alphabet = "abcdefghijklmnopqrstuvwxyz";
  // Spell something using pointer manipulation. Be wary of off-by-one errors.
  exampleTwenty(alphabet);
}

// 21. Function pointers
/* you don't need to know this for 429 either, but it gives you good experience with how pointers actually work */
int aFunction(long long longBoi) {
  printf("%x\n", longBoi);
}

void twentyone() {
  int* (*p)(long long);
  p = &aFunction;
  printf("");
  (p)(0x5E1B008);
}



// 22. Bitmasks 
/* VERY IMPORTANT FOR THE FIRST FEW WEEKS AT LEAST */
void twentytwo() {
  int a = 0xFFFFFF;
  int b = 0x00FF00;
  printf("%x\n", a&b);
  printf("%x\n", a|b);
  printf("%x\n", a^b);
  printf("%x\n", !b);
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
  return 0;
}
