# A program that meows as many times as the user wants

from cs50 import get_int

def main():
    meow()

def meow():
    n = get_int("How many times should I meow? ")
    for i in range(n):
        print("meow")

main()