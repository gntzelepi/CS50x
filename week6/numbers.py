# Linear search in a list

from cs50 import get_int
import sys

# List of numbers
numbers = [4, 6, 8, 2, 7, 5, 0]

# Prompt user for a number
n = get_int("Which number are you looking for? ")

if n in numbers:
    print("Found.")
    sys.exit(0)
else:
    print("Not found.")
    sys.exit(1)