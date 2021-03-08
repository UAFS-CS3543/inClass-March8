# Example code from March 8 class

## Program1

**prog1.c** demonstrates the basic differences between a character array and a string (null-terminated character array) in C.  Typically instead of using a for loop to process the array where you need to know the size, strings are processed using while loops that continue to process until the null character '\0' is read.

Functions and format specifiers in C refering to strings expect the null terminator character at the end ofthe characters and will not function properly without it.

## Program 2

In this program, we create our first function library.  The functions reside in a seperate source code file, **funlib.c** and the function prototypes for the functions implemented in funlib.c are in **funlib.h**.  Create **prog2.c** and inlcude the funlib.h file, so you can use the functions in the funlib.c library.  Make sure when you compile your program to include the funlib.c in your executable file as in below:
```
gcc funlib.c prog2.c -o prog2
```

## Program 3

**prog3.c** introduces pointers and demonstrates their basic usage.  Pointers allow you to indirectly access variables and arrays.  Pointers and Arrays are closely related and we will be covering the use of pointers over the next few weeks.  Pointer notation is typical in string processing.
