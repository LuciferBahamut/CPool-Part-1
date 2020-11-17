/*
** EPITECH PROJECT, 2019
** my_compute_factorial_it
** File description:
** task02
*/

int my_compute_factorial_rec(int nb)
{    
    if(nb < 0 || nb > 12)
    {
        return (0);
    }
    if (nb == 0)
    {
        return (1);
    }
    
    return (nb * my_compute_factorial_rec(nb - 1));
}
