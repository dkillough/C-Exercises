1. ***Everything, at its fundamental level, is made up of bits***
 ( ^^^ You'll need this later in the semester ^^^ )

2. Nowadays, you can still write a for loop like you would in Java:
`for (**int** i = 0; i < size; i++) {}`
as opposed to declaring the index variable outside:
```int i;
for (i = 0; i < size; i++) {}```
your IDE + compiler should take care of this.

3. *Array indexing at the first element (arr[0]) is the same as dereferencing a pointer to the array itself (\*arr).*
Therefore, with a little pointer arithmetic, you can reference individual elements of the array by adding the index to the memory address of arr, like so:

`char* arr = "hello!"` is really an array of `{h, e, l, l, o, \n}`.
since char is a one-byte quantity, index this array with `*(arr + i)`
to get the desired element

`int* arr = {6, 5, 9}`
since int is a four-byte quantity, index this array with `*(arr + (4*i))` to get the desired element

4. Structures contiguously allocate memory in order based on their largest element while unions only allocate enough memory to contain their largest element. However, you may only use one property of a union at once.

5. `char* word` is semantically equivalent to `char *word`

6. Signed vs unsigned data types:
