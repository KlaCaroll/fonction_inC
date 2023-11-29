/*
** ETNA PROJECT, $YEAR
** $NAME_OF_THE_PROJECT
** File description:
** 		No file there, just an etna header example
*/

#include <stdio.h>
#include <unistd.h>

char *my_revstr(char *str);

int main(void)
{
    char str[] = "lala lala";
    my_revstr(str);
    return (0);
}
