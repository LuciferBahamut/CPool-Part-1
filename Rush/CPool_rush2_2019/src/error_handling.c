/*
** EPITECH PROJECT, 2019
** error_handling
** File description:
** error handling
*/

#include "my.h"

int verif_char(char *str)
{
    if (my_strlen(str) != 1)
        return (84);
    if ((str[0] < 'a' || str[0] > 'z') && (str[0] < 'A' || str[0] > 'Z'))
        return (84);
    return (0);
}

int error_handling(int ac, char **av)
{
    if (ac < 3)
        return (84);
    for (int i = 1; i < ac; i++)
        if (av[i] == NULL)
            return (84);
    for (int i = 2; i < ac; i++) {
        if (verif_char(av[i]) == 84)
            return (84);
    }
    return (0);
}