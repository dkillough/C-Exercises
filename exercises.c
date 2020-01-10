/*
   exercises.c program
   author: @dkillough
   sections based off of section tutorials from learn-c.org (copyright n.d.)
 */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BOOL char
#define FALSE 0
#define TRUE 1

int one(), two(), three(), four(), five(), six(), seven(), eight(), nine();

int main() {
  one();
  two();
  three();
  four();
  // five();
  // six();
  seven();
  eight();
  nine("hello");
  return 0;
}

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
/* Write a very convoluted way of writing out a meme */
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
  int index;
  char *pointer;
  pointer = input;
  printf("Section 9\n");
  for (index = 0; index < strlen(input); index++) {
    printf("%c", pointer[index]);
  }
  return 0;
}
