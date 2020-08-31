/*
** EPITECH PROJECT, 2020
** my_strcmp.c
** File description:
** compare str1 with str2 and return 0 if they are the same
*/

#include "my.h"

int my_strcmp(char *str1, char *str2)
{
    int a = 0;

    while (str1[a]) {
        if (str1[a] != str2[a])
            return (-1);
        a++;
    }
    if (str1[a] != str2[a])
        return (-1);
    return (0);
}
