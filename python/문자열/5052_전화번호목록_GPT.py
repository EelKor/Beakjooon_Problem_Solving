import sys


t = int(sys.stdin.readline().strip())

for _ in range(t):
    n = int(sys.stdin.readline().strip())
    phones = [sys.stdin.readline().strip() for _ in range(n)]
    phones.sort()

    ok = True
    for i in range(n-1):
        if phones[i+1].startswith(phones[i]):
            ok = False
            break

    print("YES" if ok else "NO")