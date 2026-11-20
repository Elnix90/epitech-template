/*
** EPITECH PROJECT, 2026
** my_sort_int_array_test.c
** File description:
** tests_my_sort_int_array.c
*/

#include "../src/include/my.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(my_sort_int_array, sort_basic_array)
{
    int array[] = { 5, 2, 9, 1, 6 };
    int expected[] = { 1, 2, 5, 6, 9 };

    my_sort_int_array(array, 5);
    cr_assert_arr_eq(array, expected, 5 * sizeof(int));
}

Test(my_sort_int_array, already_sorted)
{
    int array[] = { 1, 2, 3, 4, 5 };
    int expected[] = { 1, 2, 3, 4, 5 };

    my_sort_int_array(array, 5);
    cr_assert_arr_eq(array, expected, 5 * sizeof(int));
}

Test(my_sort_int_array, reverse_sorted)
{
    int array[] = { 5, 4, 3, 2, 1 };
    int expected[] = { 1, 2, 3, 4, 5 };

    my_sort_int_array(array, 5);
    cr_assert_arr_eq(array, expected, 5 * sizeof(int));
}

Test(my_sort_int_array, with_duplicates)
{
    int array[] = { 3, 1, 3, 1, 2 };
    int expected[] = { 1, 1, 2, 3, 3 };

    my_sort_int_array(array, 5);
    cr_assert_arr_eq(array, expected, 5 * sizeof(int));
}

Test(my_sort_int_array, with_negatives)
{
    int array[] = { -5, 3, -1, 0, 10 };
    int expected[] = { -5, -1, 0, 3, 10 };

    my_sort_int_array(array, 5);
    cr_assert_arr_eq(array, expected, 5 * sizeof(int));
}

Test(my_sort_int_array, single_element)
{
    int array[] = { 42 };

    my_sort_int_array(array, 1);
    cr_assert_eq(array[0], 42);
}

Test(my_sort_int_array, int_min_and_max)
{
    int array[] = { 2147483647, -2147483647 - 1, 0 };
    int expected[] = { -2147483647 - 1, 0, 2147483647 };

    my_sort_int_array(array, 3);
    cr_assert_arr_eq(array, expected, 3 * sizeof(int));
}
