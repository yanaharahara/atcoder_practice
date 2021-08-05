h,w,x,y=(int(x) for x in input().split())#複数の入力を受け付ける
result=0
for i in range(1:h+1):
    for u in range(1:w+1):
        if i==x | u==y: