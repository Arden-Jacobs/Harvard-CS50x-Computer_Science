#include <ctype.h>
#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>


int count_letters(string text);
int count_words(string text);
int count_sentences(string text);


int main(void)
{
    // prompt the user
    string text = get_string("Text: ");

    // calculate words, letters, sentences
    int letters = count_letters(text);
    float words = count_words(text);
    int sentences = count_sentences(text);

    // calculate average's
    float L = (letters/words) * 100;
    float S = (sentences/words) * 100;

    // calculate grade
    int index = round(0.0588 * L - 0.296 * S - 15.8);

    if ( index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n",index);
    }
}


int count_letters(string text)
{
    // Init the var to keep track of the letters
    int letters = 0;
    // Init the var for the length of text recieved
    int len = strlen(text);

    // Calculate the number of the letter
    for (int i = 0; i < len; i++)
    {
        if (islower(text[i]))
        {
            // if lower add 1
            letters += 1;
        }
        else if (isupper(text[i]))
        {
            // if upper add 1
            letters += 1;
        }
    }
    return letters;
}


int count_words(string text)
{
    // Init the var to keep track of the words
    int words = 0;
    // Init the var for the length of text recieved
    int len = strlen(text);

    // Calculate the number of the words
    for (int i = 0; i < len; i++)
    {
        if (isblank(text[i]))
        {
            words += 1;
        }
    }
    return words + 1;
}


int count_sentences(string text)
{
    // Init the var to keep track of the sentences
    int sentences = 0;
    // Init the var for the length of text recieved
    int len = strlen(text);

    // Calculate the number of the sentences
    for (int i = 0; i < len; i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences += 1;
        }
    }
    return sentences;
}