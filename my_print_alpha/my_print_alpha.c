/*
** ETNA PROJECT, $YEAR
** $NAME_OF_THE_PROJECT
** File description:
** 		No file there, just an etna header example
*/

#include <stdio.h>
#include <unistd.h>

void my_putchar(char c);

void my_print_alpha(void)
{
    int i = 'a';

    while (i <= 'z')
    {
        my_putchar(i);
        i++;
    }
    my_putchar('\n');
}
