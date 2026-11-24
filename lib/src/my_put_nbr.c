/*
** EPITECH PROJECT, 2026
** my_put_nbr.c
** File description:
** My implementatino of putnrb
*/

#include "my.h"

int my_put_nbr(int nb)
{
    long n = nb;

    if (n < 0) {
        my_putchar('-');
        n = -n;
    }
    if (n >= 10)
        my_put_nbr((int)(n / 10));
    my_putchar((char)(n % 10 + '0'));
    return 0;
}
