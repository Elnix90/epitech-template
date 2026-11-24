/*
** EPITECH PROJECT, 2026
** my_strcat.c
** File description:
** strcat
*/

#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    my_strcpy(dest + my_strlen(dest), src);
    return dest;
}
