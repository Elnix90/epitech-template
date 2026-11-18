/*
** EPITECH PROJECT, 2026
** my_is_alnum.c
** File description:
** is_alnum
*/

int my_isalpha(char const c)
{
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}
