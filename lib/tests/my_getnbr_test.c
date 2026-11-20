/*
** EPITECH PROJECT, 2026
** my_getnbr_test.c
** File description:
** my_getnbr tests
*/

#include "../src/include/my.h"
#include <criterion/criterion.h>

Test(unit, my_getnbr_returns_correct_value)
{
    cr_assert_eq(my_getnbr("+---+--++---+---+---+-42"), -42);
    cr_assert_eq(my_getnbr("42a43"), 42);
    cr_assert_eq(my_getnbr("1100000000000000000000042"), 0);
    cr_assert_eq(my_getnbr("-100000000000000000000042"), 0);
}
