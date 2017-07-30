n=input()
p=set(map(int,input().split(" ")))
n=input()
q=set(map(int,input().split(" ")))
s=p^q
s=sorted(s)
for i in s:
    print(i)