/* The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ? */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// if 0, num is prime
int is_prime(int num)
{
    if (num == 0 || num == 1)
        return 1;
    for (int i = 2; i <= num / 2; ++i)
    {
        if (num % i == 0)
            return 1;
    }
    return 0;
}

int olay()
{
    int sayi = 50000;
    long long i = sayi / 2;
    while (i > 2)
    {
        if (sayi % i == 0)
        {
            if (is_prime(i) == 0)
            {
                int ans = i;
                return ans;
            }
        }
        i--;
    }
}

int main()
{
    printf("%d", olay);
}
