n=int(input())
l=input().split(" ")
l=[int(i) for i in l]
dic={}
for i in range(len(l)):
    dic[l[i]]=i
l=sorted(l)
mini=1000000
for i in range(len(l)-1):
    diff=l[i+1]-l[i]
    if dic[l[i+1]]<dic[l[i]] and diff>0:
        if diff<mini:
            mini=diff
print(mini)            