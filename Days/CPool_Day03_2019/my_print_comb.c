/*
** EPITECH PROJECT, 2019
** my_print_comb
** File description:
** task05
*/

int my_print_comb(void)
{
    int u = 48;
    int d = 48;
    int c = 48;
    
    while (c != 55) {
        u++;
        if(u == 58) {
            d++;
            u = 48;
        }
        if (d == 58) {
            c++;
            d = 48;
        }
        if(u != c && u != d && d != c && c < d && d < u) {
        my_putchar(c);
        my_putchar(d);
        my_putchar(u);
        my_putchar(',');
        my_putchar(' ');
        }
    }
    my_putchar(55);
    my_putchar(56);
    my_putchar(57);
    my_putchar('\n');
    return (0);
}
