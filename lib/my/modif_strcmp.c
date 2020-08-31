/*
** EPITECH PROJECT, 2020
** tetris
** File description:
** compares two parts of a word and return 0 if they are the same
** you stop the parts of word with the char c
*/

int modif_strcmp(char const *s1, char const *s2, char c)
{
    int i = 0;

    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') {
        if ((s1[i] - s2[i] == 0) && (s1[i] == c || s2[i] == c))
            return (0);
        i++;
    }
    return (-1);
}
