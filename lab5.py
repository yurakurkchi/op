a = float(input("a = "))
b = float(input("b = "))
i = a
print("p= ")
while (i<=b):
   

    cnt = 0
    j=2
    while(j<=i/2):
        if (i%j==0):
            
            cnt=cnt+1
        j=j+1
    i=i+1
    if (not cnt):
        print(i-1)