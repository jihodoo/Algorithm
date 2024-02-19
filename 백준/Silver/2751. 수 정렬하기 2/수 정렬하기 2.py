test = int(input())
result = []
for i in range(test):
    num = int(input())
    result.append(num)
result.sort()
for i in result:
    print(i)