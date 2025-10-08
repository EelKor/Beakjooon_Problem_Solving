import sys

s = sys.stdin.readline().strip()
result = ''
word = ''
inside_tag = False

for ch in s:
    if ch == '<':
        result += word[::-1]
        word = ''
        word += ch
        inside_tag = True

    elif ch == '>':
        word += ch
        result += word
        word = ''
        inside_tag = False

    elif inside_tag:
        word += ch

    elif ch == ' ':
        result += word[::-1]+' '
        word = ''

    else: # tag inside가 아닐때
        word += ch
result += word[::-1]

print(result)
