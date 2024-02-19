# Chapter 3 - Formatted Input/Output

3.1

**printf**

- There’s no limit on the number of values that can be printed by a single call of
printf.

- the % character specifies how the value is converted from its internal form
(binary) to printed form (characters)

- C compilers aren’t required to check that the number of conversion specifications
in a format string matches the number of output items.

- compilers aren’t required to check that a conversion specification is appropriate
for the type of item being printed.

- conversion specification can have the form %m.pX or %-m.pX, where
m and p are integer constants and X is a letter. Both m and p are optional;
if p is omitted, the period that separates m and p is also dropped.

- minimum field width, putting a minus sign in front of m causes left justification;
the specification %-4d would display 123 as 123•.

**conversion specifications:**  
*Research and review all of these specifiers in detail as this can seem daunting to remember!*

* %d
    - int, if p is omitted, it is assumed to have the value 1.
    (In other words, %d is the same as %.1d)  
* %e: 
    - float exponential,  If precision is 0, the decimal point is not displayed.  
* %f:
    - float fixed decimal, without an exponent. p has the same meaning as for the e specifier.  
* %g:
    - Displays a floating-point number, either exponential format
    or fixed decimal format, depending on the number’s size.
    - shows maximum number of significant digits (not digits after the decimal point)  
    - doesn’t display the decimal point.
    - The g specifier is especially useful for displaying numbers whose size can’t be
    predicted

*Other specifiers will be disscussed in later chapters.*

==========  
***TODO:*** **escape sequences:**

==========  


**scanf function**

- dont forget to put `&` in front of the variable, at the very least, the value
that is read from the input won’t be stored in the variable; instead, the variable
will retain its old value.

- a powerful but unforgiving way to read data.

- essentially a “pattern-matching” function that tries to match up groups
of input characters with conversion specifications.

- locate an item of the appropriate type in the input data, skipping blank
space if necessary.

- If any item is not read successfully, scanf returns immediately without
looking at the rest of the format string.

- ignores white-space characters (the space, horizontal and vertical tab,
form-feed, and new-line characters).

- last new-line will be the first character read by the next call of scanf.

**integers reading order:**  
digit, a plus sign, or a minus sign; it then reads
digits until it reaches a nondigit.

**floating point reading order:**  

a plus or minus sign (optional), followed by a series of digits
(possibly containing a decimal point), followed by an exponent (optional).
An exponent consists of the letter e (or E), an optional sign, and one or more digits.


 %e, %f, and %g conversions are interchangeable when used with scanf; all
three follow the same rules for recognizing a floating-point number

### RE-READ PG.44 Q&A - how scanf processes
better understanding of how scanf processes input versus how I might think input is being processed.
"admittedly pathological"

**Ordinary Characters in Format Strings**

- The number of white-space characters in the format string is irrelevant;

DONT CONFUSE SCANF WITH PRINTF!!! And heres why!

- To scanf, a new-line character in a format string is equivalent to a space; 

- What happens with "other" characters?

- with scanf there’s often no need for a format string to include characters other than
conversion specifications.


**Q&A**
Q: What’s the difference between %i and %d? [p. 39]
- %i and %d are the same in an printf statement but in scanf %i can read base 8, 10, and 16
if using the correct prefix i.e: `0`(octal) or `0x`(hex)

- use `%%` to print one `%` and not treat it as a specifier.

- `\t`(tab stop) is os specific and can vary depending on what os your using.


#### READ THESE LAST 3 Q&A's

Q: What does scanf do if it’s asked to read a number but the user enters
nonnumeric input?

Q: I don’t understand how scanf can “put back” characters and read them
again later. [p. 44]

Q: What does scanf do if the user puts punctuation marks (commas, for example)
between numbers?

