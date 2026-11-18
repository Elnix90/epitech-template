/*
** EPITECH PROJECT, 2026
** my_strlowcase.c
** File description:
** strlowcase
*/

#include "../include/my.h"

char *my_strlowcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        lower(&str[i]);
    return str;
}
