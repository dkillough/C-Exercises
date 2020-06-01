/*
   exercises.c program
   author: @dkillough
   cs.utexas.edu/~dekilo
   supplementary practice material for use in conjunction with learn-c.org (copyright n.d.)
  >> for incoming CS 429 students @ UT Austin <<

   ... oh, and ignore the compile warnings @ checkFour for now :grimacing:
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

// 3. Arrays
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
 * Pick a number
    if they haven't guessed the number, tell them to try again
    if they guessed too high, tell them to guess lower
    if they guessed too low, tell them to guess higher
   */
void five() {
  exampleFive();
}

// 6. Strings
/* write a method that asks for a word as input, then prints it back out letter by letter. set a character limit for memory's sake. */
void six() {
  char input[10];
  int i = 0;
  printf("What'cha got?");
  scanf("%s", input);
  while(input[i] != '\0' && i < 10) {
    printf("%c\n", *(input + i));
    i++;
  }
}

// 7. For loops
/* initialize an array that contains the first 8 powers of 2 (2, 4, 8, 16, 32...) using one for loop */
void seven() {
  int arr[8];
  int i;
  arr[0] = 2;
  for (i = 1; i < 8; i++) {
    arr[i] = arr[i - 1] * arr[0];
  }
  printf("{ ");
  for (i = 0; i < 8; i++) {
    printf("%i ", arr[i]);
  }
  printf("}\n\n");
  checkSeven(arr) ? printf("#7 passed\n") : printf("** #7 FAILED **\n\n");
}

// 8. While loops
/* Write a very convoluted way of printing out a meme */
// TODO: Rewrite into an actual problem
void eight() {
  int index = -1;
  while (index < 10) {
    index++;
    if (index < 9) {
      continue;
    } else if (index == 10) {
      break;
    }
    printf("> club penguin is kil\n");
  }
  printf("> no\n\n");
}

// 9. Functions
/* write the nine() function passing in a string as an argument. Set it equal to
 * a pointer, then print the string letter by letter using the pointer. */
void nine(char input[]) {
  int i;
  char *pointer;
  pointer = input;
  for (i = 0; i < strlen(input); i++) {
    printf("%c", pointer[i]);
  }
  printf("\n\n");
}

// 10. Static
/* multiply the values in a 2D array by a given quantity, then sum them all
 * together. Print both the array after multiplication as well as the sum of all
 * elements. */
void ten() {
  int array[][3] = {{5, 10, 15}, {64, 83, 25}, {4, 84, 2568}, {753, 57, 75}};
  int quantity = 15;
  int r, c;
  for (r = 0; r < 4; r++) {
    printf("| ");
    for (c = 0; c < 3; c++) {
      array[r][c] *= quantity;
      printf("%i ", array[r][c]);
    }
    printf("|\n");
  }
  for (r = 0; r < 4; r++) {
    for (c = 0; c < 3; c++) {
      helpTen(array[r][c]);
    }
  }
  printf("Sum: %d\n\n", helpTen(0));
}
/* helper method for 10 to demo static sum variable, which is objectively slower
 than just writing the sum statement code in the for loop. Nice. */
int helpTen(int input) {
  static int sum;
  sum += input;
  return sum;
}

/* ************************ *
 * ***** " advanced " ***** *
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

// 12. Structures
/* Create a structure called "link" that prints a link to a YouTube video along with some metadata. */
void twelve() {
  typedef struct {
    /* your code here */
  } link;
  /* more code here */
  exampleTwelve();
}

typedef struct {
  char *name;
  char *desc;
  int size_x;
  int size_y;
  char *format;
} image;

// 13. Functions by reference
void thirteen() {
  image landscape;
  landscape.name = "Landscape";
  landscape.desc = "Some trees on a hill overlooking water";
  landscape.size_x = 2560;
  landscape.size_y = 1440;
  landscape.format = ".png";
  int perce;
  printf("The current image is %s%s of size %ix%i. To what "
         "percentage would you like to resize it?\n",
         landscape.name, landscape.format, landscape.size_x, landscape.size_y);
  scanf("%d\n", &perce);
  landscape.size_x *= (perce / 100);
  //helpThirteen(&landscape, perce);
  printf("%s's new size is %ix%i.\n\n", landscape.name, landscape.size_x,
         landscape.size_y);
}

void helpThirteen(image *i, int percentage) {
  i->size_x *= (percentage / 100);
  i->size_y *= (percentage / 100);
}

// 14. Dynamic Allocation
void fourteen() {
  image *portrait = (image *)(malloc(sizeof(image)));
  portrait->name = "Sam";
  portrait->desc = "a photo of sam";
  printf("%s: %s\n\n", portrait->name, portrait->desc);
  free(portrait);
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
      /* getting an "abort" message after running this is fine oop */
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
  }
  return 0;
}
