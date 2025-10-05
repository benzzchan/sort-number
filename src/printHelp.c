#include <stdio.h>
#include "printHelp.h"

void printHelp(int langage) {
    if(langage == 0) {
        printf("\n");
        printf("=============================================================\n");
        printf("\n");

        printf("\033[32mChoisir la langue : ./progname -hen (anglais)\033[0m\n");

        printf("\n");
        printf("\n");
    
        printf("Utilisation de la commande ./progname -c : Permet de trier dans l'ordre croissant les nombres\n");
        printf("Utilisation de la commande ./progname -d : Permet de trier dans l'ordre décroissant les nombres\n");
    
        printf("\n");
        printf("\n");
    
        printf("Explication de l'algorithme de trie rapide :\n");
        printf("\n");
        printf("- Prends un pivot de référence (le dernier élément du tableau)\n");
        printf("- Réorganise le tableau : tous les nombres inférieurs au pivot vont à gauche\n  et tous les nombres supérieurs à droite (pour un tri croissant)\n");
        printf("- Répète récursivement ce processus sur les sous-tableaux gauche et droite\n  jusqu'à ce que tout le tableau soit trié dans l'ordre demandé (croissant ou décroissant)\n");
    }

    printf("\n");
    printf("=============================================================\n");
    printf("\n");

    if(langage == 1) {
        printf("\n");
        printf("=============================================================\n");
        printf("\n");

        printf("\033[32mChoose the language: ./progname -h (French by default)\033[0m\n");

        printf("\n");
        printf("\n");

        printf("Usage of the command ./progname -c: Sorts the numbers in ascending order\n");
        printf("Usage of the command ./progname -d: Sorts the numbers in descending order\n");

        printf("\n");
        printf("\n");

        printf("Explanation of the Quick Sort algorithm:\n");
        printf("\n");
        printf("- Select a reference pivot (the last element of the array)\n");
        printf("- Rearrange the array: all numbers smaller than the pivot go to the left,\n  and all numbers greater than the pivot go to the right (for ascending order)\n");
        printf("- Repeat this process recursively on the left and right subarrays until the entire array is sorted in the requested order (ascending or descending)\n");

        printf("\n");
        printf("=============================================================\n");
        printf("\n");
    }
}