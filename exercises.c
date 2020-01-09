/*
   exercises.c program
   author: @dkillough
   sections based off of section tutorials from learn-c.org (copyright n.d.)

   //TODO:
   1. Finish remaining sections
   2. Replace magic numbers with #definitions
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BOOL char
#define FALSE 0
#define TRUE 1

int main() {

  // // 1. Hello World
  // /* write a simple hello world statement in c */
  //
  // printf("Section 1\nHello, world!");

  // // 2. Vars/types
  // /* write a statement to add the following values together, then print them
  // out */
  // int varI = 6;
  // float varF = -561.99;
  // double varD = 12.1;
  // int var4 = 429;
  //
  // float theSum = varI + varD + varF + var4;
  // printf("Section 2\nLet's add 4 nums: %f\n", theSum);

  // // 3. Arrays
  // /* init an array with 10 elements, then fill it with alternating values
  // 90 and 100. Then print the average.
  // Don't forget to additionally initialize index and runningTotal variables.
  // */
  //
  // int array[10];
  // int index, runningTotal = 0;
  // for (index = 0; index < 10; index++) {
  //   if (index % 2 == 0) {
  //     array[index] = 100;
  //   } else {
  //     array[index] = 90;
  //   }
  // }
  // for (index = 0; index < 10; index++) {
  //   runningTotal += array[index];
  // }
  // printf("Section 3\nArray average: %i\n", runningTotal / 10);

  // // 4. Multidimensional Arrays
  // // /* initialize 2 2D arrays. Loop through each and compare values at each
  // // index. Print the number of times the values at each index are the same
  // */
  //
  // int array2D[2][4] = {{0, 1, 2, 3}, {4, 5, 6, 7}};
  // int array2D2[2][4] = {{0, 4, 7, 1}, {1, 4, 6, 9}};
  // int i, j, runningTotal = 0;
  // for (i = 0; i < 2; i++) {
  //   for (j = 0; j < 4; j++) {
  //     runningTotal += (array2D[i][j] == array2D2[i][j]);
  //   }
  // }
  // printf("Section 4\nCount equalities: %i\n", runningTotal);

  // // 5. Conditions
  // /* complete a number guessing game with the logic to tell the player
  // whether to go higher or lower. */
  // int guessed = FALSE;
  // int numToGuess = rand() % 100;
  // int numUserGuessed;
  //
  // while (guessed == FALSE) {
  //   printf("Enter a number: ");
  //   scanf("%d", &numUserGuessed);
  //   printf("You guessed: %i\n", numUserGuessed);
  //
  //   if (numUserGuessed == numToGuess) {
  //     guessed = TRUE;
  //   } else if (numUserGuessed < numToGuess) {
  //     printf("Guess higher.\n");
  //   } else {
  //     printf("Guess lower.\n");
  //   }
  //
  // }
  // printf("Section 5\nThe number was guessed: %i\n", numToGuess);

  // // 6. Strings
  // /* make a password guesser based on set password and an input string of a maximum of 20 characters */
  // char *setPassword = "password";
  // char input[20];
  // int guessed = FALSE;
  //
  // while (guessed == FALSE) {
  //   printf("What's the password? Max 19 characters: ");
  //   scanf("%s", input);
  //   if (strncmp(setPassword, input, 20) == 0) {
  //     guessed = TRUE;
  //   } else {
  //     printf("Incorrect password. Please try again\n");
  //   }
  // }
  // printf("Section 6\nPassword Accepted\n");

  return 0;
}
