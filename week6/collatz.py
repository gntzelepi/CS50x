""" 
The Collatz conjecture speculates that it is always possible to get "back
to 1" if you follow these steps:
1. If n is 1, stop.
2. Else if n is even, repeat this process on n/2.
3. Else if n is odd, repeat this process on 3n + 1.

Below I calculate how many steps it takes to get to 1 starting from n and recurse.
"""

def main():
    try:
        # Prompt user for a positive integer
        n = int(input("Starting positive integer: "))
        
        # Print out result
        print("Number of steps it takes to get to 1 -->", collatz(n))
        
    except ValueError:
        print("Invalid input.")
        
        
def collatz(n):
    
    # Base case
    if n == 1:
        return 0
    
    # Exclude negative numbers
    elif n <= 0:
        print("Invalid number.")
        quit()
    
    # Recursive cases
    # N is even    
    elif n % 2 == 0:
        return 1 + collatz(n/2) 
    # N is odd
    elif n % 2 == 1:
        return 1 + collatz(3*n + 1)
         
if __name__ == '__main__':
    main()