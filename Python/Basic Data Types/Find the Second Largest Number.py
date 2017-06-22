n=int(input())
l=[]
i=0
x=input()
l=x.split(" ")
for i in range(n):
    l[i]=int(l[i])
l.sort(reverse=True)
ans=l[0]
for i in l:
    if i<ans:
        ans=i
        break
print(ans)