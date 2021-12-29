""" A program that calculates the factorial of a non-negative integer """

def main():
    try:
        # Prompt user for a number
        n = int(input("Insert a non-negative integer: "))
        
        # Print out factorial
        print(f"Factorial of {n} is", factorial(n))
        
        # ValueError handling
    except ValueError:
        print("Invalid input.")

# Calculate factorial
def factorial(n):
    
    # Base cases
    if n == 0 or n == 1:
        return 1
    
    # Recursion
    elif n > 1:
        return n * factorial(n - 1)
    
    # Negative numbers
    else:
        print("Invalid number.")
        quit()

if __name__ == '__main__':
    main()