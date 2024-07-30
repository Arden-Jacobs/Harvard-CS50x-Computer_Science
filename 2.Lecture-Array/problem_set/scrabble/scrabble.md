# Scrabble

![Scrabble Board](https://cs50.harvard.edu/x/2024/psets/2/scrabble/scrabble.png)

In the game of [Scrabble](https://shop.hasbro.com/en-us/parentkid?brand=scrabble), players create words to score points, and the number of points is the sum of the point values of each letter in the word.

|  A  |  B  |  C  |  D  |  E  |  F  |  G  |  H  |  I  |  J  |  K  |  L  |  M  |  N  |  O  |  P  |  Q  |  R  |  S  |  T  |  U  |  V  |  W  |  X  |  Y  |  Z  |
|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
|  1  |  3  |  3  |  2  |  1  |  4  |  2  |  4  |  1  |  8  |  5  |  1  |  3  |  1  |  1  |  3  | 10  |  1  |  1  |  1  |  1  |  4  |  4  |  8  |  4  | 10  |

For example, if we wanted to score the word “CODE”, we would note that the ‘C’ is worth 3 points, the ‘O’ is worth 1 point, the ‘D’ is worth 2 points, and the ‘E’ is worth 1 point. Summing these, we get that “CODE” is worth 7 points.

In a file called scrabble.c in a folder called scrabble, implement a program in C that determines the winner of a short Scrabble-like game. Your program should prompt for input twice: once for “Player 1” to input their word and once for “Player 2” to input their word. Then, depending on which player scores the most points, your program should either print “Player 1 wins!”, “Player 2 wins!”, or “Tie!” (in the event the two players score equal points).

## Advice

- Write some code that you know will compile

        #include <ctype.h>
        #include <cs50.h>
        #include <stdio.h>
        #include <string.h>

        int main(void)
        {

        }

    Notice that you’ve now included a few header files that will give you access to functions which might help you solve this problem.

- Write some pseudocode before writing more code

    If unsure how to solve the problem itself, break it down into smaller problems that you can probably solve first. For instance, this problem is really only a handful of problems:

    1.Prompt for the user for two words
    
    2.Compute the score of each word
    
    3.Print the winner
    
    Let’s write some pseudcode as comments to remind you to do just that:

        #include <ctype.h>
        #include <cs50.h>
        #include <stdio.h>
        #include <string.h>

        int main(void)
        {
            // Prompt the user for two words

            // Compute the score of each word

            // Print the winner
        }

## How to Test

Your program should behave per the examples below.

    $ ./scrabble
    Player 1: Question?
    Player 2: Question!
    Tie!
---
    $ ./scrabble
    Player 1: red
    Player 2: wheelbarrow
    Player 2 wins!
---
    $ ./scrabble
    Player 1: COMPUTER
    Player 2: science
    Player 1 wins!
---
    $ ./scrabble
    Player 1: Scrabble
    Player 2: wiNNeR
    Player 1 wins!

## Correctness

In your terminal, execute the below to check your work’s correctness.

    check50 cs50/problems/2024/x/scrabble

## Style

Execute the below to evaluate the style of your code using style50.

    style50 scrabble.c

## How to Submit

In your terminal, execute the below to submit your work.

    submit50 cs50/problems/2024/x/scrabble
