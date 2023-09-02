print("\n\nTHIS IS A CALCULATOR MADE BY CHETAN\n")
print("***********************************\n")
a=input ("TYPE 1 INTEGERS  ")
b=input ("TYPE 2 INTEGERS  ")
div= int(a)/int(b)
mul= int(a)*int(b)
sub =int(a)-int(b)
add  =int(a)+int(b)
print("\n>> 1 for add \n>> 2 for sub\n>> 3 for multiply\n>> 4 for divide" )
c=input (">")
if int(c)==1:
    print(int(add))
elif int(c)==2:
    print(int(sub))
elif int(c)==3:
    print(int(mul))
elif int(c)==4:
    print(int(div))
    
else:
    print("1/2/3/4  likh na be bakwas mat kar")