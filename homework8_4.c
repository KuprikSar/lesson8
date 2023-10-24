// Написать только одну логическую функцию, которая определяет, верно ли, что
// среди элементов массива есть два одинаковых. Если ответ «да», функция
// возвращает 1; если ответ «нет», то 0. Строго согласно прототипу:
// int is_two_same(int size, int a[]);


#include <stdio.h>
#include <string.h>

#define SIZE 20

// void change(int* a, int* b) 
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

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

int main() 
{
    int arr[SIZE] = {0};
    printf("Enter %d' array: ", SIZE);
    for (int i = 0; i < SIZE; i++) 
    {
        scanf("%d", &arr[i]);
    }
             
    printf("Max - %d\n", findMax(arr));
    if (checkDuplicates(arr))
    {
        printf("YES DUPLICATES\n");
    }
    else
        printf("NO DUPLICATES\n");
        
    return 0;
}