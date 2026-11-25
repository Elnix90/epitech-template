/*
** EPITECH PROJECT, 2026
** free_char_array_test.c
** File description:
** Test for the free_char_array function
*/

#include "../include/utils.h"
#include <criterion/internal/assert.h>
#include <criterion/internal/test.h>
#include <stdio.h>
#include <stdlib.h>

Test(free_char_array, works_normally)
{
    int n = 4;
    char **arr = calloc(n + 1, sizeof(char *));

    cr_assert_not_null(arr);
    for (int i = 0; i < n; i++) {
        arr[i] = calloc(1, sizeof(char));
        cr_assert_not_null(arr[i]);
    }
    free_char_array(arr);
}

Test(free_char_array, null_is_a_noop)
{
    free_char_array(NULL);
}
