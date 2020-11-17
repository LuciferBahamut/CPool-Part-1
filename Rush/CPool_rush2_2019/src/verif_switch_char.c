/*
** EPITECH PROJECT, 2019
** verif_switch_char
** File description:
** verif switch char
*/

#include "my_struct.h"
#include "my.h"

country_t others_letters2(char c, country_t country, int letters)
{
    switch(c) {
    case 'd' : country.d += 1;
        break;
    case 'h' : country.h += 1;
        break;
    case 'l' : country.ll += 1;
        break;
    }
    country.a = ((country.a * 10000) / letters);
    country.e = ((country.e * 10000) / letters);
    country.i = ((country.i * 10000) / letters);
    country.o = ((country.o * 10000) / letters);
    country.t = ((country.t * 10000) / letters);
    country.s = ((country.s * 10000) / letters);
    country.n = ((country.n * 10000) / letters);
    country.r = ((country.r * 10000) / letters);
    country.d = ((country.d * 10000) / letters);
    country.h = ((country.h * 10000) / letters);
    country.ll = ((country.ll * 10000) / letters);
    return (country);
}

country_t others_letters(char c, country_t country, int letters)
{
    switch(c) {
    case 'a' : country.a += 1;
        break;
    case 'e' : country.e += 1;
        break;
    case 'i' : country.i += 1;
        break;
    case 'o' : country.o += 1;
        break;
    case 't' : country.t += 1;
        break;
    case 's' : country.s += 1;
        break;
    case 'n' : country.n += 1;
        break;
    case 'r' : country.r += 1;
        break;
    }
    country = others_letters2(c, country, letters);
    return (country);
}
