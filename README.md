README.md for printf


Prototype: int _printf(const char *format, ...);


Return Value
returns the number of characters printed
if an error, returns -1

Conversion Specifiers
conversion specifier (introduced by the character %)
is a character that specifies the type of conversion
to be applied (_printf converts specifiers:

d, i
int argument is converted to signed decimal

Example:

    _printf("%d\n", 12);
    		    _printf("%i\n", -7896);
		    ### Output:

12
-7896
