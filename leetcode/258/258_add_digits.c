/* ben olayi cok yanlis anlamisim. o yüzden
algoritmam calıssa da yanlisti. sayı tek hane
kalana kadar digitlerini toplayıp tek hane kaldıgı 
sayıyı döndürmemiz gerekiyor.
bense tek hane kalana kadar kac islem yapıyosak
onu döndürüyoruz anlamisim

int digit(int nb)
{
    int d = 0;
    if (nb == 0)
        return 1;
    while (nb)
    {
        nb /= 10;
        d++;
    }
    return d;
}

int summer(int nb)
{
    int sum = 0;
    while (nb)
    {
        sum += nb % 10;
        nb /= 10;
    }
    return sum;
}

int addDigits(int num)
{
    if (num <= 9)
        return 0;
    int counter = 0;
    int sum = 0;
    int dig = digit(num);
    while (dig > 1)
    {
        sum = summer(num);
        dig = digit(sum);
        num = sum;
        counter++;
    }
    return counter;
} */

// doğrusu
int addDigits(int num)
{
    int ret = 0;
    if (num < 10)
        return num;

    while (num != 0)
    {
        ret += (num % 10);
        num /= 10;
    }

    return addDigits(ret);
}

