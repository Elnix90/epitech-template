/*
** EPITECH PROJECT, 2026
** my_getnbr.c
** File description:
** my_getnbr
*/

#include "include/my.h"
#include <limits.h>

int my_getnbr(char const *str)
{
    long nb = 0;
    int sign = 1;
    int i = 0;

    while (str[i] == '+' || str[i] == '-') {
        if (str[i] == '-')
            sign = -sign;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9') {
        nb = nb * 10 + (str[i] - '0');
        if (nb > INT_MAX)
            return 0;
        i++;
    }
    return (int)(sign * nb);
}
