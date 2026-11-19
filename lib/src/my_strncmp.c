/*
** EPITECH PROJECT, 2026
** my_strncmp.c
** File description:
** strncmp
*/

#include <stdbool.h>

bool my_strncmp(char const *s1, char const *s2, int n)
{
    for (int i = 0; i < n; i++) {
        if (s1[i] != s2[i] || s1[i] == '\0')
            return false;
    }
    return true;
}
