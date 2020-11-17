/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** display a number
*/

void my_putchar(char c);

int my_put_nbr(int nb)
{
    long nbl = nb;

    if (nbl < 0) {
        my_putchar('-');
        nbl = -nbl;
    }
    if (nbl >= 10) {
        my_put_nbr(nbl / 10);
        my_put_nbr(nbl % 10);
    } else if (nbl < 10)
        my_putchar(nbl + '0');
    return (0);
}
