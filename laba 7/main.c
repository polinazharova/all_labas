#include "task1_2.h"
#include "task3.h"

void main(){   
    
    printf("TASK 1\n");
    char words[NUM_WORDS][WORD_LENGTH];

    printf("Enter %d words: ", NUM_WORDS);
    for (int i = 0; i < NUM_WORDS; i++)
    {
        scanf("%s", words[i]);
    }

    int choice;
    printf("Choose a sorting algorithm:\n");
    printf("1. Selection Sort\n");
    printf("2. Bubble Sort\n");
    printf("3. Comb Sort\n");
    printf("4. All\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        selection_sort(words);
        break;
    case 2:
        bubble_sort(words);
        break;
    case 3:
        comb_sort(words);
        break;
    case 4:
        selection_sort(words);
        bubble_sort(words);
        comb_sort(words);
        break;
    default:
        printf("Invalid choice.\n");
        break;
    }


    printf("TASK 2\n");
    int size = NUM_WORDS;
    comb_sort_new(words, size);


    printf("TASK 3\n");
    char word[20];
    printf("Enter a word: ");
    scanf("%s", word);

    int num_vowels = count_vowels(word);
    printf("Number of vowels: %d\n", num_vowels);

    int num_consonants = count_consonants(word);
    printf("Number of consonants: %d\n", num_consonants);
}