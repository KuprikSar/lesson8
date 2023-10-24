// Составить функцию, которая меняет в массиве минимальный и максимальный
// элемент местами. Прототип функции
// void change_max_min(int size, int a[])



#include <stdio.h>
#include <string.h>

#define SIZE 10

 void change(int* a, int* b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int findMax(int arr[]) 
{
    int max = arr[0];
    for (int i = 1; i < SIZE; i++) 
    {
        if (arr[i] > max) 
        {
            max = arr[i];
        }
    }
    return max;
}

int checkDuplicates(int arr[]) // а если объём массива будет отличаться? Надо определять дополнительно его объём
{
    for (int i = 0; i < SIZE; i++) {
        for (int j = i + 1; j < SIZE; j++) 
        {
            if (arr[i] == arr[j]) 
            {
                return 1;
            }
        }
    }
    return 0;
}

void minMaxChange(int arr[]) 
{
    int minIndex = 0;
    int maxIndex = 0;

    for (int i = 1; i < SIZE; i++) 
    {
        if (arr[i] < arr[minIndex]) 
        {
            minIndex = i;
        }

        else if (arr[i] > arr[maxIndex]) 
        {
            maxIndex = i;
        }
    }

    change(&arr[minIndex], &arr[maxIndex]);
}

int main() 
{
    int arr[SIZE] = {0};
    int arrmaxmin[SIZE] = {0};
    printf("Enter %d' array: ", SIZE);
    for (int i = 0; i < SIZE; i++) 
    {
        scanf("%d", &arrmaxmin[i]); //читаем в другой массив
    }
             
    printf("Max - %d\n", findMax(arr));

    if (checkDuplicates(arr))
    {
        printf("YES DUPLICATES\n");
    }
    else
        printf("NO DUPLICATES\n");

    minMaxChange(arrmaxmin);

    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", arrmaxmin[i]);
    }
    
        
    return 0;
}