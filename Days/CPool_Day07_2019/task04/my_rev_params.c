/*
** EPITECH PROJECT, 2019
** my_rev_params.c
** File description:
** task05
*/

void my_putchar(char c);

int main (int argc, char **argv)
{
    for (int i = 0; i < argc; i--) {
        my_putchar(argv[1]);
    }
    return (0);
}
