x = float(input("X = "))
y = float(input("Y = "))
if (y > x or y > -x):
    if ((pow(x,2)+pow(y,2)<=1)): 
        print("x,y belong to the given area")
    else: 
        print ("x,y does not belong to the given area")
else:
    print("x,y does not belong to the given area")