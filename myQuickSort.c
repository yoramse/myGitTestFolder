//quick sort algorithm
//input: array of integers
//output: sorted array of integers

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

void quickSort(int *array, int left, int right);
int partition(int *array, int left, int right);
void swap(int *a, int *b);

int main(void)
{
    int array[MAX];
    int i;
    
    srand(time(NULL));
    
    for(i = 0; i < MAX; i++)
    {
        array[i] = rand() % 100;
    }
    
    quickSort(array, 0, MAX - 1);
    
    for(i = 0; i < MAX; i++)
    {
        printf("%d ", array[i]);
    }
    
    return 0;
}
