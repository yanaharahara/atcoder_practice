import math
n = int(input())
a = list(map(int, input().split()))#数の決まっていない入力を受け付ける
a = sorted(a)#昇順にソートする
result = 0
a_sum = 0
b_sum = 0

while(len(a)!=0):
    a_sum+=max(a)
    a.pop()
    if not a:
        break
    b_sum+=max(a)
    a.pop()




result = a_sum-b_sum
print(result)


