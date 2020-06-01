
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
  int guessed = FALSE; // has the player guessed the correct number?
  int numToGuess = rand() % 100; // pick a random number between 1 and 100
  int numUserGuessed; // the player's current guess
  while (guessed == FALSE) { // while the player hasn't guessed the game
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