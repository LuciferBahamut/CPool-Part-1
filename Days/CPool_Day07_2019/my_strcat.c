/*
** EPITECH PROJECT, 2019
** my_strcat.c
** File description:
** task02
*/

char *my_strcat(char *dest, char const *src)
{
    int i;
    int count = 0;

    while (dest[count] != '\0') {
       count++;
    }
    for (i = 0; src[i] != '\0'; i++) {
        dest[count] = src[i];
        count++;
    }
    dest[count] = '\0';

    return(dest);
}
