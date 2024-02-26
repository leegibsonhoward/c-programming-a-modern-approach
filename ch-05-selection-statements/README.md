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


