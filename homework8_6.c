// Определить количество положительных элементов квадратной матрицы,
// превышающих по величине среднее арифметическое всех элементов главной
// диагонали. Реализовать функцию среднее арифметическое главной
// диагонали.


#include <stdio.h>
#include <string.h>

//#define SIZE 10
#define SIZEMATRIX 3


float averageDiagonal(int matrix[???][???]) 
{
    int sum = 0;
    int count = 0;
    for (int i = 0; i < SIZEMATRIX; i++) //А если двумерное а дефайн только 1, то тут надо по объёму считать?
    {
        sum += matrix[i][i];
        count++;
    }
    if (count > 0) 
    {
        return (float)sum / count;
    } else {
        return 0;
    }
}

int countOverNumbers (int matrix[???][???])
{
    int count = 0;
    float average = averageDiagonal(matr); //но она ещё не определена
    if (matr[][] > average)
    {
        count++
    }
    
    return ????;
}

int main() 
{
    int count = 0;

    int matr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int n = 3;
    
    count = countOverNumbers(??????);

    printf("Average of diagonal matrix: %f\n", averageDiagonal(?????));
    printf("count of need numbers: %d\n", count);
        
    return 0;
}