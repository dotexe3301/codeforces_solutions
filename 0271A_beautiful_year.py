num = int(input()) 

isDistinct = False
while not isDistinct:
    num+=1
    Set = set()
    temp = str(num)
    Set.add(temp[0])
    Set.add(temp[1])
    Set.add(temp[2])
    Set.add(temp[3])
    if len(Set) == 4:
        isDistinct = True
print(num)
