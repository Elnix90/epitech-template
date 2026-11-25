/*
** EPITECH PROJECT, 2026
** wrap_malloc.c
** File description:
** Custom malloc wrapper to provide tests
*/

#include <stdbool.h>
#include <stddef.h>

extern void *__real_malloc(size_t);
extern void *__real_realloc(void *, size_t);

static int fail_at = -1;
static int alloc_count = -1;

void mock_alloc_fail_at(int n)
{
    fail_at = n;
    alloc_count = -1;
}

void reset_alloc_fails(void)
{
    fail_at = -1;
    alloc_count = -1;
}

void *__wrap_malloc(size_t n)
{
    alloc_count++;
    if (fail_at >= 0 && alloc_count == fail_at)
        return NULL;
    return __real_malloc(n);
}

void *__wrap_realloc(void *ptr, size_t size)
{
    alloc_count++;
    if (fail_at >= 0 && alloc_count == fail_at)
        return NULL;
    return __real_realloc(ptr, size);
}
