/*
** EPITECH PROJECT, 2019
** rush2
** File description:
** task01
*/

#include "my.h"

char *my_capitalize(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    }
    return (str);
}

char char_capital(char c)
{
    if (c >= 'A' && c <= 'Z')
        c += 32;
    return (c);
}

int count_letters(char *str)
{
    int letters = 0;

    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] >= 'a' && str[i] <= 'z')
            letters++;
    return (letters);
}

int rush2(int ac, char **av)
{
    char *str = my_capitalize(av[1]);
    int letters = count_letters(str);
    int count;
    char c;

    for (int j = 2; j < ac; j++) {
        count = 0;
        c = char_capital(av[j][0]);
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] == c)
                count++;
        }
        display(av[j][0], count, letters);
    }
    find_country(str, letters);
    return (0);
}
