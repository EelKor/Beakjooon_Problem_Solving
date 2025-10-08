import sys

#N = list(map(int, sys.stdin.readline().strip().split()))

N, M = map(int, sys.stdin.readline().strip().split())

string_set = []

for i in range(N):
    s = sys.stdin.readline().strip()
    string_set.append(s)

count = 0
for i in range(M):
    s = sys.stdin.readline().strip()
    if s in string_set: count += 1

print(count)
