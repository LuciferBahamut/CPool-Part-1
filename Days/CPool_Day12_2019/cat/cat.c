/*
** EPITECH PROJECT, 2019
** cat.c
** File description:
** cat.c
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <my.h>
#include <unistd.h>

int main(int ac, char **av)
{
    int fd;
    char buffer[240000];
    int size;

    for (int i = 1; i < ac; i++) { 
        fd = open(av[i], O_RDONLY);
        if (fd == -1)
            return (84);
    }
    size = read(fd, buffer, 239999);
    if (size == -1)
        return (84);
    write(1, buffer, size);
    close (fd);
    return (0);
}
