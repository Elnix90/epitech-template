/*
** EPITECH PROJECT, 2026
** my_is_alnum.c
** File description:
** is_alnum
*/

#include "../include/my.h"

int my_isalnum(char const c)
{
    return (c >= '0' && c <= '9') || my_isalpha(c);
}
