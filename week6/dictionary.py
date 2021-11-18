# A spell checker

# Global variable to store dictionary
words = set()

# Check if given word is in my set of words
def check(word):
    if word.lower() in words: # case sensitivity
        return True
    else:
        return False

# Load each word from dictionary and
# put it into my set
def load(dictionary):
    file = open(dictionary, "r")
    for line in file:
        words.add(line.rstrip()) # rstrip gets rid of chars at the end of str
        file.close()
        return True

# Return the number of words in set
def size():
    return len(words)