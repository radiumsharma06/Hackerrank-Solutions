n=int(input())
steps=list(input())
u,l='U','L'
count,c1,c2,flag=0,0,0,0
for i in steps:
    if(i==u):
        c1+=1
    else:
        c2+=1
    if c1>=c2:
        flag=0
    else:
        if flag==0:
            flag=1
            count+=1
print(count)            
            