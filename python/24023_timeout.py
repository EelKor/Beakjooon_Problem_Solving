from sys import stdin
length, ans = map(int, stdin.readline().split())
inputs = list(map(int, stdin.readline().split()))

pivot = 0
idx = 1
value = inputs[pivot]


while True:
    value = value | inputs[idx]

    if value == ans:
         print(pivot+1, idx+1)
         break
    else:

        idx += 1
        if idx > length-1:
            pivot += 1

            if pivot >= length-1:
                print(-1)
                break
            else:
                value = inputs[pivot]
                idx = pivot+1
                
        else:
            continue

