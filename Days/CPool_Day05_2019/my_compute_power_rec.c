/*
** EPITECH PROJECT, 2019
** my_compute_power_rec.c
** File description:
** task04
*/

int my_compute_power_rec(int nb, int p)
{
    int a;
    int s;
    
    a = 1;
    if(p < 0 || nb > 2147483647) {
        return (0);
    }
    if (p == 0) {
        return (1);
    }
    if(a != p) {
        s = nb * my_compute_power_rec(nb - 1);
        return(s);
    }
    else {
        return(0);
    }
}
