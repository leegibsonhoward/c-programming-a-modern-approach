# Chapter 2 - C Fundamentals

2.1

- The name of the file doesn’t matter, but the .c extension is often required by compilers

- preprocessor, which obeys commands that begin with # (known as directives).

- compiling a program translates it into machine instructions (object code).

- Linking adds your code any additional code from libraries to produce the final binary file.

- the preprocessor is usually integrated with the compiler

- cc was used on UNIX

- i dont like a.out so i always use -o to name binary files

2.2

**General form of a c program below:**

```c
directives

int main(void)
{

statements

}
```
- Directives always begin with a # character

- Functions are like “procedures” or “subroutines” in other programming languages

- The term “function” comes from mathematics, where a function is a rule for computing
a value when given one or more arguments.

- C uses the term “function” more loosely. In C, a function is simply a series of
statements that have been grouped together and given a name.

- A statement is a command to be executed when the program runs.

2.3

**Comments Template below:**
```c

/* Name: pun.c */
/* Purpose: Prints a bad pun. */
/* Author: K. N. King */

#include <stdio.h>

int main(void)
{
    printf("To C, or not to C: that is the question.\n");
    return 0;
}
```

- C99 provides a second kind of comment, which begins with // (two adjacent
slashes)

2.4

- The largest int value is typically 2,147,483,647 but can be as small as 32,767.

- Arithmetic on float numbers may be slower than arithmetic on int
numbers.

- value of a float variable is often just an approximation of the number that was stored in it

- prior to c99 declarations must precede statements. but now you can have declarations, statements and more declarations.

**Assignments:**

8, 12, 10 are constants

```c
height = 8;
length = 12;
width = 10;
```

- append the letter f to float constants if not you may get compiler warning.
```
profit = 2150.48f;
```

%d for ints  
%f for floats

- By default, %f displays a number with six digits after the decimal point.

- In C, when one integer is divided by another, the answer is “truncated”:
all digits after the decimal point are lost.

**dweight.c program:**

- Why is 165 added to volume before dividing by 166? *check stackoverflow for explanation*

```c
int height = 8;
```

- In C jargon, the value 8 is said to be an initializer.

- one of C’s general principles:
Wherever a value is needed, any expression of the same type will do.

2.5

- The f in scanf, like the f in printf, stands for “formatted”.


2.6

macro definition, we can name this constant:  
```c
#define INCHES_PER_POUND 166
```

TODO: Research freezing point and scale factor when converting temp.

2.7

- identifiers are name for variables, functions, macro and other entities.

2.8

```c
printf ( "Height: %d\n" , height ) ;
```
The above statement has 7 tokens.

TODO: Research c programming language tokens

### Q&A

- exit(0) is the same a return 0 when used inside of main().

- compilers are only required to remember the first 31 characters of an identifier


