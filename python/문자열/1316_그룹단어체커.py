def isGroupSentence(str):
    length = len(str)
    word = []
    for i in range(length):
        if str[i] in word and str[i] != word[-1]:
            return 0
        else:
            word.append(str[i])
    return 1    

# set을 사용하는게 더 좋음, 시간복잡도 측면에서
def check_group_sentence(s):
    length = len(str)
    seen = set()
    prev = ''

    for ch in s:
        if ch != prev:
            if ch in seen:
                return 0
            else:
                seen.add(ch)
    
        prev = ch
    return 1


num = int(input())
result = 0

for i in range(num):
    str = input()
    result += check_group_sentence(str)
print(result)
