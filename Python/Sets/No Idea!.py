n,m=map(int,input().split(" "))
arr=input().split(" ")
arr=[int(i) for i in arr] 
a=input().split(" ")
a=[int(i) for i in a] 
b=input().split(" ")
b=[int(i) for i in b]
a,b=set(a),set(b)
dic={}
for i in arr:
    dic[i]=0
for i in a:
    dic[i]=1
for i in b:
    dic[i]=-1
count=0
for i in arr:
    if dic[i]==1:
        count+=1
    elif dic[i]==-1:
        count-=1
print(count)        
