/*
** EPITECH PROJECT, 2019
** tree
** File description:
** tree
*/

#include <unistd.h>

void my_putchar(char c){
    write(1, &c, 1);
}

int g_columns(int size)
{
    int i_size = 1;
    int i_lines;
    int m_lines;
    int columns = 1;

    while (i_size < size) {
        m_lines = i_size + 3;
        i_lines = 1;
        while (i_lines < m_lines) {
            columns = columns + 2;
            i_lines = i_lines + 1;
        }
        i_size = i_size + 1;
        columns = columns - (i_size / 2) * 2;
    }
    return (columns);
}

void trunk(int size, int t_m_columns, int m_lines, int i_lines)
{
    int columns;
    int i_columns;

    if (size % 2 == 1)
        columns = size;
    else
        columns = size + 1;
    while (i_lines <= m_lines) {
        i_columns = 1;
        while (i_columns < (t_m_columns - columns + 2) / 2) {
            my_putchar(' ');
            i_columns = i_columns + 1;
        }
        for (i_columns = 1; i_columns <= columns; i_columns = i_columns + 1) {
            my_putchar('|');
        }
        my_putchar('\n');
        i_lines = i_lines + 1;
    }
}

int leaves(int t_m_columns, int columns, int m_columns)
{
    int i_columns;

    i_columns = 1;
    while (i_columns < (t_m_columns - columns + 2) / 2) {
        my_putchar(' ');
        i_columns = i_columns + 1;
    }
    i_columns = 1;
    while (i_columns <= columns && columns <= m_columns) {
        my_putchar('*');
        i_columns = i_columns + 1;
    }
    my_putchar('\n');
    return (columns + 2);
}

void tree(int size)
{
    int m_lines;
    int t_m_lines;
    int columns;
    int i_lines;
    int i_size = 1;

    if (size <= 0)
        return;
    t_m_lines = size + 3;
    while (i_size <= size) {
        columns = g_columns(i_size);
        m_lines = i_size + 3;
        i_lines = 1;
        while (i_lines <= m_lines) {
            columns = leaves(g_columns(size) + t_m_lines * 2 - 2, columns, columns * m_lines * 2);
            i_lines = i_lines + 1;
        }
        i_size = i_size + 1;
    }
    trunk(size, g_columns(size) + t_m_lines * 2 - 2, size, 1);
}

int main(void)
{
    tree(5);
    return(0);
}
