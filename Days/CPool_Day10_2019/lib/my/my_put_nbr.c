/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** task07
*/

int my_put_nbr(int nb)
{
    if(nb < 0) {
        nb = -nb;
    }
    if( nb / 10) {
    my_put_nbr(nb/10);
    }
    my_putchar(nb %10 + '0');
    return (0);
}
