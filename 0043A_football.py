n = int(input())
d = {}
for _ in range(n):
    s = input()
    if s not in d:
        d.setdefault(s, 1)
    else:
        d[s]+=1
team = list(d.keys())
if n==1 or len(d) == 1:
    print(team[0])
else:
    print(team[0] if d[team[0]] > d[team[1]] else team[1])