a=input("Enter Sentence ")
b=input("Search element")
list=a.split()
count=0
for i in list:
    if i==b:
        count=count+1
print("the term %s is appeard %d times in the given sentance"%(b,count))
