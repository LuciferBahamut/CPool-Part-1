/*
** EPITECH PROJECT, 2019
** my_strcpy.c
** File description:
** task02
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i;
    int count =0;

    while (src[count] != '\0') {
        count++;
    }
    for (i = 0; i < n; i++) {
        dest[i] = src[i];
    }
    while(i > count) {
        dest[i - 1] = '\0';
    }
    dest[i] = '\0';
    return (dest);
}
