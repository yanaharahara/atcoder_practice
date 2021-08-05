n,a,b=(int(x) for x in input().split())#複数の入力を受け付ける
result=0
for u in range(1,n+1):
    j = str(u)
    k = list(map(int,j))
    if (sum(k) >= a) & (sum(k) <= b):
        result+=int(j)
        

print(result)
        
