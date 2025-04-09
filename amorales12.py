#Anthony Morales
#CSC321
#Lab 12

def rectangle(base, height):
    area = base * height
    return area

x = int(input("enter the base of your rectangle: "))
y = int(input("enter the height of your rectangle: "))

rectArea = rectangle(x,y)

print("the area of the triangle is: ", rectArea)

def circle(radius):
    area = 3.14 * radius * radius
    return area

r = int(input("enter the radius of your circle: "))

cirArea = circle(r)

print("the area of the circle is: ", cirArea)

