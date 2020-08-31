My C Library

- Use main.c to test the functions

List of the test :

- char *add_char(char *str, char letter) > This function add a char as a string (at the end).
To use it, Copy :

int main(void)
{
    char *str = "i want an A here : ";
    add_char(str, 'A');
    my_putstr(str);
    return (0);
}

* After enter your test, use "make re" command and "./test_lib" command.

====================================================================================================

- char *add_link(char *str, char *str_add) > This function add link (at the start of the string).
To use it, Copy :

int main(void)
{
    char *str = "google.com";
    add_link(str, "https://);
    my_putstr(str);
    return (0);
}

* After enter your test, use "make re" command and "./test_lib" command.

====================================================================================================

- int calc_size(char const *filepath > This function calc size of a file.
To use it, Copy :

int main(int ac, char **av)
{
    int size = calc_size(av[1]);
    my_put_nbr(size);
    return (0);
}

* After enter your test, use "make re" command and "./test_lib test/calc_size_test" command

====================================================================================================

- int calc_size_str(char *str) > This function calc size of string.
To use it, Copy :

int main(void)
{
    char *str = "size_6"
    int nb = calc_size_str(av[1]);
    my_put_nbr(nb);
    return (0);
}

* After enter your test, use "make re" command and "./test_lib" command.

====================================================================================================

- int charisnb(char letter) > This function verify if char is number.
To use it, Copy :

int main(void)
{
    char letter = '0';
    int nb = charisnb(letter);
    my_put_nbr(nb);
}

* After enter your test, use "make re" command and "./test_lib" command.

====================================================================================================

- int my_strcmp(char *str1, char *str2) > This function verify if two string are the same.
To use it, Copy :

int main(void)
{
    char *str1 = "i like chocolate";
    char *str2 = "i like chocolate";
    int nb = my_strcmp(str1, str2);
    my_put_nbr(nb);
    return (0);
}

* After enter your test, use "make re" command and "./test_lib" command.

====================================================================================================

- int modif_strcmp(char const *s1, char const *s2, char c) > This function verify if two part of
string are the same.
To use it, Copy :

int main(void)
{
    char *str1 = "i like= chocolate";
    char *str2 = "i like= cookie";
    int nb = modif_strcmp(s1, s2, '=');
    my_put_nbr(nb);
    return (0);
}

* After enter your test, use "make re" command and "./test_lib" command.

====================================================================================================

- int my_compute_power_it(int nb, int p) > This function calculate nb power p.
To use it, Copy :

int main(void)
{
    int nb = 10;
    int p = 5;
    int result = my_compute_power_it(nb, p);
    my_put_nbr(result);
    return (0);
}

* After enter your test, use "make re" command and "./test_lib" command.

====================================================================================================

- int my_getnbr(char const *str) > This function returns a number sent to the function as a string.
To use it, Copy :

int main(void)
{
    char *str = "1592";
    int nb = my_getnbr(str);
    my_put_nbr(nb);
    return (0);
}

* After enter your test, use "make re" command and "./test_lib" command.

====================================================================================================

- int my_intlen(int nb) > This function return the number of char as a int.
To use it, Copy :

int main(void)
{
    int nb = "0123456789";
    int size_nb = my_intlen(nb);
    my_put_nbr(size_nb);
    return (0);
}

* After enter your test, use "make re" command and "./test_lib" command.

====================================================================================================

- int my_intlenforbin(int nb) > This function return the binary size of the number in parameter.
To use it, Copy :

int main(void)
{
    int nb = "16";
    int size_nb_forbin = my_intlenforbin(nb);
    my_put_nbr(size_nb_forbin);
    return (0);
}

* After enter your test, use "make re" command and "./test_lib" command.

====================================================================================================

- char *my_inttostr(int nb, char *s_nb) > This function returns a string containing the int in parameter.
To use it, Copy :

int main(void)
{
    int nb = 1234;
    char *str = NULL;
    str = my_inttostr(nb, str);
    my_putstr(str);
    return (0);
}

* After enter your test, use "make re" command and "./test_lib" command.

====================================================================================================

- void my_putchar(char c) > This function print the char as parameter.
To use it, Copy :

int main(void)
{
    my_putchar('A');
    return (0);
}

* After enter your test, use "make re" command and "./test_lib" command.

====================================================================================================

- void my_put_error(char const *str) > This function print a string in the error output.
To use it, Copy :

int main(void)
{
    my_put_error("Error 404");
    return (0);
}

* After enter your test, use "make re" command and "./test_lib" command.

====================================================================================================

- void my_put_nbr(int nb) > This function print number in parameter.
To use it, Copy :

int main(void)
{
    my_put_nbr(42);
    return (0);
}

* After enter your test, use "make re" command and "./test_lib" command.

====================================================================================================

- void my_putstr(char const *str) > This function print string in parameter.
To use it, Copy :

int main(void)
{
    my_putstr("Hello World o/ !");
    return (0);
}

* After enter your test, use "make re" command and "./test_lib" command.

====================================================================================================

- int my_strlen(char const *str) > This function return the number of char in a string.
To use it, Copy :

int main(void)
{
    char *str = "Hellow World o/";
    int size_str = my_strlen(str);
    my_put_nbr(size_str);
    return (0);
}

* After enter your test, use "make re" command and "./test_lib" command.

====================================================================================================

- char **my_str_to_word_array(char **word_array, char const *str, char separator) > This function take
a string as parameter and transform it in a array of string.
To use it, Copy :

int main(void)
{
    char **word_array = NULL;
    char *str = "Pink,Blue,Red,Purple,Brown,Yellow"
    word_array = my_str_to_word_array(word_array, str, ',');
    for (int count = 0; word_array[count] != NULL; count++) {
        my_putstr(word_array[count]);
        my_putchar('\n');
    }
    return (0);
}
