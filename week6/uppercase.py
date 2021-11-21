# A program that uppercases a string

from cs50 import get_string

# Prompt user for a string
s = get_string("String to uppercase: ")

print("After: ", end ="")

# Uppercase each character in given string
for char in s:
    print(char.upper(), end="")
print()