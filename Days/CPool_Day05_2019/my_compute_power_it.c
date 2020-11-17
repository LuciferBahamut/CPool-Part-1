/*
** EPITECH PROJECT, 2019
** my_compute_power_it.c
** File description:
** task03
*/

int my_compute_power_rec(int nb, int p)
{
    int i;
    int result;
    i = nb;

    if (p < 0 || nb > 2147483647) {
        return (0);
    }
    if (p == 0) {
        return (1);
    }
    for (i > p; i > p; i++)
    {
        result = nb * nb;
    }

    return (result);
}
