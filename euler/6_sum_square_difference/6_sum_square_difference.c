#include <stdio.h>
#include <math.h>

unsigned int sum_of_squares(unsigned int number)
{
    unsigned int i = 1;
    unsigned int sum = 0;
    while (i <= number)
    {
        sum += pow(i, 2);
        i++;
    }
    return sum;
}

unsigned int square_of_sum(unsigned int number)
{
    unsigned int i = 1;
    unsigned int sum = 0;
    while (i <= number)
    {
        sum += i;
        i++;
    }
    return (pow(sum, 2));
}
unsigned int difference_of_squares(unsigned int number)
{
    unsigned int a = square_of_sum(number);
    unsigned int b = sum_of_squares(number);
    return (a - b);
}

int main()
{
    printf("%d", difference_of_squares(100));
}