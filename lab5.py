a = float(input("a = "))
b = float(input("b = "))
p = a
print("p= ")
while (p<=b):
   
    cnt = 0
    j=2
    while(j<=p/2):
        if (p%j==0):
            
            cnt=cnt+1
        j=j+1
    p=p+1
    if (not cnt):
        print(p-1)