/*
** EPITECH PROJECT, 2019
** Assignment 1
** File description:
** rush1-1
*/

int error(int x, int y)
{
    if(x <= 0 || y <= 0 ) {
        write(2, "Invalid size\n", 13);
    }
    return (0);
}

void line(int x)
{
    int l;

    x--;
    write(1, "o", 1);
    for (l = 1; x != l; l++) {
        write(1, "-", 1);
    }
    write(1, "o", 1);
    write(1, "\n", 1);
}

void colone(int x, int y)
{
    int c;
    int e;
    int l;

    y--;
    l = x -1;
    for (c= 1; y !=  c; c++) {
        write(1, "|", 1);
        if(x > 1) {
            for (e = 1; e != l; e++) {
                write(1, " ", 1);
            }
        }
        if(x != 1) {
            write(1, "|", 1);
        }
        write(1, "\n", 1);
    }
}

void rush(int x, int y)
{
    error(x, y);
    if(x > 1 && y > 1) {
        line(x);
        colone(x, y);
        line(x);
    }
    if(x == 1 && y != 1) {
        write(1, "o", 1);
        write(1, "\n", 1);
        colone(x, y);
        write(1, "o", 1);
        write(1, "\n", 1);
    }
    if(y == 1 && x != 1) {
        line(x);
    }
    if(x == 1 && y == 1) {
        write(1, "o", 1);
        write(1, "\n", 1);
    }
}
