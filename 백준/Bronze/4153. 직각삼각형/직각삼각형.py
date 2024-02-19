while True:
    A , B , C = map(int, input().split())
    if (A == 0) & (B == 0) & (C == 0):
        break
    elif (A*A + B*B == C*C) | (A*A + C*C == B*B) | (B*B + C*C == A*A):
        print('right')
    else:
        print('wrong')