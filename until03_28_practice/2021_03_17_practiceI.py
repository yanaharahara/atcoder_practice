n,y = map(int,input().split())
result10000=-1
result5000=-1
result1000=-1
for i in range(n+1):
    for j in range(n-i+1):
        if (10000*i+5000*j+1000*(n-i-j)==y) & (i+j+(n-i-j)==n):
            result10000=i
            result5000=j
            result1000=n-i-j
            break
print(result10000, result5000, result1000)



                

"""
while True:
    print(n)
    print(y)

    if y%10000!=0:
        break
    else:
        result10000+=1
        y/=10000
print(result10000)
"""
