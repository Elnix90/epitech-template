/*
** EPITECH PROJECT, 2026
** free_char_array.c
** File description:
** Test for the free_char_array function
*/

#include "../include/utils.h"
#include <criterion/internal/assert.h>
#include <criterion/internal/test.h>
#include <stdio.h>

Test(free_user_line, null_is_a_noop)
{
    free_char_array(NULL);
}
