s=str(input())
length=0
s=s.replace('eraser','')
s=s.replace('erase','')
s=s.replace('dreamer','')
s=s.replace('dream','')
if len(s)==0:
    print('YES')
else:
    print('NO')    
"""
if 'erase' in s:
    length+=5
    print(length)
    if 'dream' in s:
        length+=5
        print(length)
    if 'dreamer' in s:
        length+=2
        print(length)

if 'eraser' in s:
    length+=1
    print(length)
    if 'dreamer' in s:
        length+=5
        print(length)
    if 'dreamer' in s:
        length+=2
        print(length)


if 'dream' in s:
    length+=5
    print(length)
if 'dreamer' in s:
    length+=2
    print(length)
print('sum:',length)
#print(len(s))
if length==len(s):
    print("YES")
else:
    print("NO")  
"""     