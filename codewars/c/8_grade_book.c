char get_grade(int a, int b, int c)
{

    int average = (a + b + c) / 3;

    if (average >= 90 && average <= 100)
        return 'A';
    else if (average >= 80 && average < 90)
        return 'B';
    else if (average >= 70 && average < 80)
        return 'C';
    else if (average >= 60 && average < 70)
        return 'D';
    else if (average >= 0 && average < 60)
        return 'F';
}

/* smarttt
char get_grade(a, b, c)
{
  return "FFFFFFDCBAA"[(a+b+c)/30];
} */
