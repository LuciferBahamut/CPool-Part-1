/*
** EPITECH PROJECT, 2019
** my_strdup.c
** File description:
** task01
*/

#include <stdlib.h>

void my_putchar(char c);

char *my_strdup(char const *src)
{
    int i = 0 ;
    int init = 0;
    char *dest;

    while (i != '\0') {
        i++;
    }
    dest = malloc(i++);
    while (init < i) {
        dest[init] = src[init];
        init++;
    }
    dest[init] = '\0';
    my_putchar('\n');
    return (dest);
}
