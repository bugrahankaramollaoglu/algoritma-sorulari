"""return a new list with min/max of another list"""


def min_max(lst):
    return [min(lst), max(lst)]

# or


def min_max(lst):
    liste = []
    liste.append(min(lst))
    liste.append(max(lst))
    return liste
