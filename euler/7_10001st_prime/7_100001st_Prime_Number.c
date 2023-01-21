/* what is the 10.001st prime? */

#include <stdio.h>
#include <stdbool.h>

// all written by myself

int is_prime(int number)
{
    for (int i = 2; i <= (number / 2); i++)
        if (number % i == 0)
            return 0;
    return 1;
}

int main(void)
{
    int a = 2;
    int counter = 0;
    while (counter < 10001)
    {
        if (is_prime(a) == 1)
        {
            printf("%d\n", a);
            counter++;
        }
        a++;
    }
}
