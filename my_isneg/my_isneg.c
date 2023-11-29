/*
** ETNA PROJECT, $YEAR
** $NAME_OF_THE_PROJECT
** File description:
** 		No file there, just an etna header example
*/

#include <stdio.h>
#include <unistd.h>

void my_putchar(char c);

void my_isneg(int n)
{
    if (n >= 0)
        my_putchar('P');
    else
        my_putchar('N');
}
