from math import exp
import math
print(str(" computation L: "))
print(str("==============="))
def fun(a, b, c):
    return ((2 * a - b - (math.sin(c) )) / (5 + abs(c)))

t = float(input("t = "))
s = float(input("s = "))

L=fun(t, -2*s, 1.17)+fun(2.2, t, s-t)

print (L)

