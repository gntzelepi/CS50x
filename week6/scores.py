# A program that calculates the average of scores

from cs50 import get_int

# Empty list
scores = []

# Number of scores
length = get_int("How many scores do you want to insert? ")

# Append scores in scores list
for i in range(length):
    n = get_int("Score: ")
    scores.append(n)

# Calculate average
average = sum(scores) / length

# Print average
print(f"Average: {average}")