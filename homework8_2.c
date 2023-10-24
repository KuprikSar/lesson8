// Написать только одну функцию, которая ставит в начало массива все четные
// элементы, а в конец – все нечетные. Не нарушайте порядок следования чисел
// между собой. Строго согласно прототипу:
// void sort_even_odd(int n, int a[])

#include <stdio.h>
#include <string.h>

#define SIZE 20

void change(int* a, int* b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortArray(int arr[]) 
{
    int i, j;
    for (i = 0; i < SIZE - 1; i++) 
    {
        for (j = 0; j < SIZE - i - 1; j++) 
        {
            if (arr[j] % 2 != 0 && arr[j+1] % 2 == 0) 
            {
                change(&arr[j], &arr[j+1]); //менять придётся с указателями
            }
        }
    }
}

int main() 
{
    int arr[SIZE] = {0};
    printf("Enter %d' array: ", SIZE);
    for (int i = 0; i < SIZE; i++) 
    {
        scanf("%d", &arr[i]);
    }
     
      
    // printf("original array: ");
    // for (int i = 0; i < n; i++) 
    // {
    //     printf("%d ", arr[i]);
    // }
    
    sortArray(arr);
    
    printf("\nEnd array: ");
    for (int i = 0; i < SIZE; i++) 
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}