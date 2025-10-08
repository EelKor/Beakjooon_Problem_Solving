import sys

s = sys.stdin.readline().strip()
sen = set()

for l in range(len(s)):
    for i in range(l+1, len(s)+1):
        sen.add(s[l:i])

print(len(sen))


