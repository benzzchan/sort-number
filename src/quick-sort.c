#include "quick-sort.h"

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int start, int end, int ascending) {
    int pivot = arr[end];
    int i = start - 1;

    for(int j = start; j <= end - 1; j++) {
        if((ascending && arr[j] < pivot) || (!ascending && arr[j] > pivot)) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    i++;
    swap(&arr[i], &arr[end]);
    return i;
}

void quickSort(int arr[], int start, int end, int ascending) {
    if (start >= end) return;
    
    int pivot = partition(arr, start, end, ascending);
    quickSort(arr, start, pivot - 1, ascending);
    quickSort(arr, pivot + 1, end, ascending);
}