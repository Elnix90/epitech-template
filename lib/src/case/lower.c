/*
** EPITECH PROJECT, 2026
** lower.c
** File description:
** lower.c
*/

void lower(char *c)
{
    if (*c >= 'A' && *c <= 'Z')
        *c += 'a' - 'A';
}
