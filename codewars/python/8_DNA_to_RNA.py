"""tüm t'leri u yap"""


def dna_to_rna(dna):
    a = dna.maketrans("T", "U")
    return dna.translate(a)
