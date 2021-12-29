# A program that returns the nth term(s) of the Fibonacci Sequence

def main():
    try:
        # Prompt user for desired terms
        n = int(input("How many Fibonacci Sequence terms? "))
        
        # Print out terms
        for n in range(1, n + 1):
            print(n, ":", fibonacci(n))
    except ValueError:
        print("Invalid input.")

def fibonacci(n):
    
    # Base cases
    if n == 0:
        return 0
    elif n == 1:
        return 1
    
    # Recursive case
    else:
        return (fibonacci(n - 1) + fibonacci(n - 2))
    
if __name__ == "__main__":
    main()