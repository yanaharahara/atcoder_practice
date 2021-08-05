n=int(input())
list_a=[]
list_b=[]
result=10000
for i in range(0,n):
    a,b=map(int,input().split())
    if a:
        list_a.append(a)
    if b:
        list_b.append(b)
for u in range(n):
    for j in range(n):
        now=0
        if u==j:
            now=list_a[u]+list_b[j]
            
        else:
            now=max(list_a[u],list_b[j])    
        if now<result:
            result=now    
print(result)