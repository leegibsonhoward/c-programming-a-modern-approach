# Chapter 5 - Selection Statements

- Before we can write if statements, we’ll need logical expressions:
conditions that if statements can test.

### Logical Expressions

**Relational operators**  

- In C, a comparison such as i < j yields an integer:
either 0 (false) or 1 (true)

- relational operators can be used to compare integers and floating
point numbers, with operands of mixed types allowed:  
`1 < 2.5` has the value 1, while `5.6 < 4` has the value 0.

- relational operators precedence is lower than that of the arithmetic
operators:
`i + j < k - 1` means `(i + j) < (k - 1)`.

- relational operators are left associative.

- `i < j < k` is equivalent to `(i < j) < k` which means test first whether i is less than j then return either a 0 or 1 respectivly then 0 or 1 is tested against k!

**Equality operators**  

- equality operators are left associative and produce either
0 (false) or 1 (true) as their result.

- equality operators have lower precedence than the relational operators.

- avoid using tricky code:  
`(i >= j) + (i == j)` is either `0`, `1`, or `2`, depending on whether i is
less than, greater than, or equal to j, respectively

**Logical Operators**  

- The ! operator is unary, while && and || are binary.

- logical operators produce either 0 or 1 as their result.

- `!` is 1(true) if value of `!i` is 0(false)

- The ! operator has the same precedence as the unary plus and minus operators. 

- precedence of && and || is lower than that of the relational and equality operators:  
`i < j && k == m` means `(i < j) && (k == m)`

- The ! operator is right associative; && and || are left associative.

**The `if` Statement**

- parentheses are a part of the if statement, not part of the expression.

- if the value of the expression is nonzero—which C interprets
as true—the statement after the parentheses is executed.

- use `&&` to test whether a variable falls within a range of values

- use `||` to test whether a value is outside of a range.

- singular if statement:  
`if ( expression ) statement`

- putting braces around a group of statements, we can force the
compiler to treat it as a single statement:  
```
if ( expression )
{
    statement
    statement
}
```

**The `else` Clause**

- else is executed if the expression in parentheses has the value 0

- use braces in if statements especially nested if statements

- A “cascaded” if statement is often the best way to test a series of
conditions.

- Below the second if statement is nested inside the first, C programmers don’t usually indent it.

```c
if (n < 0)
    printf("n is less than 0\n");
else
    if (n == 0)
        printf("n is equal to 0\n");
    else
        printf("n is greater than 0\n");
```

Instead you can align each else with the original if:

```c
if (n < 0)
    printf("n is less than 0\n");
else if (n == 0)
    printf("n is equal to 0\n");
else
    printf("n is greater than 0\n");
```

I will admit the above looks better.

- cascaded if statement isn’t some new kind of statement; it’s
just an ordinary if statement that happens to have another if
statement as its else clause.

- cascading creates the potential for `ad infinitum`

**The “Dangling `else`” Problem**

- C follows the rule that an else clause belongs to the nearest
if statement that hasn’t already been paired with an else.

```c
if (y != 0) // else belongs to this if statment
    if (x != 0) // not this
        result = x / y;
else // belongs to the outter if above
    printf("Error: y is equal to 0\n");
```

Instead use braces to prevent this potential bug from crepping
into source code.  

```c
if (y != 0)
{
    if (x != 0)
        result = x / y;
} else
    printf("Error: y is equal to 0\n");
```

**Conditional Expressions**

- conditional operator consists of two symbols (? and :):  
`expr1 ? expr2 : expr3`

- requires three operands instead of one or two.

- should be read “if expr1 then expr2 else expr3.”

- The following example illustrates the conditional operator:  
```c
int i, j, k;
i = 1;
j = 2;
k = i > j ? i : j; /* k is now 2 */
k = (i >= 0 ? i : 0) + j; /* k is now 3 */
```

- parentheses are necessary, by the way; the precedence of the
conditional operator is less than that of the other operators
we’ve discussed so far, with the exception of the
assignment operators.

-Conditional expressions tend to make programs shorter but
harder to understand, so **it’s probably best to avoid them**.  

**Boolean Values in C89**

- before c99 there was no boolean type in C programming language.

- in C89 declare an int variable and then assign it either 0 or 1.
this was easy to miss and  ureadable by unsuspecting developers.

- To make programs more understandable, C89 programmers
often define macros with names such as TRUE and FALSE:  
```c
#define TRUE 1
#define FALSE 0
```

- set as flag:
```
flag = FALSE;
…
flag = TRUE;
```

Then test using:
```
if (flag == TRUE) …
```
or just 
```
if (flag) …

```

- but the latter form is better since it is more concise and won't
fail if the value is other than 1(TRUE)  

```c
if (flag == FALSE) …
```
or you can be concise and use the below form:  
```
if (!flag) …
```

- One step futher you can define a type so when using it you know
its meant to be used as a BOOL type.
`#define BOOL int`  

- Then use it like below
`BOOL flag;`

**Boolean Values in C99**

- In C99 you can use _Bool type:  
`_Bool flag;`

- `<stdbool.h>` provides a macro, bool, that stands for _Bool:  
`bool flag;`

- The <stdbool.h> header also supplies macros named true and false,
which stand for 1 and 0, respectively:  
```
flag = false;
…
flag = true;
```

**The switch Statement**

- in most cases a switch is equivalent to cascaded statements.

- switch statement is often easier to read than a cascaded if statement

- switch must be followed by an integer expression in parentheses:  
```c
switch ( expression ) { // controlling expression
    case constant-expression : // case label(constant expression)
        statements // any number of statments
    …
    case constant-expression :
        statements
    default : statements
}
```

- duplicate case labels arent allowed

- default case doesnt need to go last

- Only one constant expression may follow the word case

- there’s no way to write a case label that specifies a range
of values, as there is in some programming languages.

- default case is not required; control simply passes to the
next statement after the switch.

**The Role of the break Statement**  

- “break” out of the switch statement; execution continues
at the next statement after the switch.

- switch statement is really a form of “computed jump.”

- When the last statement in the case has been executed, control
“falls through” to the first statement in the following case; the
case label for the next case is ignored.

- Without break (or some other jump statement), control will flow from
one case into the next.

- omitting break is sometimes done intentionally to allow several
cases to share code.

- it’s a good idea to point out any deliberate omission of break:  
```
switch (grade) {
    case 4: case 3: case 2: case 1:
        num_passing++;
        /* FALL THROUGH */
    case 0: total_grades++;
        break;
}
```

**Q&A**

- programming style is of choice just be consistent

- my personal favorite now is allman but i used K&R style until I
started learning from this book

- bool or boolean, weren’t chosen because existing C programs might
already define these names, causing older code not to compile.

- The C89 standard specifies that names beginning with an underscore
followed by an uppercase letter are reserved for future use and should
not be used by programmers.


