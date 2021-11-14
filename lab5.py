a = float(input("a = "))
b = float(input("b = "))
i = a
print("p= ")
while (i<=b):
    i=i+1

    cnt = 0
    j=2
    while (j<=i/2): 
        j=j+1
        if (i%j==0):
            cnt=cnt+1
    if (not cnt):
        print(i)