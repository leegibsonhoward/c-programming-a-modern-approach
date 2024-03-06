# Chapter 6 - Loops

- In C, every loop has a controlling expression

- C provides three iteration statements: while, do, and for.

- while and for evaluation is tested before execution.

- do evaluation is tested after execution.

- the comma operator, which is used primarily in
for statements

**The `while` statement**

- first testing the controlling expression, then executing the loop body—until
the controlling expression eventually has the value zero(0 is false in c)

- when you use multiple statements use braces to create a single
compound statement.
```c
while (i > 0) {
    printf("T minus %d and counting\n", i); // statement #1
    i--; // statement #2
}
```

- The body of a while loop may not be executed at all. Since the controlling
expression is tested before the loop body is executed.

- we could make the countdown loop more concise by decrementing i inside the
call of printf:  
```c
    while (i > 0)
    printf("T minus %d and counting\n", i--);
```

- A while statement won’t terminate if the controlling expression always has a
nonzero value

- while (1) ... creates an infinite loop.

- while statement like the one above will execute forever unless its body contains a
statement that transfers control out of the loop (break, goto, return) or calls a
function that causes the program to terminate.


