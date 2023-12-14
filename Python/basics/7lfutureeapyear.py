year=int(input("Enter the year : "))
c_year=2023
print("The leap years are :",end=" ")
for i in range(c_year,year):
    if(i%4==0 and i%100!=0 or i%400==0):
        print(i,end=" ")
