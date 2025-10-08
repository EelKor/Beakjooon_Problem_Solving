from itertools import combinations

s = input()
split_idx = range(len(s)-1)

new_string = []

for idx in list(combinations(split_idx, 2)):

    word_set_1 = s[:idx[0]+1][::-1]
    word_set_2 = s[idx[0]+1:idx[1]+1][::-1]
    word_set_3 = s[idx[1]+1:][::-1]

    new_string.append(word_set_1+word_set_2+word_set_3)

print(min(new_string))

