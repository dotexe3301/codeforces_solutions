s = input()
counter = 1
for i in range(1, len(s)):
    if s[i] == s[i-1]:
        counter += 1
    else:
        counter = 1
    if counter == 7:
        break
print("YES" if counter==7 else "NO")