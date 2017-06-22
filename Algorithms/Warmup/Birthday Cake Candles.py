n=int(input())
l=[int(h) for h in input().split(" ")]
m,count=max(l),0
for i in l:
    if i==m:
        count+=1
print(count)                