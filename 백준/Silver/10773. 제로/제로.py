test = int(input())
result = []
for i in range(test):
    num = int(input())
    if num != 0:
        result.append(num)
    else:
        result.pop()
print(sum(result))