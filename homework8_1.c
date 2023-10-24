// Написать только одну функцию, которая сортирует массив по возрастанию.
// Необходимо реализовать только одну функцию, всю программу составлять не
// надо.
// Строго согласно прототипу. Имя функции и все аргументы должны быть:
// void sort_array(int size, int a[])
// Всю программу загружать не надо, только одну эту функцию. Можно просто
// закомментировать текст всей программы, кроме данной функции.


#include <stdio.h>
#include <string.h>

#define SIZE 10

void bubble_sort(int a[])
{
    int tmp;
    for (int i = 0; i < SIZE - 1; i++)
    {
        for (int j = 0; j < SIZE - 1; j++)
        {
            if (a[j] > a[j+1]) 
            {
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }
}

int main() 
{
    int s[SIZE] = {0};
    printf("Enter %d' array: ", SIZE);
    for (int i = 0; i < SIZE; i++) 
    {
        scanf("%d", &s[i]);
    }
        
    bubble_sort(s);
    
    for (size_t i = 0; i < SIZE - 1; i++)
    {
        printf("%d\n", s[i]);
    }
    
    return 0;
}
