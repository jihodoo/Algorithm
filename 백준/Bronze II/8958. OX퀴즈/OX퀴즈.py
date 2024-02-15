case = int(input())
for i in range(case):
    ox = input()
    result = 0
    mult = 0
    if ox[0] == 'O':
        mult = 1
        result += mult
    for i in range(1,len(ox)):
        if (ox[i-1] == 'O') & (ox[i] == 'O'):
            mult += 1
            result += mult
        elif (ox[i-1] == 'X') & (ox[i] == 'O'):
            mult = 1
            result += mult
    print(result)
