#include <stdio.h>

int main()
{
    char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    char greetings2[] = "Hello World!";

    printf("%s\n", greetings);
    printf("%s\n", greetings2);
    printf("%lu\n", sizeof(greetings));
    printf("%lu\n", sizeof(greetings2));

    return 0;
}
// Why do we include the \0 character at the end? This is known as the "null terminating character", and must be included when creating strings using this method. It tells C that this is the end of the string.
