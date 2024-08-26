import sys
from cs50 import get_string

num = get_string("Number: ")

lenth = len(num)

card = ""

if lenth == 13 and num.startswith("4"):
    card = "VISA"

if len(num) == 15:
    if num[:2] in ["34", "37"]:
        card = "AMEX"

if lenth == 16:
    if (num.startswith("4")):
        card = "VISA"
    elif num[:2] in ["51", "52", "53", "54", "55"]:
        card = "MASTERCARD"

temp = num[::-1]
mul = []
sum = []

for i in range(lenth):
    if i == 0:
        sum += temp[i]
    elif i % 2 == 0:
        sum += temp[i]
    elif i % 2 != 0:
        mul += temp[i]


def split(word):
    return [char for char in word]


ans = 0
for i in range(len(mul)):
    mul[i] = str(int(mul[i]) * 2)
    if len(mul[i]) == 2:
        val = split(mul[i])
        ans += int(val[0])
        ans += int(val[1])
    else:
        ans += int(mul[i])

for i in range(len(sum)):
    ans += int(sum[i])

if card == "":
    print("INVALID")
elif ans % 10 == 0:
    print(card)
else:
    print("INVALID")
    sys.exit
