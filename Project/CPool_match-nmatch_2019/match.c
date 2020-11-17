/*
** EPITECH PROJECT, 2019
** match
** File description:
** match nmatch
*/

#include "my.h"
#include <stdio.h>

int match(char const *s1, char const *s2)
{
    if (my_strlen(s1) != my_strlen(s2)) {
        return (0);
    }
    for (int i = 0; i < my_strlen(s1); i++) {
        if (s1[i] != s2[i]) {
            return (0);
        }
    }
    return (1);
}

int main(int ac, char **av)
{
    match(av[1], av[2]);
}
