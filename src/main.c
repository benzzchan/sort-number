#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "quick_sort.h"

int main(int argc, char* argv[]) {
    if (argc != 2) {
        printf("Usage: %s -c (ascending) or %s -d (descending)\n", argv[0], argv[0]);
        return 1;
    }

    int ascending;
    if(strcmp(argv[1], "-c") == 0) {
        ascending = 1;
    } else if(strcmp(argv[1], "-d") == 0) {
        ascending = 0;
    } else {
        printf("Invalid option please try again : %s -c (ascending) or %s (descending)\n", argv[0], argv[0]);
    }

    int n;
    char check;
    
    while(check != 'Y' && check != 'y') {
        printf("How many numbers do you want to sort ? ");
        scanf("%d", &n);
        printf("Are you sure ? (Y/N)\n");
        printf("Y -> Yes ; N -> No\n");
        scanf(" %c", &check);
    }

    int* arr = (int*)malloc(1 * sizeof(int));

    printf("Enter the %d numbers : \n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    quickSort(arr, 0, n - 1, ascending);

    printf("\nSorted numbers (%s): ", ascending ? "ascending" : "descending");
    for(int i = 0; i < n; i++) {
        printf(" %d ", arr[i]);
    }

    printf("\n");

    free(arr);
    return 0;
}