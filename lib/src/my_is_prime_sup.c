/*
** EPITECH PROJECT, 2026
** my_is_prime_sup.c
** File description:
** my is prime sup
*/

#include "my.h"

int my_find_prime_sup(int nb)
{
    if (nb < 2)
        return 2;
    while (my_is_prime(nb) == 0)
        nb++;
    return nb;
}
