x=int(input("type a no"))
r=0
r=x/2
i=1
while x>=r:
    i=i+1
    if x%i==0:
        print("prime")
    else:
        print("not prime")
        