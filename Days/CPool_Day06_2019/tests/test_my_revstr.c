/*
** EPITECH PROJECT, 2019
** test_my_revstr.c
** File description:
** task04
*/


#include <criterion/criterion.h>

char *my_revstr(char *str);

Test (my_revstr, reverse_characteres)
{
    char str[6] = {"Hello"};

    cr_assert_str_eq(my_revstr(str),"olleH");
}
