/*
** EPITECH PROJECT, 2026
** my_strupcase.c
** File description:
** strupcase
*/

#include "my.h"
char *my_strupcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        upper(&str[i]);
    return str;
}
