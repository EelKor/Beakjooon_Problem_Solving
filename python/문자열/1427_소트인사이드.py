import sys

s = sys.stdin.readline().strip()
sen = []
for i in range(len(s)):
    sen.append(s[i])

print(''.join(sorted(sen, reverse=True)))

'''
GPT

import sys
s = sys.stdin.readline().strip()
print(''.join(sorted(s,reverse=True)))

