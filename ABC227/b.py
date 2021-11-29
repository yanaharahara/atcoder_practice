from sys import stdin
input = stdin.readline

n = int(input())
num_list = list(map(int, input().split()))

for i in range(n):
    for u in range(1,200):
        for j in range(1,200):
            ite = 4*u*j + 3*u + 3*j
            if ite in num_list:
                num_list.remove(ite)



print(len(num_list))                
            
                
                
            
        
        
    