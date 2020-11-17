/*
** EPITECH PROJECT, 2019
** my_revstr.c
** File description:
** task03
*/

char *my_revstr(char *str)
{
    int i = 0;
    int count = 0;
    int  b = 0;
    char *stock = str;

    while (str[count] != '\0') {
        count++;
    }
    count--;
    while (b < count) {
        i = stock[b];
        str[b] = stock[count];
        str[count] = i;
        i++;
        count--;
        b++;
    }
    return(str);
}
