
def getList(l,index,i):
    newl=l[i:index+1]
    new_list=l[0:i]+newl[::-1]+l[index+1:]
    return new_list

def getSwapList(l,index,i):
    swap_list=l[:]
    swap_list[index],swap_list[i]=swap_list[i],swap_list[index]
    return swap_list

def cmp(l1,l2):
    for i in range(0,len(l1)):
        if l1[i]!=l2[i]:
                   return False
    return True

def main():
    n=int(input())
    l=list(map(int,input().split(' ')))
    s=sorted(l)
    flag,ans=False,False
    for i in range(0,len(l)):
        if s[i]==l[i]:
            flag=True
            continue
        index=l.index(s[i])
        swap_list=getSwapList(l,index,i)
        if cmp(s,swap_list):
            print('yes')
            print('swap',i+1,index+1)
            ans=True
            break
        new_list=getList(l,index,i)
        if cmp(s,new_list):
            print('yes')
            print('reverse',i+1,index+1)
            ans=True
            break
        flag=False
        break
    if ans==False:
        if flag==True:
            print('yes')
        else:
            print('no')
main()
