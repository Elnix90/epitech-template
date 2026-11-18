/*
** EPITECH PROJECT, 2026
** my_strcmp.c
** File description:
** strcmp
*/

#include "include/my.h"

int my_strcmp(char const *s1, char const *s2)
{
    int size_a = my_strlen(s1);
    int size_b = my_strlen(s2);

    if (size_a != size_b)
        return 0;
    for (int i = 0; i < size_a; i++) {
        if (s1[i] != s2[i])
            return 0;
    }
    return 1;
}
