/*
** EPITECH PROJECT, 2019
** strlen
** File description:
** count car in string
*/

int my_strlen(char const *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++);
    return (i);
}
