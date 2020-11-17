/*
** EPITECH PROJECT, 2019
** my_strncat.c
** File description:
** task03
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int i;
    int count = 0;
    char dest_len;

    while (dest[count] != '\0') {
        count++;
    }
    dest_len = count;
    for (i = 0; i < nb && src[i] != '\0'; i++)
    {
        dest[dest_len + i] = src[i];
        count++;
    }
    dest[dest_len + i] = '\0';

    return (dest);
}
