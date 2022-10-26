#include <unistd.h>

/**
* putchar - writes the character c to the stdout 
* @c: char to be printed
* return 1 on sucess 
*/

int _putchar(char c)
{
    return (write(1, &c, 1));
}