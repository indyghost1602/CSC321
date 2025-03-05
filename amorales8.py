#Anthony Morales
#CSC 321
#Lab 8

import random

randNum = random.randint(0,9)

x = 0
y = 0

print("Guess a number 0-9: ")

y = int(input())

if y < randNum:
    print("Your guess is too low, try again! The number was: ")
    print(randNum)
elif y > randNum:
    print("Your guess is too high, try again! The number was: ")
    print(randNum)
elif y == randNum:
    print("You guessed correctly. the number was: ")
    print(randNum)

for i in range(y):
    print("What is Satrun's favorite movie? Lord of the Rings!")

while x < 10:
    print("My favoirte food is dim sum!")
    x = x + 1

