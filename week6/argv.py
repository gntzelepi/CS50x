# A program that prints out a message based on command-line arguments

from sys import argv

# argv is a list of command-line arguments
if len(argv) == 2:
    print(f"Hello, {argv[1]}") # argv[0] is the name of the script
else:
    print("Hello, world")