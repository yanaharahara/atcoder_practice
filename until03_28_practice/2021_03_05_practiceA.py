"""
a=int(input())
b,c=(int(x) for x in input().split())
s=input()
i = str(a + b + c)
print(i+" "+s)
"""
a=int(input())
b,c=map(int,input().split())
s=input()
print("{} {}".format(a+b+c,s))