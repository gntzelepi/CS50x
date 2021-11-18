# A program asking for agreement

from cs50 import get_string

# Ask user for agreement
s = get_string("Do you agree? ")

if s.lower() in ["y", "yes"]:
    print("Agreed.")
elif s.lower() in ["n", "no"]:
    print("Not agreed.")
else:
    print("Invalid input.")