# A program that appends values in a csv file

import csv
from cs50 import get_string

# Open file in append mode
file = open("phonebook.csv", "a")

# Get name and number from user
name = get_string("Name: ")
number = get_string("Number: ")

# Functionality that allows to write to the file
writer = csv.writer(file)

# Write a row that contains a name and a number
writer.writerow([name, number])

# Close file
file.close()