My C Library

- Use main.c to test the fonctions
- After enter your test, use "make re" command and "./test_lib" command.

List of the test :

- add_char(char*str, char letter) > This function add a char as a string (at the end).
To use it, Copy :

int main(void)
{
    char *str = "i want an A here : ";

    add_char(str, 'A');
    my_putstr(str);
    return (0);
}

* Use main.c to test the fonctions
* After enter your test, use "make re" command and "./test_lib" command.

==================================================================================================================

- add_link(char *str, char *str_add) > This function add link (at the start of the string).
To use it, Copy :

int main(void)
{
    char *str = "google.com";

    add_link(str, "https://);
    my_putstr(str);
    return (0);
}

* Use main.c to test the fonctions
* After enter your test, use "make re" command and "./test_lib" command.

==================================================================================================================

- calc_size(char const *filepath > This function calc size of a file.
To use it, Copy :

int main(int ac, char **av)
{
    int nb = calc_size(av[1]);

    my_put_nbr(nb);
}

* Use main.c to test the fonctions
* After enter your test, use "make re" command and "./test_lib test/calc_size_test" command.

==================================================================================================================

- calc_size_str(char *str) > This function calc size of string.
To use it, Copy :

int main(void)
{
    char *str = "size_6"
    int nb = calc_size_str(av[1]);
    my_put_nbr(nb);
    return (0);
}

* Use main.c to test the fonctions
* After enter your test, use "make re" command and "./test_lib" command.

==================================================================================================================
==================================================================================================================
==================================================================================================================
