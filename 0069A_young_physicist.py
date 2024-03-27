n = int(input())
xr, yr, zr = 0, 0, 0
for i in range(1, n+1):
    x, y, z = map(int, input().split())
    xr += x
    yr += y
    zr += z
if xr==0 and yr==0 and zr==0:
    print("YES")
else:
    print("NO")