#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BOOL char
#define FALSE 0
#define TRUE 1

typedef struct { // for ex 13 and 14
  int value;
  int price;
} worth;

// "BASIC"
void one(), two(), three(), four(), five(), six(), seven(), eight(), nine(), ten();
int helpTen(int input);

// "ADVANCED"
void eleven(), twelve(), thirteen(), fourteen(), fifteen(), sixteen(), nineteen(), twenty(), twentyOne(), twentyTwo();
void helpThirteen(worth* good);
int helpTwentyOne(long long longBoi);
