def count_substring(string, sub):
    n,count=len(sub),0
    for i in range(0,len(string)):
        if sub==string[i:i+n]:
            count+=1
    return count