list=[1,2,3,4]
list.append(5)
list.insert(0,0)
print(list)
print(len(list))
print(0 in list)#check 0 in list
i=0
while i<len(list):
    print(list[i])
    i+=1
list.clear()
print(list)