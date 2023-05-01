#include <stdio.h>

int count_vowels(char* word)
{
    int num_vowels = 0;
    while (*word != '\0')
    {
        if (*word == 'a' || *word == 'e' || *word == 'i' || *word == 'o' || *word == 'u')
        {
            num_vowels++;
        }
        word++;
    }
    return num_vowels;
}

int count_consonants(char* word)
{
    int num_consonants = 0;
    while (*word != '\0')
    {
        if (*word >= 'a' && *word <= 'z' && *word != 'a' && *word != 'e' && *word != 'i' && *word != 'o' && *word != 'u')
        {
            num_consonants++;
        }
        word++;
    }
    return num_consonants;
}
