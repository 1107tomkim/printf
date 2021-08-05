# README.md
## printf


### Discription:
formatted output conversion

Prototype: int _printf(const char *format, ...);


#### How To
to use the _printf compile all .c files repository,include the header holberton.h 

### Example main.c:

#include "holberton.h"

int main(void)
{
    _printf("Hello, World!");

    return (0);
    }
    ### Compilation:

$ gcc *.c -o
Output:

$
Hello, World!
$
### Return Value
returns the number of characters printed
if an error, returns -1.

### Conversion Specifiers
conversion specifier (introduced by the character %)
is a character that specifies the type of conversion to be applied (_printf converts specifiers:

d, i
int argument is converted to signed decimal

### Example:

    _printf("%d\n", 12);
    		    _printf("%i\n", -7896);
		    ### Output:

12
-7896
b
unsigned int is converted to signed decimal

### Example main.c:

    _printf("%b\n", 7);
    ### Output:

111
o, u, x, X
unsigned int is converted to unsigned octal (o), unsigned decimal (u), or
unsigned hexadecimal (x and X)
letters abcdef are used for x conversions and ABCDEF are used for X conversions

### Example :

    _printf("%o\n", 77);
    Output:

115
c
argument is converted to an unsigned char

### Example

    _printf("%c\n", 'A');
    ### Output:

A
s
char * is a pointer to a character array or pointer//
to a string is printed starting from first element

### Example


r
Reverse the char * argument

### Example:

int main(void)
    _printf("r\n", "Mikey");
    ### Output:

demhA

address of the argument is written in hex leading with 0x 

### Example :

    char *str = "Hello, World";
        _printf("%p\n", (void *)str);
	### Output:

0x561a6d7bab5d
%
A % is written without converted argumetn. The complete conversion specification is %%.

### Example:

    _printf("%%\n");

### Output:

%

man_3_printf
TH 3_printf "August 2021" "0.20" "_printf man page"
.SH NAME
.B _printf
- Formatted output conversion.
.SH SYNOPSIS
.B #include "holberton.h"

.B int _printf(const char *
.I format
.B , ...)
.SH DESCRIPTION
.B _printf()
Prints to standard output under the control of a
.I format
.SH Return value
returns number of characters printed, excluding
the null byte used to end output to strings

if an output error is hit, then negative
.SH Format
.TP
.BR c
int is converted to an unsigned char, then the resulting character is printed
.TP
.B s
const char * is a pointer to an array of character type (pointer to a string)
.TP
.B S
prints string,characters tht cant be printed are
printed as "\x" followed by their two digit hexadecimal
.TP
.B d, i
int converted to signed decimal
.TP
.B x, X
unsigned int converted to unsigned lowercas or uppercaee hexadecimal(x,X)
.TP
.B u
unsigned int converted to unsigned decimal
.TP
.B o, b
unsigned int is converted to unsigned octal or binary(o,b)
.TP
.B p
address in hexadecimal
.TP
.B r
prints string in reverse
.TP
.B %
'%' is written but no argument is completed
