/*
** EPITECH PROJECT, 2026
** my_putchar.c
** File description:
** my implementation of putchar
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
