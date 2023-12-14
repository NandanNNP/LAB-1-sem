a=[]
b=[]
n=int(input("enter the number of elements in list"))
for i in range(1,n+1):
    a.append(int(input()))
print("positvive elements are:",end=" ")
for i in a:
    if i > 0:
        b.append(i)
print("The list is : ",b,end=" ")

