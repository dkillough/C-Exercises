/* Solutions.c 
 * Author: @dkillough
 * Answer file for exercises.c
 * Go here to verify your solutions. Tell me any issues in C-Exercises/issues
*/

int checkTwo(int a, int b) {
  return a + b;
}

int checkThree(int* inputArr) {
  static int testArr[10];
  int i = 0;
  for (; i < 10; i++) {
    testArr[i] = i;
  }
  for (i = 0; i < 10; i++) {
    if(testArr[i] != inputArr[i]) {
      return FALSE;
    }
  }
  return TRUE;
}

int checkFour(int* arr1, int* arr2, int s1, int s2) {
  int runningTotal = 0;
  int* ptr1 = &arr1[0];
  int* ptr2 = &arr2[0];
  for (int i = 0; arr1[i] < s1; i++) {
    for (int j = 0; arr2[j] < s2; j++) {
      int ar1 = *(ptr1 + (i * (s2 + j)));
      int ar2 = *(ptr2 + (i * (s2 + j)));
      runningTotal += (ar1 == ar2);
    }
  }
  return runningTotal;
}

void exampleFive() {
  int numToGuess = rand() % 100; // pick a random number between 1 and 100
  int numUserGuessed; // the player's current guess
  while (TRUE) { // while the player hasn't guessed the number
    printf("Enter a number: "); //ask and record their guess
    scanf("%d", &numUserGuessed);
    printf("You guessed: %i\n", numUserGuessed); // for debugging
    if (numUserGuessed == numToGuess) { //break out
      break;
    } else if (numUserGuessed < numToGuess) {
      printf("Guess higher.\n");
    } else {
      printf("Guess lower.\n");
    }
  }
  printf("The number was guessed: %i\n\n", numToGuess);
}

void exampleSix() {
  char input[10];
  int i = 0;
  printf("What'cha got?\n");
  scanf("%s", input);
  while(input[i] != '\0' && i < 10) {
    printf("%c\n", *(input + i)); // check reference #3 for this indexing method
    i++;
  }
}

int checkSeven(int* inputArr) {
  int arr[8];
  arr[0] = 2;
  for (int i = 1; i < 8; i++) {
    arr[i] = arr[i - 1] * arr[0];
  }
  for(int i = 0; i < 8; i++) {
    if(inputArr[i] != arr[i]) {
      return FALSE;
    }
  }
  return TRUE;
}

// 8. While loops
/* write a very convoluted way of printing out a meme */
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


/* ******************************************************************************************** */


void exampleEleven() {
  int a = rand();
  int *p;
  p = &a;
  printf("Value for the int a: %i\n", a);
  printf("Value for pointer p: %i\n\n", *p);
  (a == *p) ? printf("#11 passed\n") : printf("** #11 FAILED **\n\n");
}

void exampleTwelve() {
  typedef struct {
    char *url;
    char *date;
    char *uploader;
  } link;

  link rick;
  rick.url = "https://youtu.be/dQw4w9WgXcQ";
  rick.date = "Oct 24, 2009";
  rick.uploader = "Official Rick Astley";
  printf("%s, uploaded %s by %s\n", rick.url, rick.date, rick.uploader);
}

void myThirteenHelper(worth* good) {
  good->price *= 1.25; //price of a good increases
  good->value *= 0.99; //value of a good slightly diminishes over time
}

void exampleThirteen() {
  worth product;
  product.price = 10000;
  product.value = 10000;
  myThirteenHelper(&product);
  printf("The product costs %d, but it's only worth %d\n", product.price, product.value);
}

void exampleFourteen() {
  worth* product = (worth*) malloc(sizeof(worth));
  product->price = 10000;
  product->value = 10000;
  printf("The price is %d, and the value is %d\n", product->price, product->value);
  free(product);
}

void exampleFifteen() {
  int length = 6;
  char* hi = (char*) malloc(6 * sizeof(char));
  int i;
  for(i = 0; i < length; i++) {
    *(hi + i) = 'A';
  }
  printf("%s\n", hi);
  free(hi);
}

void exampleSixteen() {
    printf("Problem #16 unavailable for now, please try again later.\n");
    exampleSixteen();
}

void exampleNineteen() {
  union asciiConv {
    long nums;
    char letters[sizeof(long)];
  }; 

  union asciiConv word;
  word.nums = 0x55555555;
  printf("%s\n", word.letters);
}

void exampleTwenty(char* alphabet) {
  char h = *(alphabet + 7);
  char e = *(alphabet + 4);
  char l = *(alphabet + 11);
  char o = *(alphabet + 14);
  printf("%c%c%c%c%c!\n", h, e, l, l, o);
}

void exampleTwentyOne() {
  int* (*p)(long long);
  p = &helpTwentyOne;
  (p)(0x5E7800B);
}

int helpTwentyOne(long long longBoi) {
  printf("%x\n", longBoi);
}

void exampleTwentyTwo() {
  int a = 0xFFFFFF;
  int b = 0x00FF00;
  printf("%x\n", a&b);
  printf("%x\n", a|b);
  printf("%x\n", a^b);
  printf("%x\n", !b);
}