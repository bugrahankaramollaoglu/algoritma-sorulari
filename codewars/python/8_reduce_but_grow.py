"""bir array'deki sayıların çarpımını hesaplama"""


def grow(arr):
    result = 1
    for i in arr:
        result *= i
    return result


myList = [3, 2, 5]

print(grow(myList))
