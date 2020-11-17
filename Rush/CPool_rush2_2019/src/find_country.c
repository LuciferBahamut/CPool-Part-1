/*
** EPITECH PROJECT, 2019
** find_country
** File description:
** find country rush2
*/

#include "my.h"
#include "my_struct.h"

void last_country(int i, int german, int spanish)
{
    if (i == german)
        my_putstr("=> German");
    if (i == spanish)
        my_putstr("=> Spanish");
}

int calc_country(int *tab, country_t country)
{
    int result = 0;

    ((country.a > 0) ? result = ABS((country.a - tab[0])) : 0);
    ((country.e > 0) ? result = result + ABS((country.e - tab[1])) : 0);
    ((country.i > 0) ? result = result + ABS((country.i - tab[2])) : 0);
    ((country.o > 0) ? result = result + ABS((country.o - tab[3])) : 0);
    ((country.t > 0) ? result = result + ABS((country.t - tab[4])) : 0);
    ((country.s > 0) ? result = result + ABS((country.s - tab[5])) : 0);
    ((country.n > 0) ? result = result + ABS((country.n - tab[6])) : 0);
    ((country.r > 0) ? result = result + ABS((country.r - tab[7])) : 0);
    ((country.d > 0) ? result = result + ABS((country.d - tab[8])) : 0);
    ((country.h > 0) ? result = result + ABS((country.h - tab[9])) : 0);
    ((country.ll > 0) ? result = result + ABS((country.ll - tab[10])) : 0);
    return (result);
}

int prepare_country(country_t country, int i)
{
    int English[] = {816, 1270, 696, 750, 905, 632, 674, 598, 425, 609, 402};
    int French[] = {763, 1471, 752, 579, 724, 794, 709, 669, 366, 73, 545};
    int German[] = {651, 1639, 655, 259, 615, 727, 977, 700, 507, 457, 343};
    int Spanish[] = {1152, 1218, 624, 868, 463, 797, 671, 687, 501, 70, 496};

    country.english = calc_country(English, country);
    country.french = calc_country(French, country);
    country.german = calc_country(German, country);
    country.spanish = calc_country(Spanish, country);
    for (; i < country.english && i < country.french && i < country.german &&
             i < country.spanish; i++);
    if (i == country.english)
        my_putstr("=> English");
    if (i == country.french)
        my_putstr("=> French");
    last_country(i, country.german, country.spanish);
    return (0);
}

int find_country(char *str, int letters)
{
    country_t country;

    country.a = 0;
    country.e = 0;
    country.i = 0;
    country.o = 0;
    country.t = 0;
    country.s = 0;
    country.n = 0;
    country.r = 0;
    country.d = 0;
    country.h = 0;
    country.ll = 0;
    country.english = 0;
    country.french = 0;
    country.german = 0;
    country.spanish = 0;
    for (int i = 0; str[i] != '\0'; i++)
        country = others_letters(str[i], country, letters);
    return (prepare_country(country, 0));
}
