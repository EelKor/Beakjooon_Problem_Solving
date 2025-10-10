import sys

s = sys.stdin.readline().strip().split('-')

answer = 0
for i in range(len(s)):
    if i == 0:
        num = list(map(int, s[i].split('+')))
        answer += sum(num)
    else:
        num = list(map(int, s[i].split('+')))
        answer -= sum(num)

print(answer)
