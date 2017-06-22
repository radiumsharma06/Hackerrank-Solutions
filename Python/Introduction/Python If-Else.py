n=input()
if int(n)%2==0 and (int(n)>20 or int(n) in range(2,5)):
    print ("Not Weird")
else:
   print ('Weird')