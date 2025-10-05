#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "quick_sort.h"
#include "printHelp.h"

int main(int argc, char* argv[]) {
    if (argc != 2) {
        printf("Usage:\n%s -c (ascending) or %s -d (descending)\n%s -h (Help)\n", argv[0], argv[0], argv[0]);
        return 1;
    }

    int ascending;
    if(strcmp(argv[1], "-c") == 0) {
        ascending = 1;
    } else if(strcmp(argv[1], "-d") == 0) {
        ascending = 0;
    } else if(strcmp(argv[1], "-h") == 0) {
        printHelp(0);
        return 0;
    } else if(strcmp(argv[1], "-hen") == 0) {
        printHelp(1);
        return 0;
    } 
    
    else {
        printf("Invalid option please try again :\n%s -c (ascending) or %s -d (descending)\n%s -h (help)\n", argv[0], argv[0], argv[0]);
        return 1;
    }

    int n;
    char check = 'N';
    int result;
    
    while(check != 'Y' && check != 'y') {
        do {
            printf("How many numbers do you want to sort ? ");
            result = scanf("%d", &n);

            if (result != 1) {
                printf("\033[31mInvalid input. Please enter a number.\033[0m\n");
                while (getchar() != '\n');
            }
        } while (result != 1);

        printf("Are you sure ? (Y/N) : ");
        scanf(" %c", &check);
        printf("\n");
    }

    int* arr = (int*)malloc(1 * sizeof(int));

    printf("Enter the %d numbers : \n", n);
    for(int i = 0; i < n; i++) {
        do {
            result = scanf("%d", &arr[i]);
            if(result != 1) {
                printf("\033[31mInvalid input. Please enter a number.\033[0m\n");
                while (getchar() != '\n');
            }
        } while(result != 1);
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