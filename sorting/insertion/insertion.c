#include <stdio.h>
#include <string.h>

void swap(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void insertion(int arr[], int len) 
{
    for (int i = 1; i < len - 1; i++) {
        int value = arr[i];
        int hole = i;

        while (hole > 0 && arr[hole - 1] > value) {
            arr[hole] = arr[hole - 1];
            hole = hole - 1;
        }
        arr[hole] = value;
    }
}
