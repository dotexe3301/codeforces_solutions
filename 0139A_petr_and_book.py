pages = int(input())
days = input().split()
days = [int(e) for e in days]
i=-1
while pages>0:
    i+=1
    if i == len(days):
        i = 0
    pages-=days[i]
print(i+1)

