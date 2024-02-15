word = input().upper()
alp = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
count_word = [] #65~90

for str in alp:
    count_word.append(word.count(str))
max = count_word[0]
for i in range(1,len(count_word)):
    if max < count_word[i]:
        max = count_word[i]
# print(max)
cnt_num = 0
answer = 0
for num in range(len(count_word)):
    if count_word[num] == max:
        cnt_num += 1
        answer = num

if cnt_num >=2:
    print('?')
else:
    print(chr(65+answer))
    