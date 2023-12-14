from graphics import circle
from graphics import rectangle
from graphics.d_graphics import sphere
from graphics.d_graphics import cuboid


r=float(input("Enter the Radious of circle : "))
lr=int(input("Enter the length of Rectangle : "))
br=int(input("Enter the bredth of Rectangle : "))
rs=int(input("Enter the Radious of sphere : "))
lc=int(input("Enter the length of cuboid : "))
bc=int(input("Enter the bredth of cuboid : "))
hc=int(input("Enter the height of cuboid : "))

print("circle Area : ",circle.area(r))
print("circle perimeter : ",circle.perimeter(r))

print("rectangle Area : ",rectangle.area(lr,br))
print("rectangle perimeter : ",rectangle.perimeter(lr,br))

print("sphere Area : ",sphere.area(rs))
print("sphere perimeter : ",sphere.perimeter(rs))

print("cuboid Area : ",cuboid.area(lc,bc,hc))
print("cuboid perimeter : ",cuboid.perimeter(lc,bc,hc))
