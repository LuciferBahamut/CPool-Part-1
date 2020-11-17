 /*
** EPITECH PROJECT, 2019
** concat_params.c
** File description:
** task02
*/

#include <stdlib.h>

char *concat_params(int argc, char **argv)
{
    char *dest;
    int na = 0;
    int nc = 0;
    int c = 0;

    dest = malloc(sizeof(char) * (argc + 1));
    for(na = 0; argv[na] != argv[argc]; na++) {
        for(nc = 0; argv[na][nc] != '\0'; nc++) {
            dest[c] = argv[na][nc];
            c++;
        }
        dest[c] = '\n';
        c++;
    }
    return (dest);
}
