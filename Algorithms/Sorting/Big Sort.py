n=int(input())
l=[]
for i in range(0,n):
    l.append(input())    
l=sorted(l, key=lambda e: (len(e),e))    
for i in l:
    print(i)
