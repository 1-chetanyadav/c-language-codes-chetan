# list =[23,[],65,19,[],[],90]
# i = 0
# j=len(list)
# while i < j:
#  if list[i]==list[[]]:
#   del list[i]j
#   i=+1
# print(list)

# 2nd
list =[23,[],65,19,[],[],90]
list.remove('[]')
del list[1]
del list[4]
del list[-2]
print(list)

#
# append new list 