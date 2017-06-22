def solve(year):
    if year<=1917:
        if year%4==0:
            return "12.09."+str(year)
        else:
            return "13.09."+str(year)
    elif year>=1919:
        if year%400==0 or (year%4==0 and year%100!=0):
            return "12.09."+str(year)
        else:
            return "13.09."+str(year)
    else:
        return "26.09.1918"

year = int(input().strip())
result = solve(year)
print(result)
