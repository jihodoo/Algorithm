text = input()
text = text.strip()
result =1
if text == '':
    print(0)
else:
    for x in text:
        if x == ' ':
            result +=1
    print(result)