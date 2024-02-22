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

