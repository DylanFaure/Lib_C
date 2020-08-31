/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** my.h
*/

#ifndef MY_H_
#define MY_H_

//LIB
int my_getnbr(char const *str);
int my_strcmp(char *str1, char *str2);
void my_putchar(char c);
void my_putstr(char *str);
void my_put_nbr(int nb);
char *my_inttostr(int nb, char *s_nb);
int my_compute_power_it(int nb, int p);
int calc_size(char const *filepath);
int calc_size_str(char *str);
void my_put_error(char const *str);
int my_strlen(char const *str);
char *add_char(char *str, char char_add);
char *add_link(char *str, char *str_add);
int charisnb(char letter);
void my_put_big_hex(int nb);
void my_put_hex(int nb);
void my_put_bin(int nb);
void my_put_oct(int nb);
int my_intlenforbin(int nb);
int my_intlen(int nb);
int verif_env(char **env);
int modif_strcmp(char const *s1, char const *s2, char c);
char **my_str_to_word_array(char **info_array, char const *str, char separator);

#endif
