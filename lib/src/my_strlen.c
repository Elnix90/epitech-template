/*
** EPITECH PROJECT, 2026
** my_strlen.c
** File description:
** strlen
*/

int my_strlen(char const *txt)
{
    int size = 0;

    while (txt[size] != '\0')
        size++;
    return size;
}
