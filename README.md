0x11. C - printf

0. Write a function that produces output according to a format.
	Prototype: int _printf(const char *format, ...);

1. Handle the following conversion specifiers:
	d

	i

2. Handle the following custom conversion specifiers:
	b: the unsigned int argument is converted to binary

3. Handle the following conversion specifiers:
	u

	o

	x

	X

4. Use a local buffer of 1024 chars in order to call write as little as possible.

5. Handle the following custom conversion specifier:
	S : prints the string.
	Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)

6. Handle the following conversion specifier: p.

7. Handle the following flag characters for non-custom conversion specifiers:
	+

	space
	
	#

8. Handle the following length modifiers for non-custom conversion specifiers:
	l

	h

Conversion specifiers to handle: d, i, u, o, x, X

9. Handle the field width for non-custom conversion specifiers.

10. Handle the precision for non-custom conversion specifiers.

11. Handle the 0 flag character for non-custom conversion specifiers.

12. Handle the - flag character for non-custom conversion specifiers.

13. Handle the following custom conversion specifier:
	r : prints the reversed string

14. Handle the following custom conversion specifier:
	R: prints the rot13'ed string

15. *All the above options work well together.(inshallah)

### Authors &copy;

- [Triza](https://github.com/Treey30)
- [Davie Wisdom](https://github.com/daviewisdm)
