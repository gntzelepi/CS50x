import csv

# "Sets" eliminate duplicates
titles = set()

with open("Favorite TV Shows - Form Responses 1.csv", "r") as file:
    reader = csv.DictReader(file)
    for row in reader:
        # Add each title to the set,
        # trim all of white space to left & right
        # and force eveything to uppercase.
        titles.add(row["title"].rstrip().upper())

# Sort titles        
for title in sorted(titles):
    print(title)