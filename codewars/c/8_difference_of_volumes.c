/*
For example, if the parameters passed are
([2, 2, 3], [5, 4, 1]), the volume of a is 12 and
the volume of b is 20. Therefore, the function should return 8.
 */

int find_difference(const int a[3], const int b[3])
{
    return (abs((a[0] * a[1] * a[2]) - (b[0] * b[1] * b[2])));
}
