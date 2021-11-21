# A program that builds a grid of bricks inspired by mario

from cs50 import get_int

def main():
    n = get_int("How many #? ")
    if n > 0:
        print("Building mario grid of bricks...")
        for i in range(n):
            for j in range (n):
                print("#", end="")
            print()
    else:
        print("Enter a positive integer.")
        main()

main()