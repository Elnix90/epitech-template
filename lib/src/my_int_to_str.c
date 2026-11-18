/*
** EPITECH PROJECT, 2026
** my_int_to_str.c
** File description:
** Converts an int to a str
*/

#include "include/my.h"
void my_int_to_str(int n, char *str)
{
    int i = 0;
    int sign = n;

    if (n < 0)
        n = -n;
    do {
        str[i] = n % 10 + '0';
        i++;
        n /= 10;
    } while (n > 0);
    if (sign < 0) {
        str[i] = '-';
        i++;
    }
    str[i] = '\0';
    my_revstr(str);
}
