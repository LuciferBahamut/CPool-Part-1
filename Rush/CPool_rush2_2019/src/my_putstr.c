/*
** EPITECH PROJECT, 2019
** putstr
** File description:
** display caracteres of a string one by one
*/

void my_putchar(char c);

int my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        my_putchar(str[i]);
    return (0);
}
