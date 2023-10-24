// Написать только одну функцию, которая находит максимальный элемент в
// массиве. Всю программу загружать не надо.
// Прототип функции: int find_max_array(int size, int a[])
// Данные на входе: Массив состоящий из целых чисел. Первый аргумент,
// размер массива, второй аргумент адрес нулевого элемента.
// Данные на выходе: Одно целое число


#include <stdio.h>
#include <string.h>

#define SIZE 20

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

int main() 
{
    int arr[SIZE] = {0};
    printf("Enter %d' array: ", SIZE);
    for (int i = 0; i < SIZE; i++) 
    {
        scanf("%d", &arr[i]);
    }
            
    printf("Max - %d\n", findMax(arr));
    
    return 0;
}