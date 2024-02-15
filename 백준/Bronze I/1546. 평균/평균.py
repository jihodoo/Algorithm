N = int(input())
score = list(map(int,input().split()))
m_score = max(score)
result = 0
for x in score:
    x = x/m_score*100
    result += x
result /= N
print(result)