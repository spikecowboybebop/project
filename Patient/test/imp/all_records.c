#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fptr;
    fptr = fopen("all_records.txt", "r");

    if(fptr == NULL) {
        printf("No Record Found");
    }
    else {
        printf("All Records were found");
    }

    return 0;
}
