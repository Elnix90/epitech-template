/*
** EPITECH PROJECT, 2026
** mycompute_power_rec.c
** File description:
** my_compute_power
*/

int my_compute_power_rec(int nb, int p)
{
    if (p == 1)
        return nb;
    return nb * my_compute_power_rec(nb, p - 1);
}
