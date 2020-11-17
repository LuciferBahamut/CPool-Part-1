/*
** EPITECH PROJECT, 2019
** my_put_nbr.h
** File description:
** Task08
*/

#ifndef _MY_PUT_NBR_H
#define _MY_PUT_NBR_H

#include <unistd.h>

void my_putchar(char n)
{
    write(1, &n, 1);
}

int my_put_nbr(int nb)
{
    if(nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    if( nb / 10) {
        my_put_nbr(nb/10);
    }
    my_putchar(nb %10 + '0');
    return (0);
}

#endif
