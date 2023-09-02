def factorial(x):
    
    if x<1:
     return 1
    
    else:
     return x*factorial(x-1)
        
x=int(input("type a num:"))
if x==0:
    print("facto is 0")
elif x==1:
    print("facto is 1")
else:
    print(factorial(x))

# _______ #


  