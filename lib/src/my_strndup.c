/*
** EPITECH PROJECT, 2026
** my_strndup.c
** File description:
** strndup
*/

#include <stdlib.h>

char *my_strndup(const char *str, int n)
{
    char *res = NULL;
    int i = 0;

    if (n <= 0)
        return NULL;
    while ((str[i] != '\0') && (i < n))
        i++;
    res = malloc(sizeof(char) * (i + 1));
    if (!res)
        return NULL;
    for (int j = 0; j < i; j++)
        res[j] = str[j];
    res[i] = '\0';
    return res;
}
