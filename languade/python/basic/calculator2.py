print("\n\nTHIS IS A CALCULATOR MADE BY CHETAN\n")
print("***********************************\n")
a=input ("TYPE 1 INTEGERS > ")
c=input ("Operator *.-.+./> ")
b=input ("TYPE 2 INTEGERS > ")
if (c)=='+':
    print(int(a)+int(b))
elif (c)=='-':
    print(int(a)-int(b))
elif (c)=='*':
    print(int(a)*int(b))
elif (c)=='/':
    print(int(a)/int(b))  
else:
    print("1/2/3/4  likh na be batak mat kar")