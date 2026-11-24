/*
** EPITECH PROJECT, 2026
** my_revstr.c
** File description:
** revstr
*/

#include "my.h"

char *my_revstr(char *str)
{
    int len = my_strlen(str);
    int mid = len / 2;
    char tmp;

    for (int i = 0; i < mid; i++) {
        tmp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = tmp;
    }
    return str;
}
