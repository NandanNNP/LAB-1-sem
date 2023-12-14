a=[]
n=int(input("enter the number of elements in list : "))
print("Enter the elements ")
for i in range(1,n+1):
    b=int(input())
    if b>=100:
        a.append("OVER")
    else:
        a.append(b)
print("list is",a)
