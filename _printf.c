#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - Custom printf function to produce output according to the format.
 * @format: Format string.
 * Return: Number of characters printed (excluding the null byte used to end output to strings).
 */
int _printf(const char *format, ...)
{
    int count = 0;
    va_list args;
    va_start(args, format);

    while (*format)
    {
        if (*format != '%')
        {
            putchar(*format);
            count++;
        }
        else
        {
            format++; // Move past the '%'
            switch (*format)
            {
                case 'c':
                {
                    char ch = va_arg(args, int);
                    putchar(ch);
                    count++;
                    break;
                }
                case 's':
                {
                    char *str = va_arg(args, char *);
                    if (str)
                    {
                        while (*str)
                        {
                            putchar(*str);
                            str++;
                            count++;
                        }
                    }
                    break;
                }
                case '%':
                    putchar('%');
                    count++;
                    break;
                default:
                    // Invalid conversion specifier, just print the '%'
                    putchar('%');
                    putchar(*format);
                    count += 2;
                    break;
            }
        }
        format++;
    }

    va_end(args);
    return count;
}

int main()
{
    int num = 42;
    char ch = 'A';
    char *str = "Hello, World!";

    // Test the _printf function
    int printed_chars = _printf("This is a number: %d\n", num);
    printed_chars += _printf("This is a character: %c\n", ch);
    printed_chars += _printf("This is a string: %s\n", str);
    printed_chars += _printf("This is a percent sign: %%\n");

    printf("Total characters printed: %d\n", printed_chars);

    return 0;
}

