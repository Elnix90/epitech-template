/*
** EPITECH PROJECT, 2026
** my_is_prime.c
** File description:
** my_is_prime
*/

int my_is_prime(int nb)
{
    if (nb < 2)
        return 0;
    if (nb == 2)
        return 1;
    if (nb % 2 == 0)
        return 0;
    for (int i = 3; i <= nb / i; i += 2) {
        if (nb % i == 0)
            return 0;
    }
    return 1;
}
