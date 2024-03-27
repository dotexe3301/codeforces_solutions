n, t = map(int, input().split())
q = input()

for i in range(1, t+1):
    q = q.replace("BG", "GB")
print(q)