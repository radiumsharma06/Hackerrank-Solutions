n=int(input())
l=[]
for i in range(n):
    s=input()
    x=s.split(' ')
    if(x[0]=='insert'):
        p=int(x[1])
        v=int(x[2])
        l.insert(p,v)
    elif x[0]=='print':
        print(l)
    elif x[0]=='remove':
        l.remove(int(x[1]))
    elif x[0]=='append':
        l.append(int(x[1]))
    elif x[0]=='sort':
        l.sort()
    elif x[0]=='pop':
        l.pop()
    elif x[0]=='reverse':
        l.reverse()

        
