# first import the cs50 library
from cs50 import get_int

height = get_int("Height: ")

while height < 1 or height > 8:
    height = get_int("Height: ")

for i in range(height):
    for space in range(height - 1 - i):
        print(" ", end="")
    for right in range(i + 1):
        print("#", end="")
    print("  ", end="")
    for left in range(i + 1):
        print("#", end="")
    print()
