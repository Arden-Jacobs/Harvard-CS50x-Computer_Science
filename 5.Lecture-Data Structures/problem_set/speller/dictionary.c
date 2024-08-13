#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
} node;

// Keep track of the size of the dict when loaded
int dict_size = 0;

// Choose number of buckets in hash table
const unsigned int N = LENGTH + 1; // Ensure enough buckets

// Hash table
node *table[N];

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    // Hash the word to obtain its hash value
    int hash_value = hash(word);

    // set a temp value to keep track of where we are in the linked list
    node *temp = table[hash_value];
    // check that everything went well and we can trust there is a valid address
    if (temp == NULL)
    {
        return false;
    }

    // create a loop to check for the word in the list
    while (temp != NULL)
    {
        // check if the words are the same, read docs to find out why we check for 0
        if (strcasecmp(word, temp->word) == 0)
        {
            // Return True if the word was found
            return true;
        }
        // set temp equal to the node address in the list
        temp = temp->next;
    }
    // Return False if the word does match
    return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    // variable to keep track of the letters
    int count = 0;
    // variable to keep track of the ASCII values
    int val = 0;

    // variable for the length of the word
    int j = strlen(word);

    // loop over the word
    for (int i = 0; i < j; i++)
    {
        // lets get the ASCII value
        int y = toupper(word[i]) - 'A';
        // add all the values
        val += y;

        // add to the count to keep track of the letters
        count += 1;
    }

    // Lets subtract the amount of letters by the Val
    val = val / count;

    return val % N;
}

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{
    // Initialize hash table to NULL
    for (int i = 0; i < N; i++)
    {
        table[i] = NULL;
    }

    // Open the dictionary file
    FILE *source = fopen(dictionary, "r");

    // check that we could open and read the file
    if (source == NULL)
    {
        return false;
    }

    // Create space to save the word from dic
    char word[LENGTH + 1];

    // Read each word in the file
    while (fscanf(source, "%s", word) != EOF)
    {
        // Create space for a new hash table node
        node *n = malloc(sizeof(node));

        // check that memory was allocated correctly
        if (n == NULL)
        {
            fclose(source); // Close the file if malloc fails
            return false;
        }

        // copy the word from dic into hash table node
        strcpy(n->word, word);

        // Hash the word to get the hash value
        unsigned int idx = hash(word);

        // use the hash value to set next pointer
        n->next = table[idx];

        // add the node to the hash table at the hash value
        table[idx] = n;

        // add to size every time we add a word
        dict_size += 1;
    }

    // Close the dictionary file
    fclose(source);

    // Return true for completing the load function correctly
    return true;
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    return dict_size;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    for (int i = 0; i < N; i++)
    {
        node *trav = table[i];
        while (trav != NULL)
        {
            node *temp = trav;
            trav = trav->next;
            free(temp);
        }
    }
    return true;
}
