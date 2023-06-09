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
void load_record(struct patient_data *ptr) {
    char fname[100];
    strcpy(fname, (ptr + 0)->reg_no);
    strcat(fname, (ptr + 0)->pat_name);
    strcat(fname, ".txt");

    FILE *cptr;
    cptr = fopen(fname, "r");

    char data[18][200];
    for(int i =0; (fgets(data[i], sizeof(data), cptr) != NULL) && (i < 18); i++) {
        continue;
    }
    strcpy((ptr + 0)->reg_no, data[0]);
    strcpy((ptr + 0)->pat_name, data[1]);
    strcpy((ptr + 0)->guar_name, data[2]);
    strcpy((ptr + 0)->gen, data[3]);
    strcpy((ptr + 0)->bgrp, data[4]);
    strcpy((ptr + 0)->age, data[5]);
    strcpy((ptr + 0)->address[0], data[6]);
    strcpy((ptr + 0)->address[1], data[7]);
    strcpy((ptr + 0)->address[2], data[8]);
    strcpy((ptr + 0)->address[3], data[9]);
    strcpy((ptr + 0)->phn, data[10]);
    strcpy((ptr + 0)->dis_name, data[11]);
    strcpy((ptr + 0)->doc_name, data[12]);
    strcpy((ptr + 0)->his_desc, data[13]);
    strcpy((ptr + 0)->date_treat, data[14]);
    strcpy((ptr + 0)->treat_given, data[15]);
    strcpy((ptr + 0)->med_pres, data[16]);

    fclose(cptr);
}
void print_record(struct patient_data *ptr) {
    printf("Registration Number - ");
    puts((ptr + 0)->reg_no);

    printf("Patient Name - ");
    puts((ptr + 0)->pat_name);

    printf("Patient's Guardian Name - ");
    puts((ptr + 0)->guar_name);

    printf("Patient's Gender - ");
    puts((ptr + 0)->gen);

    printf("Patient's Blood Group - ");
    puts((ptr + 0)->bgrp);

    printf("Patient's Age - ");
    puts((ptr + 0)->age);

    printf("Patient's Address -\n");
    printf("\tHouse No - ");
    puts((ptr + 0)->address[0]);

    printf("\tStreet - ");
    puts((ptr + 0)->address[1]);

    printf("\tCity - ");
    puts((ptr + 0)->address[2]);

    printf("\tState - ");
    puts((ptr + 0)->address[3]);

    printf("Phone Number - ");
    puts((ptr + 0)->phn);

    printf("Disease Name - ");
    puts((ptr + 0)->dis_name);

    printf("Doctor's Name - ");
    puts((ptr + 0)->doc_name);

    printf("History - ");
    puts((ptr + 0)->his_desc);

    printf("Treatment Date - ");
    puts((ptr + 0)->date_treat);

    printf("Treatment Given - ");
    puts((ptr + 0)->treat_given);

    printf("Medicine Prescribed - ");
    puts((ptr + 0)->med_pres);
}
void search_record(struct patient_data *ptr) {
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
        fclose(fptr);
    }
    else {
        printf("\nRecord found for %s(%s)\n\n", (ptr + 0)->pat_name, (ptr + 0)->reg_no);

        load_record(ptr);
        print_record(ptr);
        fclose(fptr);
    }
}
int main() {
    struct patient_data *ptr;
    ptr = (struct patient_data *)malloc(1 * sizeof(struct patient_data));

    search_record(ptr);
    
    return 0;
}