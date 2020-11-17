/*
** EPITECH PROJECT, 2019
** Assignment 4
** File description:
** rush1-4
*/

int error(int x, int y)
{
    if(x <= 0 || y <= 0) {
        write(2, "Invalid size", 13);
    }
    return (0);
}

void colone(int x, int y)
{
    int c;
    int e;
    int l;

    y--;
    l = x -1;
    for (c= 1; y !=  c; c++) {
        write(1, "B", 1);
        if(x > 1) {
            for (e = 1; e != l; e++) {
                write(1, " ", 1);
            }
        }
        if(x != 1) {
            write(1, "B", 1);
        }
        write(1, "\n", 1);
    }
}

int line(int x, int c)
{
    int l;

    x--;
    if (c == 1) {
        write(1, "A", 1);
        for (l = 1; x != l; l++) {
            write(1, "B", 1);
        }
        write(1, "C", 1);
        write(1, "\n", 1);
    }
    if (c != 1) {
        write(1, "A", 1);
        for (l = 1; x != l; l++) {
            write(1, "B", 1);
        }
        write(1, "C", 1);
        write(1, "\n", 1);
    }
    return (0);
}

void execption(int x)
{
    int l;

    for (l = 0; x != l; l++) {
        write(1, "B", 1);
    }
    write(1, "\n", 1);
}

void rush(int x, int y)
{
    error(x, y);
    if(x > 1 && y > 1) {
        line(x, 1);
        colone(x, y);
        line(x, 2);
    }
    if(x == 1 && y != 1) {
        write(1, "B", 1);
        write(1, "\n", 1);
        colone(x, y);
        write(1, "B", 1);
        write(1, "\n", 1);
    }
    if(y == 1 && x != 1) {
        execption(x);
    }
    if(x == 1 && y == 1) {
        write(1, "B", 1);
        write(1, "\n", 1);
    }
}
