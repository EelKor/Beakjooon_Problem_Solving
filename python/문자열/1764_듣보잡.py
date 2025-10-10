'''
import sys

N, M = map(int, sys.stdin.readline().strip().split())

known_name = []
for i in range(N):
    known_name.append(sys.stdin.readline().strip())

name = []
for i in range(M):
    s = sys.stdin.readline().strip()
    if s in known_name:
        name.append(s)

print(len(name))
for i in range(len(name)):
    print(name[i])
'''

import sys
N, M = map(int, sys.stdin.readline().strip().split())

heard = set(sys.stdin.readline().strip() for _ in range(N))
seen = set(sys.stdin.readline().strip() for _ in range(M))

result = sorted(heard & seen)
print(len(result))
print("\n".join(result))
