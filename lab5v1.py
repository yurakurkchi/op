a = float(input("a = "))
b = float(input("b = "))
n=b-a
i=0
if (n >= 0):
    print("p: ")
    while i <= n:
         print( float(a+i), str(", "))
         i += 1
else:
    print("Error! a is bigger than b!")