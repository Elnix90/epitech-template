/*
** EPITECH PROJECT, 2026
** upper.c
** File description:
** upper.c
*/

void upper(char *c)
{
    if (*c >= 'a' && *c <= 'z')
        *c -= 'a' - 'A';
}
