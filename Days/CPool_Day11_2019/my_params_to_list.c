/*
** EPITECH PROJECT, 2019
** my_params_to_list.c
** File description:
** task01 day11
*/

#include "mylist.h"

linked_list_t *my_params_to_list(int ac, char *const *av)
{
    int count = ac;
    char *tempo;

    struct list * first = malloc(sizeof(char));
    first -> data = av[count];
    while (count >= 0) {
        first -> next = 0;
        struct list *tempo = malloc(sizeof(char));
        tempo -> data -> av[count];
        tempo -> next -> first;
        first = tempo;
        tempo = NULL;
    }
}
