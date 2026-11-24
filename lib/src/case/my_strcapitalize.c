/*
** EPITECH PROJECT, 2026
** my_strcapitalize.c
** File description:
** strcapitalize
*/

#include "my.h"

char *my_strcapitalize(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (i == 0 || !my_isalnum(str[i - 1]))
            upper(&str[i]);
        else
            lower(&str[i]);
    }
    return str;
}
