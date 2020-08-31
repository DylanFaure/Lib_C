/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** compare str1 with str2 and return 0 if they are the same
*/

#include "my.h"

int main(void)
{
    char *str1 = "je suis str1";
    char *str2 = "je suis str1";
    int nb = 0;
    
    nb = my_strcmp(str1, str2);
    my_put_nbr(nb);
    return (0);
}
