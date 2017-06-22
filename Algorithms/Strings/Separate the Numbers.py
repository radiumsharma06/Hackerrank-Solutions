def beauty(s):
    ans,n,k,i,tag=-1,len(s),1,0,int(s[0])
    if n==1:
        return -1
    while i<n-1:
        x=s[i:i+k]
        nextNum=int(x)+1
        l=len(str(nextNum))
        if l>n-k:
            return -1
        y=int(s[i+k:i+k+l])
        if y==nextNum:
            if i+k+l==n:
                return tag
            i+=k
            k=l
        else:
            k+=1
            i=0
            tag=int(s[i:i+k])
            if k>n-1:
                return -1   
    return tag
def main():
    q=int(input())
    for i in range(0,q):
        s=input()
        ans=beauty(s)
        print("YES",ans) if ans!=-1 else print("NO")
main()        