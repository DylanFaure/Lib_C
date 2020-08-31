/*
** EPITECH PROJECT, 2020
** add_char.c
** File description:
** add char at the end of the string
*/

#include "my.h"
#include <stddef.h>
#include <stdlib.h>

int calc_size_str(char *str);

char *add_char(char *str, char letter)
{
    int size_str = calc_size_str(str);
    char *newstr = NULL;
    int count = 0;

    if (str == NULL) {
        newstr = malloc(sizeof(char) * 2);
        newstr[0] = letter;
        newstr[1] = '\0';
    }
    newstr = malloc(sizeof(char) * (size_str + 2));
    for (; count != size_str; count++) {
        newstr[count] = str[count];
    }
    newstr[count] = letter;
    newstr[count + 1] = '\0';
    return (newstr);
}
