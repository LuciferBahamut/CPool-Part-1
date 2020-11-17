/*
** EPITECH PROJECT, 2019
** my_compute_factorial_it
** File description:
** task01
*/

int my_compute_factorial_it(int nb)
{
    int i;
    int result;
    result = 1;

    if (nb <  0 || nb > 12) {
        return (0);
    }
    if (nb ==  0) {
        return (1);
    }
    for (i = 1; i <= nb; i++){
        result  *= i;
    }
    
    return (result);
}
