a=[]
b=[]
while True:
    z=int(input("Enter the elements of List 1 OR 0 to Exit "))
    if z==0:
        break
    else:
        a.append(z)
while True:
    z=int(input("Enter the elements of List 2 OR 0 to Exit "))
    if z==0:
        break
    else:
        b.append(z)
print("List 1:",a)

print("List 2:",b)
        
if len(a)==len(b):
    print("list are same length\n",len(a))
else:
    print("\nlength of list 1:",len(a),"\nlength of list 2:",len(b))    
        

    print("\nsum of list 1:",sum(a),"\nsum of list 2:",sum(b))

for n in a:
    for z in b:
        if n==z:
            print("\n",n,"is in both at list1 in position",a.index(n),"and list2 in",b.index(z),"position")        
