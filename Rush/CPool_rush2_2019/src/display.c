/*
** EPITECH PROJECT, 2019
** display
** File description:
** display rush2
*/

#include "my.h"

int calc_percent(int count, int letters)
{
    int nb1 = 0;
    int nb2 = 0;
    int result = ((count * 10000) / letters);

    nb1 = result / 100;
    nb2 = result % 100;
    my_put_nbr(nb1);
    my_putchar('.');
    my_put_nbr(nb2);
    if (nb2 == 0)
        my_putchar('0');
    return (0);
}

void display(char c, int count, int letters)
{
    my_putchar(c);
    my_putchar(':');
    my_put_nbr(count);
    my_putstr(" (");
    calc_percent(count, letters);
    my_putstr("%)\n");
}