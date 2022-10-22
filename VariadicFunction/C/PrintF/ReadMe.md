# Implementation of Variadic Function printf in C Using Function Pointer

printf prints a string on the screen using a “format string” that includes the instructions to mix several strings and produce the final string to be printed on the screen.

# Run

To run this function you can create a main.c file

e.g run in terminal
```
vim main.c
```
and use the below code sinippet

```
#include <limits.h>
#include <stdio.h>
#include "Printf.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;

    len = _printf("Print a normal string.\n");
    _printf("Length:[%d, %i]\n", len, len);
    _printf("Negative:[%d]\n", -123);
    _printf("Character:[%c]\n", 'C');
    _printf("Len:[%d]\n", len);
    _printf("Unknown:[%q]\n");
    return (0);
}

```

save the file then run 

```
gcc *.c -o a 
```

then 
```
./a
```
[how printf works](https://man7.org/linux/man-pages/man3/printf.3.html)

[vardiac function](https://en.wikipedia.org/wiki/Variadic_function#:~:text=In%20mathematics%20and%20in%20computer,dating%20back%20to%201936%E2%80%931937.)

[function pointer](https://www.geeksforgeeks.org/function-pointer-in-c/)
