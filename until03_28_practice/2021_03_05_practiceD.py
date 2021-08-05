import math
n = input()
a = list(map(int, input().split()))#数の決まっていない入力を受け付ける
ans = float("inf")
for i in a:
    ans = min(ans, len(bin(i)) - bin(i).rfind("1") - 1)
print(round(ans))




"""
N = int(input())
a = list(map(int,input().split()))
u = 0
result = 0
while True:
    for i in range(N):
        if a[i]%2==0:
            u+=1
            print(u)
            if u==N:
                break
            
            
        else:
            break    
        if u==N:
            for j in range(N):
                a[j]/=2
                if a[j]%2!=0:
                    break
            result+=1
         
print(result)    
        
"""


        
"""
while((b%2==0) & (c%2==0) & (d%2==0)):
    b/=2
    c/=2
    d/=2
    result+=1

print(result)
"""
     
        

