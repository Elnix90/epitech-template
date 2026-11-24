/*
** EPITECH PROJECT, 2026
** my_showstr.c
** File description:
** showstr
*/

#include "my.h"

int my_showstr(char const *str)
{
    char const *hex = "0123456789abcdef";

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= ' ' && str[i] <= '~') {
            my_putchar(str[i]);
        } else {
            my_putchar('\\');
            my_putchar(hex[(unsigned char)str[i] >> 4]);
            my_putchar(hex[(unsigned char)str[i] & 15]);
        }
    }
    return 0;
}
