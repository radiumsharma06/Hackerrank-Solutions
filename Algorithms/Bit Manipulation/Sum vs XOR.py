n=int(input())
b=bin(n)[2:]
count=0
z=b.count('0')
if n==0:
    z-=1
print(pow(2,z))        