#include "main.h"

// Function prototypes
void print_buffer(char buffer[], int *buff_ind);
int handle_print(const char *format, int *index, va_list args, char buffer[],
                 int flags, int width, int precision, int size);
int get_flags(const char *format, int *index);
int get_width(const char *format, int *index, va_list args);
int get_precision(const char *format, int *index, va_list args);
int get_size(const char *format, int *index);

/**
 * _printf - Custom printf function to produce output according to the format.
 * @format: Format string.
 * Return: Number of characters printed (excluding the null byte used to end output to strings).
 */
int _printf(const char *format, ...)
{
    int i, printed_chars = 0, flags, width, precision, size, buff_ind = 0, printed;
    va_list list;
    char buffer[BUFF_SIZE];

    if (format == NULL)
        return (-1);

    va_start(list, format);

    for (i = 0; format && format[i] != '\0'; i++)
    {
        if (format[i] != '%')
        {
            buffer[buff_ind++] = format[i];
            if (buff_ind == BUFF_SIZE)
                print_buffer(buffer, &buff_ind);
            printed_chars++;
        }
        else
        {
            print_buffer(buffer, &buff_ind);
            flags = get_flags(format, &i);
            width = get_width(format, &i, list);
            precision = get_precision(format, &i, list);
            size = get_size(format, &i);
            ++i;
            printed = handle_print(format, &i, list, buffer,
                                   flags, width, precision, size);
            if (printed == -1)
            {
                va_end(list);
                return (-1);
            }
            printed_chars += printed;
        }
    }

    print_buffer(buffer, &buff_ind);

    va_end(list);

    return (printed_chars);
}

/**
 * print_buffer - Prints the contents of the buffer if it exists.
 * @buffer: Array of chars.
 * @buff_ind: Index at which to add next char, represents the length.
 */
void print_buffer(char buffer[], int *buff_ind)
{
    if (*buff_ind > 0)
    {
        write(1, &buffer[0], *buff_ind);
    }

    *buff_ind = 0;
}

