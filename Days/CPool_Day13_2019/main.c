/*
** EPITECH PROJECT, 2019
** graphic window
** File description:
** day13Task02
*/

#include <SFML/Graphics/RenderWindow.h>
#include <stdlib.h>

sfRenderWindow *createMyWindow (int width, int height)
{
    sfRenderWindow *window;
    sfVideoMode vm;

    vm.width = width;
    vm.height = height;
    vm.bitsPerPixel = 32;
    window = sfRenderWindow_create(vm, "MyWindow", sfDefaultStyle, NULL);

    return (window);

}

int main(void)
{
    sfRenderWindow *window;

    window = createMyWindow(800, 600);
    while (sfRenderWindow_isOpen(window)) {
        sfRenderWindow_display(window);
    }
    sfRenderWindow_destroy(window);

    return (0);
}
