<h1> Reference.md </h1>

<h2> Starting a C project </h2>

All you need to start a project in C is the following method:
```
int main() {
    return 0;
}
```
`main()` is the entry point for your program. 
`return 0 indicates the program completed successfully`. Any non-zero return in main() is an issue.

<h2> Important info </h2>

*Apologies as there's not much order to this*

[**printf format specifier reference page**](https://alvinalexander.com/programming/printf-format-cheat-sheet/)


<h3> 0. ***Everything, at its fundamental level, is made up of bits*** </h3>

   ( ^^^ You'll need this later in the semester ^^^ )
    

<h3> 1. Booleans don't exist in C without including them. </h3>
Since they'd be made up of bits, and so are ints, just use numbers: False values are equivalent to 0 and True values are non-zero. 

I have defined the following values in this project for you in Exercises.h if you'd like to use them:
```
#define FALSE 0
#define TRUE 1
```
So you can use TRUE and FALSE as conditions if you'd like.


<h3> 2. Nowadays, you can still write a for loop like you would in Java: </h3>

`for (int i = 0; i < size; i++) {}`

as opposed to declaring the index variable outside:

```
int i;
for (i = 0; i < size; i++) {}
```

**your IDE + compiler should take care of this.**

**However**, you **do** need to declare all functions and variables before use. To enhance readability of your code, declare an empty function instruction at the top of your code (i.e. `void aFunc();`) OR use a header (`functions.h`) file as done in this project.


<h3> 3. *Array indexing at the first element (arr[0]) is the same as dereferencing a pointer to the array itself (\*arr).* </h3>
Therefore, with a little pointer arithmetic, you can reference individual elements of the array by adding the index to the memory address of arr, like so:

`char* arr = "hello!"` is really an array of `{h, e, l, l, o, \n}`.
since char is a one-byte quantity, index this array with `*(arr + i)`
to get the desired element

`int* arr = {6, 5, 9}`
since int is a four-byte quantity, index this array with `*(arr + (4*i))` to get the desired element


<h3> 4. Structures contiguously allocate memory in order based on their largest element </h3> 
... While unions only allocate enough memory to contain their largest element. However, you may only use one property of a union at once.


<h3> 5. `char* word` is semantically equivalent to `char *word` </h3>


<h3> 6. ints are 32-bit quantities </h3>
One hex value is a nybble (4 bits) which is 1/2 a byte
This lends itself to pretty quick conversions. For example, the bit string
1000100010001 is equivalent to the hex value 0x1111
How do I know?
Starting from the right, group each set of 4 numbers together. Evaluate each individually. If there's not enough on the left side to be evenly divisible by four, fill in with zeroes. Any leading zeroes on the left side are typically dropped.

binary   | table 
-------- | --------
0000 - 0 | 1000 - 8
0001 - 1 | 1001 - 9
0010 - 2 | 1010 - 10 (A)
0011 - 3 | 1011 - 11 (B)
0100 - 4 | 1100 - 12 (C)
0101 - 5 | 1101 - 13 (D)
0110 - 6 | 1110 - 14 (E)
0111 - 7 | 1111 - 15 (F)

**__Practice:__** 
Convert 11011010011100110011001 to hex by hand.

Solution: 0x6D3999
 
 
<h3> 7. Signed vs unsigned data types: </h3>

**Signed** data types allow negative/positive values. Typically the default.

**Unsigned** data types only allow non-negative values. Unsigned values have almost double the positive capacity as signed.

`unsigned int 0xFFFFFFFF == MAX_INT`

`signed int 0xFFFFFFFF == -1`

`signed int 0x7FFFFFFF == MAX_INT`

`signed int 0x80000000 == MIN_INT`

Note that MIN_INT is technically MAX_INT + 1. This is why you sometimes get negative numbers on integer overflow; they wrap around to negative.


<h3> 8. Some C data types, for our uses. Specific quantities may be dependent on your OS. </h3>

`char`: 1 byte quantity

`short`: 2 byte numeric quantity

`int`: 4 byte numeric quantity

`float`: 4 byte numeric quantity; also contains decimals

`long`: 8 byte numeric quantity

`double`: 8 byte numeric quantity; also contains decimals

`long long`: 12 byte numeric quantity

Note that `long`s will always be at least 4 bytes and `long long`s will always be at least 8 bytes.
