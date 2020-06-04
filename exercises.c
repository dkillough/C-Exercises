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
  int size_x;
  int size_y;
  char *name;
  char *desc;
  char *format;
  } image;

void thirteen() {
//   image landscape;
//   landscape.name = "Landscape";
//   landscape.desc = "Some trees on a hill overlooking water";
//   landscape.size_x = 2560;
//   landscape.size_y = 1440;
//   landscape.format = ".png";
//   int perce;
//   printf("The current image is %s%s of size %ix%i. To what "
//          "percentage would you like to resize it?\n",
//          landscape.name, landscape.format, landscape.size_x, landscape.size_y);
//   scanf("%d\n", &perce);
//   landscape.size_x *= (perce / 100);
//   //helpThirteen(&landscape, perce);
//   printf("%s's new size is %ix%i.\n\n", landscape.name, landscape.size_x,
//          landscape.size_y);
}

// void helpThirteen(image *i, int percentage) {
//   i->size_x *= (percentage / 100);
//   i->size_y *= (percentage / 100);
// }

// 14. Dynamic Allocation
void fourteen() {
  // image *portrait = (image *)(malloc(sizeof(image)));
  // portrait->name = "Sam";
  // portrait->desc = "a photo of sam";
  // printf("%s: %s\n\n", portrait->name, portrait->desc);
  // free(portrait);
}

// 15. Arrays and Pointers
void fifteen() {


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
void seventeen() {


}


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
  //Spell something using pointer manipulation. Be wary of off-by-one errors.
  exampleTwenty(alphabet);
}

// 21. Function pointers
void twentyone() {


}

// 22. Bitmasks 
/* VERY IMPORTANT FOR THE FIRST FEW WEEKS AT LEAST */
void twentytwo() {


}


int main() {
  int picked;
  printf("Which test case would you like to test? Select an exercise #1 through 13\n");
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
      seventeen();
      break;
    case 18:
      printf("See code comments for information on BT's this semester");
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
