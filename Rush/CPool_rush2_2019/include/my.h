/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** my.h
*/

#include <stddef.h>
#include "my_struct.h"

#ifndef MY_H_
#define MY_H_

#define ABS(value) ((value < 0) ? (-(value)) : value)

int error_handling(int ac, char **av);
int my_strlen(char const *str);
int rush2(int ac, char **av);
void my_putchar(char c);
int my_put_nbr(int nb);
void display(char c, int count, int lines);
int my_putstr(char const *str);
int find_country(char *str, int letters);
country_t others_letters(char c, country_t country, int letters);

#endif