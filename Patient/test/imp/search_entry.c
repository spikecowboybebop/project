#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct patient_data {
    char reg_no[15];
    char pat_name[50];
    char guar_name[50];
    char gen[8];
    char bgrp[5];
    int age;
    int house_no;
    char street[30];
    char city[30];
    char state[30];
    int phn;
    char dis_name[20];
    char doc_name[50];
    char his_desc[200];
    char date_treat[20];
    char treat_given[100];
    char med_pres[100];
};
void search_entry(struct patient_data *ptr) {
    printf("Enter Registration Number - ");
    gets((ptr + 0)->reg_no);

    printf("Enter Patient Name - ");
    gets((ptr + 0)->pat_name);

    char fname[100];
    strcpy(fname, (ptr + 0)->reg_no);
    strcat(fname, (ptr + 0)->pat_name);
    strcat(fname, ".txt");

    FILE *fptr;
    fptr = fopen(fname, "r");

    if(fptr == NULL) {
        printf("There is no record for %s(%s)", (ptr + 0)->pat_name, (ptr + 0)->reg_no);
    }
    else {
        printf("Record found for %s(%s)\n", (ptr + 0)->pat_name, (ptr + 0)->reg_no);
        printf("Choose what you want to do with this record:\n");
        printf("[Enter 1] - View the Record\n");
        printf("[Enter 2] - Modify the Record\n");
        printf("[Enter 3] - Delete the Record\n");
    }
}
int main() {
    struct patient_data *ptr;
    ptr = (struct patient_data *)malloc(1 * sizeof(struct patient_data));

    search_entry(ptr);

    return 0;
}
