import csv

# Prompt user for a title
title = input("Title: ").strip().upper()

with open("Favorite TV Shows - Form Responses 1.csv", "r") as file:
    reader = csv.DictReader(file)
    counter = 0
    for row in reader:
        # If title exists, increase counter
        if row['title'].strip().upper() == title:
            counter += 1

print(counter)