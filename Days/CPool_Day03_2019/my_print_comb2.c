/*
** EPITECH PROJECT, 2019
** my_print_comb2
** File description:
** task06
*/

int my_print_comb2(void)
{
    int u = 49;
    int d = 48;
    int c = 48;
    int m = 48;

    my_putchar('0');
    my_putchar('0');
    my_putchar(' ');
    my_putchar('0');
    my_putchar('1');
    
    while (m != 58) {
        u++;
        if(u == 58) {
            d++;
            u = 48;
        }
        if(d == 58) {
            c++;
            d = 48;
        }
        if(c == 58) {
            m++;
            c = 48;
        }
        if(m < d || (c < u && m == d)) {
            my_putchar(',');
            my_putchar(' ');
            my_putchar(m);
            my_putchar(c);
            my_putchar(' ');
            my_putchar(d);
            my_putchar(u);
        }
    }
    my_putchar('\n');
    return (0);
}
