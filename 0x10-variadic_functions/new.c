#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include <stdarg.h>
void printChar(char *, va_list);
void printInt(char *, va_list);
void printFloat(char *, va_list);
void printString(char *, va_list);

typedef struct list
{
    char *ptr;
    void (*f)(char *, va_list);
} list_t;

void print_all(const char * const format, ...)
{
    va_list list;

    list_t arr[] = {
        { "c", printChar },
        { "i", printInt },
        { "f", printFloat },
        { "s", printString },
    };

    unsigned int i = 0;
    unsigned int j = 0;
    char *separator = "";

     va_start(list, format);
    while(format != NULL && format[i])
    {
        j = 0;

        while(j < 4)
        {
            if (format[i] == *arr[j].ptr)
            {
               arr[j].f(separator, list);
               separator = ", ";
            }
                j++;
        }
        i++;
    }
    printf("\n");
    va_end(list);
}

void printInt(char *separator, va_list list)
{
    int num = va_arg(list, int);
    printf("%s%i", separator, num);
}

void printFloat(char *separator, va_list list)
{
    float num = va_arg(list, double);
    printf("%s%f", separator, num);
}

void printChar(char *separator, va_list list)
{
    char c = va_arg(list, int);
    printf("%s%c", separator, c);
}

void printString(char *separator, va_list list)
{
    char *ptr = va_arg(list, char *);

    if (ptr == NULL)
        printf("%s%s", separator, "(nil)");
    else
        printf("%s%s", separator, ptr);
}


int main(void)
{
    print_all("ceis", 'B', 3, "stSchool");
    return (0);
}
