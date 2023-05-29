#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
    Source by CPPReference (https://en.cppreference.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    int* p1 = malloc(10 * sizeof * p1);
    free(p1); 

    int* p2 = calloc(10, sizeof * p2);
    int* p3 = realloc(p2, 1000 * sizeof * p3);

    if (p3) {// p3 not null means p2 was freed by realloc
        free(p3);
    } else {// p3 null means p2 was not freed
        free(p2);
    }

    _getch();
    return 0;
}