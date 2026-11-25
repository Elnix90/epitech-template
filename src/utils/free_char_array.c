/*
** EPITECH PROJECT, 2026
** free_char_array.c
** File description:
** Takes an array of characters and frees all the sub pointers in it
*/

#include <stdlib.h>

void free_char_array(char **arr)
{
    if (!arr)
        return;
    for (int i = 0; arr[i]; i++)
        free(arr[i]);
    free(arr);
}
