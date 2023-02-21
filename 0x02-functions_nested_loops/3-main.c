#include "main.h"

/**
 * main - print alphabets in lowercase - 10 times
 * 
 * Return: Always 0 (Success).
 */

int main(void)
{
        int alpha;

        alpha = _islower('A');
        _putchar(alpha + '0');
        alpha = _islower('b');
        _putchar(alpha + '0');
        alpha = _islower(500);
        _putchar(alpha + '0');
        _putchar('\n');
        
        return (0);
}

