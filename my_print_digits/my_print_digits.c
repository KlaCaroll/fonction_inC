/*
** ETNA PROJECT, $YEAR
** $NAME_OF_THE_PROJECT
** File description:
** 		No file there, just an etna header example
*/

#include <stdio.h>
#include <unistd.h>

void my_putchar(char c);

void my_print_digits(void)
{
    int i = '0';

    while (i <= '9')
    {
        my_putchar(i);
        i += 1;
    }
}
