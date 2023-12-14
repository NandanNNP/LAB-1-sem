a=[]
n=int(input("enter the number of elements in list"))
print("Enter the elements ")
for i in range(1,n+1):
    a.append(int(input()))
temp=a[0]
a[0]=a[n-1]
a[n-1]=temp
print("list is",a)
