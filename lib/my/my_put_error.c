/*
** EPITECH PROJECT, 2019
** my_put_error.c
** File description:
** print a string in the error output
*/

#include <unistd.h>

int my_strlen(char const *str);

void my_put_error(char const *str)
{
    write(2, str, my_strlen(str));
}
