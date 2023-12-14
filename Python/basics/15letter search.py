a=[]
n=int(input("enter the number of elements in list"))
print("Enter the elements ")
for i in range(1,n+1):
    a.append(input())
s=input("enter the letter to search")
count=0
for i in a:
    for j in i:
        if s==j:
            count=count+1
print("number of %s in list is : %d"%(s,count))
            
    

