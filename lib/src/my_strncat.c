/*
** EPITECH PROJECT, 2026
** my_strncat.c
** File description:
** strncat
*/

#include "my.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int len = my_strlen(dest);
    int i = 0;

    while (i < nb && src[i] != '\0') {
        dest[len + i] = src[i];
        i++;
    }
    dest[len + i] = '\0';
    return dest;
}
