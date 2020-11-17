/*
** EPITECH PROJECT, 2019
** my_strlen.c
** File description:
** my_strlen.c
*/

int my_strlen(char const *str)
{
    int i;
    
    for (; str[i] != '\0'; i++);
    return (i);
}
