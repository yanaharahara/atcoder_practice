a,b=map(int,input().split())
i=a+b
if (i>=15) & (b>=8):
    print(1)
elif (i>=10) & (b>=3):
    print(2)
elif i>=3:
    print(3)        
else:
    print(4)    