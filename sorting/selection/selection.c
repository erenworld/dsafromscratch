#include <stdio.h>
#include <string.h>

void swap(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionsort(int array[], int length)
{
    int step = 0;
    int k;
    for (int step = 0; step < length-1; step++) {
        int min = step;
        for (k = step + 1; k < length; k++) {
            if (array[min] > array[k]) min = k;
        }
        swap(&array[min], &array[step]);
    }
}


void printArray(int array[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("%d  ", array[i]);
    }
    printf("\n");
}

int main() {
    int data[] = {20, 12, 10, 15, 2};
    int size = sizeof(data) / sizeof(data[0]);
    selectionsort(data, size);
    printArray(data, size);
    return 0;
}
