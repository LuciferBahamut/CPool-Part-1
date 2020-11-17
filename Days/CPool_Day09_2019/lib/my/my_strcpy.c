/*
** EPITECH PROJECT, 2019
** my_strcpy.c
** File description:
** task01
*/

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    while (src[i] != '\0') {
        dest[1] = src[1];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
