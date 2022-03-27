from sys import stdin

count = int(stdin.readline())
stack = []

for i in range(0,count):
    inputs = stdin.readline().split()
    command = inputs[0]
    
    #------------오답원인------------#
    # if len(inputs) > 1:
    #   value = int(inputs[1])
    #
    # ------------------------------# 

    if command == 'push':
        value = int(inputs[1])      
        stack.append(value)

    elif command == 'pop':
        if len(stack) == 0:
            print(-1)
        else:
            print(stack.pop())

    elif command == 'size':
        print(len(stack))

    elif command == 'empty':
        if len(stack) == 0:
            print(1)
        else:
            print(0)
    elif command == 'top':
        if len(stack) == 0:
            print(-1)
        else:
            print(stack[-1])
    else:
        print("Error")