/*
** ETNA PROJECT, $YEAR
** $NAME_OF_THE_PROJECT
** File description:
** 		No file there, just an etna header example
*/

#include <stdio.h>
#include <unistd.h>

void my_putchar(char c);

void my_putnbr(int n)
{
    int modulo = 0;
    if (n <= 9 && n >= 0)
        my_putchar(n + '0');
    if (n < 0)
    {
    my_putchar('-');
    n = n * (- 1);
    if (n <= 9 && n >=0)
    my_putnbr(n);
    }
    if (n > 9)
    {
    modulo = n % 10;
    my_putnbr(n / 10);
    my_putchar(modulo + '0');
    }
}