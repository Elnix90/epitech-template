/*
** EPITECH PROJECT, 2026
** my_strndup_test.c
** File description:
** Tests for my_strndup
*/

#include "../include/my.h"
#include <criterion/criterion.h>
#include <stdlib.h>

Test(my_strndup, copies_at_most_n_characters)
{
    char *res = my_strndup("hello world", 5);

    cr_assert_not_null(res);
    cr_assert_str_eq(res, "hello");
    free(res);
}

Test(my_strndup, stops_at_end_of_string_when_n_is_larger)
{
    char *res = my_strndup("abc", 10);

    cr_assert_not_null(res);
    cr_assert_str_eq(res, "abc");
    free(res);
}

Test(my_strndup, empty_string)
{
    char *res = my_strndup("", 5);

    cr_assert_not_null(res);
    cr_assert_str_eq(res, "");
    free(res);
}

Test(my_strndup, zero_or_negative_n_returns_null)
{
    cr_assert_null(my_strndup("abc", 0));
    cr_assert_null(my_strndup("abc", -3));
}
