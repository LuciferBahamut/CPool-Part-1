/*
** EPITECH PROJECT, 2019
** main rush
** File description:
** main rush
*/

#include "my.h"

int main(int ac, char **av)
{
    if (error_handling(ac, av) == 84)
        return (84);
    rush2(ac, av);
    return (0);
}