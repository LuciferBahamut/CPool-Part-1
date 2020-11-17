/*
** EPITECH PROJECT, 2019
** my_strcpy.c
** File description:
** task01
*/

void my_putchar(char c);

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;
    for (src[i] != '\0') {
        my_putchar(dest[i]);
        dest[1] = src[1];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
