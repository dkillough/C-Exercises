/*
   exercises.c program
   author: @dkillough
   sections based off of those from learn-c.org (copyright n.d.)
 */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BOOL char
#define FALSE 0
#define TRUE 1

// "BASIC"
int one(), two(), three(), four(), five(), six(), seven(), eight(), nine(),
    ten(), helpTen(int input);

// "ADVANCED"
int eleven(), twelve(), thirteen();
void helpThirteen();

int main() {
  one();
  two();
  three();
  four();
  /* NOTE: five and six require scanf() statements using gcc. */
  // five();
  // six();
  seven();
  eight();
  nine("hello");
  ten();
  eleven();
  twelve();
  thirteen();
  return 0;
}

/* *********************** *
 * ****** " basic " ****** *
 * *********************** */
// 1. Hello World
/* write a simple hello world statement in c using printf */
int one() {
  printf("Section 1\nHello, world!\n\n");
  return 0;
}

// 2. Vars/types
/* write a statement to add the following values together, then print them out
 */
int two() {
  int varI = 6;
  float varF = -561.99;
  double varD = 12.1;
  int var4 = 429;
  float theSum = varI + varD + varF + var4;
  printf("Section 2\nLet's add 4 nums: %f\n\n", theSum);
  return 0;
}

// 3. Arrays
/* init an array with 10 elements, then fill it with alternating values
90 and 100. Then print the average.
Don't forget to additionally initialize index and runningTotal variables. */
int three() {
  int array[10];
  int index, runningTotal = 0;
  for (index = 0; index < 10; index++) {
    if (index % 2 == 0) {
      array[index] = 100;
    } else {
      array[index] = 90;
    }
  }
  for (index = 0; index < 10; index++) {
    runningTotal += array[index];
  }
  printf("Section 3\nArray average: %i\n\n", runningTotal / 10);
  return 0;
}

// 4. Multidimensional Arrays
/* initialize 2 2D arrays. Loop through each and compare values at each
index. Print the number of times the values at each index are the same */
int four() {
  int array2D[2][4] = {{0, 1, 2, 3}, {4, 5, 6, 7}};
  int array2D2[2][4] = {{0, 4, 7, 1}, {1, 4, 6, 9}};
  int i, j, runningTotal = 0;
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 4; j++) {
      runningTotal += (array2D[i][j] == array2D2[i][j]);
    }
  }
  printf("Section 4\nCount equalities: %i\n\n", runningTotal);
  return 0;
}

// 5. Conditions
/* complete a number guessing game with the logic to tell the player
whether to go higher or lower. */
int five() {
  int guessed = FALSE;
  int numToGuess = rand() % 100;
  int numUserGuessed;
  printf("Section 5\n");
  while (guessed == FALSE) {
    printf("Enter a number: ");
    scanf("%d", &numUserGuessed);
    printf("You guessed: %i\n", numUserGuessed);
    if (numUserGuessed == numToGuess) {
      guessed = TRUE;
    } else if (numUserGuessed < numToGuess) {
      printf("Guess higher.\n");
    } else {
      printf("Guess lower.\n");
    }
  }
  printf("The number was guessed: %i\n\n", numToGuess);
  return 0;
}

// 6. Strings
/* make a password guesser based on set password and an input string of a
maximum of 20 characters */
int six() {
  char *setPassword = "password";
  char input[20];
  int guessed = FALSE;
  printf("Section 6\n");
  while (guessed == FALSE) {
    printf("What's the password? Max 19 characters: ");
    scanf("%s", input);
    if (strncmp(setPassword, input, 20) == 0) {
      guessed = TRUE;
    } else {
      printf("Incorrect password. Please try again\n");
    }
  }
  printf("Password Accepted\n\n");
  return 0;
}

// 7. For loops
/* create an array of 8 values with exponentially increasing values using a
 * for loop (not the math class) */
int seven() {
  int array[9];
  int index;
  array[0] = 2;
  for (index = 1; index < 8; index++) {
    array[index] = array[index - 1] * array[0];
  }
  printf("Section 7\n{ ");
  for (index = 0; index < 8; index++) {
    printf("%i ", array[index]);
  }
  printf("}\n\n");
  return 0;
}

// 8. While loops
/* Write a very convoluted way of printing out a meme */
// TODO: Rewrite into an actual problem
int eight() {
  int index = -1;
  printf("Section 8\n");
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
  return 0;
}

// 9. Functions
/* write the nine() function passing in a string as an argument. Set it equal to
 * a pointer, then print the string letter by letter using the pointer. */
int nine(char input[]) {
  int i;
  char *pointer;
  pointer = input;
  printf("Section 9\n");
  for (i = 0; i < strlen(input); i++) {
    printf("%c", pointer[i]);
  }
  printf("\n\n");
  return 0;
}

// 10. Static
/* multiply the values in a 2D array by a given quantity, then sum them all
 * together. Print both the array after multiplication as well as the sum of all
 * elements. */
int ten() {
  int array[][3] = {{5, 10, 15}, {64, 83, 25}, {4, 84, 2568}, {753, 57, 75}};
  int quantity = 15;
  int r, c;
  printf("Section 10\n");
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
  return 0;
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
int eleven() {
  int a = rand();
  int *p;
  p = &a;
  printf("Section 11\nValue for the int a: %i\n", a);
  printf("Value for pointer p: %i\n\n", *p);
  return 0;
}

// 12. Structures
/* Create a structure that prints a link to a YouTube video. Include some of its
 * metadata */
int twelve() {
  typedef struct {
    char *url;
    char *date;
    char *uploader;
  } link;

  link rick;
  rick.url = "https://youtu.be/dQw4w9WgXcQ";
  rick.date = "Oct 24, 2009";
  rick.uploader = "Official Rick Astley";
  printf("Section 12\n%s\n\n", rick.url);
  return 0;
}

typedef struct {
  char *name;
  char *desc;
  int size_x;
  int size_y;
  char *format;
} image;

// 13. Functions by reference
int thirteen() {
  image landscape;
  landscape.name = "Landscape";
  landscape.desc = "Some trees on a hill overlooking water";
  landscape.size_x = 2560;
  landscape.size_y = 1440;
  landscape.format = ".png";
  int perce;
  printf("Section 13\nThe current image is %s%s of size %ix%i. To what percentage would you like to resize it?\n", landscape.name, landscape.format, landscape.size_x, landscape.size_y);
  scanf("%i%%\n", &perce);
  helpThirteen(&landscape, perce);
  printf("%s's new size is %ix%i.\n\n", landscape.name, landscape.size_x, landscape.size_y);
  return 0;
}

void helpThirteen(image *i, int percentage) {
  i->size_x *= (percentage / 100);
  i->size_y *= (percentage / 100);
}
