
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
      return 0;
    }
  }
  return 1;
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
