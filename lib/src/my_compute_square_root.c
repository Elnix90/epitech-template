/*
** EPITECH PROJECT, 2026
** my_compute_square_root.c
** File description:
** compute square root
*/

int my_compute_square_root(int nb)
{
    if (nb <= 0)
        return 0;
    for (int i = 1; i <= nb / i; i++) {
        if (i * i == nb)
            return i;
    }
    return 0;
}
