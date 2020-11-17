/*
** EPITECH PROJECT, 2019
** my_strlen.c
** File description:
** task03
*/

int my_put_nbr(int s)
{
    if(s / 10) {
        my_put_nbr(nb/10);
    }
    my_putchar(s %10 + '0');
    return (s);
}

int my_strlen(char const *str)
{
    int s;

    while (str[s] != '\0') {
        s++;
    }
    my_put_nbr(s);
    return (0);
}
