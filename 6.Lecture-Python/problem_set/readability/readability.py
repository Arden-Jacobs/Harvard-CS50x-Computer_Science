from cs50 import get_string


def count_letters(text):
    #  Init the var to keep track of the letters
    letters = 0
    #  Init the var for the length of text recieved
    length = len(text)

    #  Calculate the number of the letter
    for i in range(length):
        if text[i].islower():
            # if lower add 1
            letters += 1
        elif text[i].isupper():
            # if upper add 1
            letters += 1
    return letters


def count_words(text):
    #  Init the var to keep track of the words
    words = 0
    #  Init the var for the length of text recieved
    length = len(text)

    #  Calculate the number of the words
    for i in range(length):
        if " " in text[i]:
            words += 1
    return words + 1


def count_sentences(text):
    #  Init the var to keep track of the sentences
    sentences = 0
    #  Init the var for the length of text recieved
    length = len(text)

    #  Calculate the number of the sentences
    for i in range(length):
        if text[i] == '.' or text[i] == '!' or text[i] == '?':
            sentences += 1
    return sentences


#  prompt the user
text = get_string("Text: ")

#  calculate words, letters, sentences
letters = count_letters(text)
words = count_words(text)
sentences = count_sentences(text)

#  calculate average's
L = (letters/words) * 100
S = (sentences/words) * 100

#  calculate grade
index = round((0.0588 * L) - (0.296 * S) - 15.8)

if index < 1:
    print("Before Grade 1")
elif index >= 16:
    print("Grade 16+")
else:
    print("Grade " + str(index))
