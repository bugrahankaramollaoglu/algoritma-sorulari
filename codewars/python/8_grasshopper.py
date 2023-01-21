""" Write a program that finds the summation 
of every number from 1 to num. """


def summation(num):
    sum = 0
    for i in range(1, num+1):
        sum += i
    return sum

print(summation(23))

