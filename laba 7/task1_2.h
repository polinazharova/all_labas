/*
1. словарь, который я ввела, т.е. на 10 слов, bubble sort отсортировала за меньшее кол-во итераций, 
однако уверена, что тенденция будет меняться по мере возрастания количества
элементов, которые нужно отсортировать. также видела, что существуют другие алгоритмы,
работающие быстрее, чем bubble sort, когда отсортировать требуется небольшое кол-во элементов.

2. алгоритмы выполнялись не за одинаковое время, ибо они имеют разную эффективность при
работе с одинаковым массивом.
*/

#include <stdio.h>
#include <string.h>
#include <time.h>

#define NUM_WORDS 10
#define WORD_LENGTH 20

void print_words(char words[][WORD_LENGTH])
{
    for (int i = 0; i < NUM_WORDS; i++)
    {
        printf("%s ", words[i]);
    }
    printf("\n");
}

void selection_sort(char words[][WORD_LENGTH])
{
    int num_iterations = 0;
    for (int i = 0; i < NUM_WORDS - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < NUM_WORDS; j++)
        {
            if (strcmp(words[j], words[min_index]) < 0)
            {
                min_index = j;
            }
            num_iterations++;
        }
        if (min_index != i)
        {
            char temp[WORD_LENGTH];
            strcpy(temp, words[i]);
            strcpy(words[i], words[min_index]);
            strcpy(words[min_index], temp);
        }
    }
    printf("Selection Sort: ");
    print_words(words);
    printf("Iterations: %d\n\n", num_iterations);
}

void bubble_sort(char words[][WORD_LENGTH])
{
    int num_iterations = 0;
    for (int i = 0; i < NUM_WORDS - 1; i++)
    {
        int num_swaps = 0;
        for (int j = 0; j < NUM_WORDS - i - 1; j++)
        {
            if (strcmp(words[j], words[j + 1]) > 0)
            {
                char temp[WORD_LENGTH];
                strcpy(temp, words[j]);
                strcpy(words[j], words[j + 1]);
                strcpy(words[j + 1], temp);
                num_swaps++;
            }
            num_iterations++;
        }
        if (num_swaps == 0)
        {
            break;
        }
    }
    printf("Bubble Sort: ");
    print_words(words);
    printf("Iterations: %d\n\n", num_iterations);
}

void comb_sort(char words[][WORD_LENGTH])
{
    int num_iterations = 0;
    float shrink = 1.3;
    int gap = NUM_WORDS;
    int swapped = 1;
    while (gap > 1 || swapped)
    {
        gap = (int)(gap / shrink);
        if (gap < 1)
        {
            gap = 1;
        }
        swapped = 0;
        for (int i = 0; i < NUM_WORDS - gap; i++)
        {
            if (strcmp(words[i], words[i + gap]) > 0)
            {
                char temp[WORD_LENGTH];
                strcpy(temp, words[i]);
                strcpy(words[i], words[i + gap]);
                strcpy(words[i + gap], temp);
                swapped = 1;
            }
            num_iterations++;
        }
    }
    printf("Comb Sort: ");
    print_words(words);
    printf("Iterations: %d\n\n", num_iterations);
}





void comb_sort_new(char (*words)[WORD_LENGTH], int size)
{
    int num_iterations = 0;
    float shrink = 1.3;
    int gap = size;
    int swapped = 1;
    while (gap > 1 || swapped)
    {
        gap = (int)(gap / shrink);
        if (gap < 1)
        {
            gap = 1;
        }
        swapped = 0;
        for (int i = 0; i < size - gap; i++)
        {
            if (strcmp(*(words + i), *(words + i + gap)) > 0)
            {
                char temp[WORD_LENGTH];
                strcpy(temp, *(words + i));
                strcpy(*(words + i), *(words + i + gap));
                strcpy(*(words + i + gap), temp);
                swapped = 1;
            }
            num_iterations++;
        }
    }
    printf("Comb Sort: ");
    print_words(words);
    printf("Iterations: %d\n\n", num_iterations);
}