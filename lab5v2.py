import random
a = random.randint(0,1000)
b = random.randint(0,1000)
i = 0

n=b-a

if (n >= 0):
    print("p: ")
    while i <= n:
         print( float(a+i), str(", "))
         i += 1
else:
    print("Error! a is bigger than b!")