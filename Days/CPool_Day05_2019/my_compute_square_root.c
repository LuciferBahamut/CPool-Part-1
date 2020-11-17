/*
** EPITECH PROJECT, 2019
** my_compute_square_root
** File description:
** task05
*/

#include <stdio.h>

int my_compute_square_root(int nb)
{
    int i;
        
    for (i = 0; i <= nb; i++) {
        if(nb == i * i ) {
        return (i);
        }
        if (i * i > nb){
            i = 0;
            return (i);
        }
    }

    return (0);
}

int main(void)
{
    int i;
    i = my_compute_square_root(9);
    printf("%d", i);
    return (0);
}
