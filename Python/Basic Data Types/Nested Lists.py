l=[]
x=[]
for i in range(int(input())):
        name=input()
        score=float(input())
        x.append(score)
        l.append([name,score])
x.sort()
for i in x:
    if i!=x[0]:
        second=i
        break
n=[]        
for i in range(len(l)):
    if(l[i][1]==second):
        n.append(l[i][0])
n.sort()    
for i in n:
    print(i)