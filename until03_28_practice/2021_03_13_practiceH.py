mylist=[]
n=int(input())
for i in range(0,n):
    u = int(input())
    if u:
        mylist.append(u)

mylist=set(mylist)#重複を削除
mylist=sorted(mylist)#昇順にソートする
result=len(mylist)
"""
while(len(mylist)!=0):
    result+=max(mylist)
    mylist.pop()
"""
print(result)
