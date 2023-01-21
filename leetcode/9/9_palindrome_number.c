/* integer palindrome checker (156651) */

#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(long x)
{
    long x2 = x;

    long result = 0;
    if (x < 0)
        return false;
    // sayı bitene kadar
    while (x2)
    {
        // sayının tersini resulta atıyoruz
        result = (x2 % 10) + (result * 10);
        x2 /= 10;
    }
    // eğer sayının kendisiyle aynısysa true, değilse
    // false döndürüyoruz
    if (x == result)
        return true;
    return false;
}

int main()
{
    int s = 123321;
    printf("%d", isPalindrome(s));
}