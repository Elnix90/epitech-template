/*
** EPITECH PROJECT, 2026
** my_str_isalpha.c
** File description:
** my_str_isalpha
*/

#include "my.h"

int my_str_isalpha(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (!my_isalpha(str[i]))
            return 0;
    return 1;
}
