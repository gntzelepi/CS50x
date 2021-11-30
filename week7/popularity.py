import csv

# Dictionary
titles = {}

with open("Favorite TV Shows - Form Responses 1.csv", "r") as file:
    reader = csv.DictReader(file)
    for row in reader:
        title = row["title"].rstrip().upper()
        if title not in titles:
            titles[title] = 0
        titles[title] += 1

# A function that takes as input a title
# and returns the value corresponding to that key.
def f(title):
    return titles[title]

# "Sorted" is sorting by key, not by value.
# I'm passing the "key" argument so as to make "sorted"
# call "f" on every element in the dictionary "titles".
# The return value will be used to determine the
# actual ordering.
for title in sorted(titles, key=f, reverse=True):
    print(title, titles[title])

# Instead of f, I can use a lambda function as well.
# for title in sorted(titles, key=lambda title: titles[title], ...)