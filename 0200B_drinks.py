n = int(input())
l = map(int, input().split())

Sum = 0

for val in l:
    Sum += (val/100.0)
print(Sum/n * 100)