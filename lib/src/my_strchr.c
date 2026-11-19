/*
** EPITECH PROJECT, 2026
** my_strchr.c
** File description:
** my_strchr
*/

#include <stdlib.h>

const char *my_strchr(const char *s, char c)
{
    for (int i = 0;; i++) {
        if (s[i] == c)
            return &s[i];
        if (s[i] == '\0')
            return NULL;
    }
}
