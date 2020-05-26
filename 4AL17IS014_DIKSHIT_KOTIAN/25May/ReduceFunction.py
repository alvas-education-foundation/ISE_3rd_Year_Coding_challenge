/*Given a list of rational numbers,find their product.The reduce() function applies a
function of two arguments cumulatively on a list of objects in succession from left to
right to reduce it to one value.*/

from __future__ import print_function
from fractions import Fraction
import operator
def product(fracs):
    t =reduce(operator.mul , fracs)
    return t.numerator, t.denominator

if __name__ == '__main__':
    fracs = []
    for _ in range(input()):
        fracs.append(Fraction(*map(int, raw_input().split())))
    result = product(fracs)
    print(*result)