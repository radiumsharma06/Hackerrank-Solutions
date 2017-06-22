q = int(input().strip())
for a0 in range(q):
    n = int(input().strip())
    r,c=[0]*n,[0]*n
    for i in range(0,n):
        a=[int(j) for j in input().strip().split(' ')]
        r[i]=sum(a)
        for j in range(0,n):
            c[j]+=a[j]
    r.sort()
    c.sort()
    msg="Possible"        
    for i in range(0,n):
        if r[i]!=c[i]:
            msg="Impossible"
            break
    print(msg)        
            
