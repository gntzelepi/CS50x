# A program that swaps two numbers

from cs50 import get_int

# Prompt user for two integers
x = get_int("Insert x to swap: ")
y = get_int("Insert y to swap: ")

print(f"x is {x}, y is {y}")

print("Now let's swap....")

# Swapping of integers
x, y = y, x

print(f"x is {x}, y is {y}")