import csv
from cs50 import SQL

# Create empty file
open("shows.db", "w").close()

# Open file as a SQL database
db = SQL("sqlite:///shows.db")

# Create desired tables
db.execute("CREATE TABLE shows (id INTEGER, title TEXT, PRIMARY KEY(id))")
db.execute("CREATE TABLE genres (show_id INTEGER, genre TEXT, FOREIGN KEY(show_id) REFERENCES shows(id))")

# Load data into database
with open("Favorite TV Shows - Form Responses 1.csv", "r") as file:
    reader = csv.DictReader(file)
    for row in reader:
        title = row["title"].rstrip().upper()
        id = db.execute("INSERT INTO shows (title) VALUES(?)", title)
        for genre in row["genres"].split(", "):
            db.execute("INSERT INTO genres (show_id, genre) VALUES(?, ?)", id, genre)