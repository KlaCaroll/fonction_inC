/*
** ETNA PROJECT, $YEAR
** $NAME_OF_THE_PROJECT
** File description:
** 		No file there, just an etna header example
*/

#include <stdio.h>
#include <unistd.h>

void my_putchar(char c);

void my_putstr(const char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        my_putchar(str[i]);
        i += 1;
    }
    return;
}