from collections import Counter
n = int(input())  # nは入力回数
list = [input() for _ in range(n)]
ans = Counter(list)
#print(list)
print(max(ans,key=ans.get))
