n=int(input())
l=[]
x=input()
l=x.split(' ')
for i in range(len(l)):
    l[i]=int(l[i])
t=tuple(l) 
print(hash(t))    
