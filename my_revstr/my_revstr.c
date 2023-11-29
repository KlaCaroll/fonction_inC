/*
** ETNA PROJECT, $YEAR
** $NAME_OF_THE_PROJECT
** File description:
** 		No file there, just an etna header example
*/

#include <stdio.h>
#include <unistd.h>

void my_putchar(char c);

char *my_revstr(char *str)
{
    int lenght = 0;
    while (str[lenght] != '\0') {
        lenght += 1;
    }

    int i = 0;
    char tmp;
    while (i < lenght/2) {
        tmp = str[i];
        str[i] = str[lenght-i];
        str[lenght-1-i] = tmp;
        i += 1;
    }

    for (i = 0; i < lenght; i+=1) {
        my_putchar(str[i]);
    }

    return str;
}
