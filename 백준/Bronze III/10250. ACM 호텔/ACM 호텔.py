test = int(input())
for i in range(test):
    hight , width , num = map(int,input().split())
    dong = num % hight
    if dong == 0:
        dong = hight
    ho = num // hight + 1
    if num % hight == 0:
        ho = ho -1
    print(dong*100+ho)