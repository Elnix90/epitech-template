/*
** EPITECH PROJECT, 2026
** my_strstr.c
** File description:
** strstr
*/

#include "my.h"

char *my_strstr(char *str, char const *to_find)
{
    int len = my_strlen(to_find);
    int j;

    for (int i = 0; str[i] != '\0'; i++) {
        j = 0;
        while (j < len && str[i + j] == to_find[j])
            j++;
        if (j == len)
            return &str[i];
    }
    return 0;
}
