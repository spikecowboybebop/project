#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct patient_data {
    char reg_no[15];
    char pat_name[50];
    char guar_name[50];
    char gen[8];
    char bgrp[5];
    char age[10];
    char address[4][30];
    char phn[15];
    char dis_name[20];
    char doc_name[50];
    char his_desc[200];
    char date_treat[20];
    char treat_given[100];
    char med_pres[100];
};
void newquery(struct patient_data *ptr) {
    printf("Enter registration Number - ");
    gets((ptr + 0)->reg_no);

    printf("Enter Patient Name - ");
    gets((ptr + 0)->pat_name);

    printf("Enter Patient's Guardian Name - ");
    gets((ptr + 0)->guar_name);

    printf("Enter Patient's Gender - ");
    gets((ptr + 0)->gen);

    printf("Enter Patient's Blood Group - ");
    gets((ptr + 0)->bgrp);

    printf("Enter Patient's Age - ");
    gets((ptr + 0)->age);

    printf("Enter Patient's Address -\n");
    printf("\tHouse No - ");
    gets((ptr + 0)->address[0]);

    printf("\tStreet - ");
    gets((ptr + 0)->address[1]);

    printf("\tCity - ");
    gets((ptr + 0)->address[2]);

    printf("\tState - ");
    gets((ptr + 0)->address[3]);

    printf("Enter Phone Number - ");
    gets((ptr + 0)->phn);

    printf("Enter Disease Name - ");
    gets((ptr + 0)->dis_name);

    printf("Enter Doctor's Name - ");
    gets((ptr + 0)->doc_name);

    char c;
    printf("Enter Y/N if the patient has any history: ");
    scanf("%c", &c);
    fflush(stdin);

    if(c == 'Y') {
        printf("Enter History - ");
        gets((ptr + 0)->his_desc);

        printf("Enter Treatment Date - ");
        gets((ptr + 0)->date_treat);

        printf("Treatment Given - ");
        gets((ptr + 0)->treat_given);

        printf("Medicine Prescribed - ");
        gets((ptr + 0)->med_pres);
    }
    else if(c == 'N') {
        strcpy((ptr + 0)->his_desc, "None");
        strcpy((ptr + 0)->date_treat, "None");
        strcpy((ptr + 0)->treat_given, "None");
        strcpy((ptr + 0)->med_pres, "None");
    }
}
void newwrite(struct patient_data *ptr) {
    FILE *fptr;
    char fname[100];
    strcpy(fname, (ptr + 0)->reg_no);
    strcat(fname, (ptr + 0)->pat_name);
    strcat(fname, ".txt");

    fptr = fopen(fname, "w");

    fprintf(fptr, "Registration Number: ");
    fprintf(fptr, "%s\n", (ptr + 0)->reg_no);

    fprintf(fptr, "Patient Name: ");
    fprintf(fptr, "%s\n", (ptr + 0)->pat_name);

    fprintf(fptr, "Patient's Guardian Name: ");
    fprintf(fptr, "%s\n", (ptr + 0)->guar_name);

    fprintf(fptr, "Patient's Gender: ");
    fprintf(fptr, "%s\n", (ptr + 0)->gen);

    fprintf(fptr, "Patient's Blood Group: ");
    fprintf(fptr, "%s\n", (ptr + 0)->bgrp);

    fprintf(fptr, "Patient's Age: ");
    fprintf(fptr, "%d\n", (ptr + 0)->age);

    fprintf(fptr, "Address: \n");

    fprintf(fptr, "\tHouse No: ");
    fprintf(fptr, "%d\n", (ptr + 0)->address[0]);

    fprintf(fptr, "\tStreet: ");
    fprintf(fptr, "%s\n", (ptr + 0)->address[1]);

    fprintf(fptr, "\tCity: ");
    fprintf(fptr, "%s\n", (ptr + 0)->address[2]);

    fprintf(fptr, "\tState: ");
    fprintf(fptr, "%s\n", (ptr + 0)->address[3]);

    fprintf(fptr, "Phone Number: ");
    fprintf(fptr, "%d\n", (ptr + 0)->phn);

    fprintf(fptr, "Disease Name: ");
    fprintf(fptr, "%s\n", (ptr + 0)->dis_name);

    fprintf(fptr, "Doctor Name: ");
    fprintf(fptr, "%s\n", (ptr + 0)->doc_name);

    fprintf(fptr, "History: ");
    fprintf(fptr, "%s\n", (ptr + 0)->his_desc);

    fprintf(fptr, "Treatment Date: ");
    fprintf(fptr, "%s\n", (ptr + 0)->date_treat);

    fprintf(fptr, "Treatment Given: ");
    fprintf(fptr, "%s\n", (ptr + 0)->treat_given);

    fprintf(fptr, "Medicine Prescribed: ");
    fprintf(fptr, "%s\n", (ptr + 0)->med_pres);

    fclose(fptr);
}
int main() {
    struct patient_data *ptr;
    ptr = (struct patient_data *)malloc(1 * sizeof(struct patient_data));

    int d;
    do {
        newquery(ptr);
        newwrite(ptr);

        printf("Enter 1/0 to enter new patient's data - ");
        scanf("%d", &d);
        fflush(stdin);

    } while (d == 1);

    return 0;
}
