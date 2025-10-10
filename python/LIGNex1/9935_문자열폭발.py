import sys

s = sys.stdin.readline().strip()
boom = sys.stdin.readline().strip()

stack = []
boom_len = len(boom)

for i in range(len(s)):
    stack.append(s[i])

    if len(stack) >= len(boom) and ''.join(stack[-boom_len:]) == boom:
        del stack[-boom_len:]

print(''.join(stack) if len(stack) != 0 else "FRULA")
