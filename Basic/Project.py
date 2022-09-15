#Same project in python language
import random
Comp_number = random.randint(1, 101)
chance = 0
while True:
    user_input = int(input("Enter you guess :"))
    if user_input > Comp_number:
        print("The number is smaller")
        chance += 1
    if user_input < Comp_number:
        print("The number is larger")
        chance += 1
    if user_input == Comp_number:
        print("Congratulation you have guessed the right number %d.\nYou have found out it in %d chances"% Comp_number,chance)
        break