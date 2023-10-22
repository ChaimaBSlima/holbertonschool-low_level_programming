#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
void primeFactors(long n)
{
    unsigned long i;

    while (n % 2 == 0) {
        printf("%d ", 2);
        n = n / 2;
    }
 
    for ( i = 3; i * i < n+1; i = i + 2) {
        while (n % i == 0) {
            printf("%lu ", i);
            n = n / i;
        }
    }
    if (n > 2)
        printf("%lu ", n);
}
int main(void)
{
    unsigned long n = 612852475143;
    primeFactors(n);
    return 0;
}
