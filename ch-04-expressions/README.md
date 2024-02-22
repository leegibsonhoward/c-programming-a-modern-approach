# Chapter 4 - Expressions

- expressions are formulas that show how to compute a value rather than statements.

- The simplest expression is a variable and constant

- operators are the building blocks of expressions

- arithmetic, relational, and logical operators exist in the c programming language.

- urnary operators require 1 operand.

- additive and multiplicative are binary as they requre 2 operands.

- The unary + operator does nothing; in fact, it didn’t even exist in K&R C. It’s used
primarily to emphasize that a numeric constant is positive.

- if you mix int and float the result is a float.

- When both of its operands are integers, the / operator “truncates” the
result by dropping the fractional part.

- Using zero as the right operand of either / or % causes undefined behavior.

- using / or % with negative numbers is tricky.
*read C99 section on pg. 54 and research negative numbers and outcome using / and %*

**implementation-defined**
- The C standard deliberately leaves parts of the language unspecified,
with the understanding that an “implementation”—the software needed to compile,
link, and execute programs on a particular platform—will fill in the details.

- try to avoid writing programs that depend on implementation-defined behavior.

**Operator Precedence and Associativity**

```
Highest: + - (unary)  
         * / %
Lowest:  + - (binary)
```

- Operators listed on the same line (such as + and -) have equal precedence.

- When two or more operators appear in the same expression, we can determine
how the compiler will interpret the expression by repeatedly putting parentheses
around subexpressions, starting with high-precedence operators and working down
to low-precedence operators. The following examples illustrate the result:
```
i + j * k is equivalent to i + (j * k)
-i * -j is equivalent to (-i) * (-j)
+i + j / k is equivalent to (+i) + (j / k)
```

-  use associativity when two or more operators at the same level of precedence are on the same line.
    - left: binary operators  
    - right: unary operators

- C has almost 50 operators so instead of memorizing them all instead consult a operators
table like the one in `Appendix` A of this book.

**PROGRAM** - *Computing a UPC Check Digit*

- Understanding the check digit...
here’s one method of computing the check digit:
```
Add the first, third, fifth, seventh, ninth, and eleventh digits.
Add the second, fourth, sixth, eighth, and tenth digits.
Multiply the first sum by 3 and add it to the second sum.
Subtract 1 from the total.
Compute the remainder when the adjusted total is divided by 10.
Subtract the remainder from 9.
```

The above method didnt stick so I found another resource on the internet where
finding the check digit is easier to grasp. Follow the link below:  
[Check digit on Youtube](https://www.youtube.com/watch?v=4C3uwfoR88c)

afterwards learn the method in the book was easier to grasp.

**Assignment Operators**

- v = e (variable = expression)

- if v and e don’t have the same type, then the value of e
is converted to the type of v

```
int i;
float f;
i = 72.99f; /* i is now 72 */
f = 136; /* f is now 136.0 */
```

- In many programming languages, assignment is a statement; in C, however,
assignment is an operator

- assignment produces a result, just as adding two numbers produces a result. 

***Side Effects***
- Writing i + j doesn’t modify either i or j;

- the assignment operator `=` has "side affects".

- i = 0 produces the result 0 and—as a side effect—assigns 0 to i

- the assignment operator is right-associative.

```
i = j = k = 0;
The = operator is right associative, so this assignment is equivalent to
i = (j = (k = 0));
The effect is to assign 0 first to k, then to j, and finally to i.
```

- avoid embedded assignments i.e.:
```
i = 1;
k = 1 + (j = i); // embedded assignment here!
printf("%d %d %d\n", i, j, k); /* prints "1 1 2" */
```

**Lvalues**

- assignment operator, however, requires an lvalue as its left operand.

- "Lvalues" represents an object stored in computer memory, not a constant
or the result of a computation.

-  it’s illegal
to put any other kind of expression on the left side of an assignment expression:

```
12 = i; /*** WRONG ***/
i + j = 0; /*** WRONG ***/
-i = j; /*** WRONG ***/
```
- the above you will recive a compiler error "invalid lvalue in assignment."

**Compound Assignment**

- C has 9 compound assignment operators

*need more clarification of below:*

- Note that I’ve been careful not to say that `v += e` is “equivalent” to `v = v + e`. One
problem is operator precedence: `i *= j + k isn’t the same as i = i * j + k`.

**Increment and Decrement Operators**

```
++ - increment
-- - decrement
++v or --v - prefix
v++ or v-- - postfix
```

- ++ and -- have side effects: they modify the values of their operands.

- postfix versions of ++ and -- have higher precedence than unary plus
and minus and are left associative. The prefix versions have the same
precedence as unary plus and minus and are right associative.

**Expression Evaluation**

- With the help of operator table showing precedence, adding parentheses to an expression is
easy.

- avoid using the assignment operators in subexpressions.

-  Besides the assignment operators, the only operators that modify their
operands are increment and decrement.

- According to the C standard, statements such as c = (b = a + 2) - (a = 1); and
j = i * i++; cause undefined behavior, which is different from implementation-
defined behavior (see Section 4.1).

**Expression Statements**

- any
expression—regardless of its type or what it computes—can be turned into a state-
ment by appending a semicolon. For example, we could turn the expression ++i
into a statement:
`++i;`

- there’s little point in using an expression as a statement unless the expression has a side effect

**Q&A**

- C has no exponentiation operator; its best done by repeated
multiplication (i * i * i is i cubed). use `pow` for noninteger

- % operator requires integer operands. Try the fmod function instead.

- rvalue could be a variable, constant, or more complex expression.
In this book, as in the C standard, we’ll use the term “expression”
instead of “rvalue.”

You said that v += e isn’t equivalent to v = v + e if v has a side effect. Can you
explain? [p. 60]
```
Evaluating v += e causes v to be evaluated only once; evaluating v = v + e causes v
to be evaluated twice. Any side effect caused by evaluating v will occur twice in
the latter case. In the following example, i is incremented once:

a[i++] += 2;

If we use = instead of +=, here’s what the statement will look like:

a[i++] = a[i++] + 2;

The value of i is modified as well as used elsewhere in the statement, so the effect
of executing the statement is undefined. It’s likely that i will be incremented
twice, but we can’t say with certainty what will happen.
```

- C inherited ++ and -- from Ken Thompson’s earlier B language.

- it’s fairly rare to increment or decrement a float variable.


