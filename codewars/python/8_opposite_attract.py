""" return true if one is odd and the other is even; false if both are odd or even """


def lovefunc(flower1, flower2):
    if ((flower1 % 2 == 0) & (flower2 % 2 == 1)):
        return True
    if ((flower1 % 2 == 1) & (flower2 % 2 == 0)):
        return True
    return False

# or


def lovefunc(flower1, flower2):
    return (flower1+flower2) % 2
