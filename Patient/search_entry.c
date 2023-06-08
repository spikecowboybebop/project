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
void load_record(struct patient_data *ptr, FILE *fptr) {
    char data[18][200];
    for(int i =0; (fgets(data[i], sizeof(data), fptr) != NULL) && (i < 18); i++) {
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
void file_overwrite(struct patient_data *ptr, FILE *fptr) {
    fprintf(fptr, "%s\n", (ptr + 0)->reg_no);

    fprintf(fptr, "%s\n", (ptr + 0)->pat_name);

    fprintf(fptr, "%s\n", (ptr + 0)->guar_name);

    fprintf(fptr, "%s\n", (ptr + 0)->gen);

    fprintf(fptr, "%s\n", (ptr + 0)->bgrp);

    fprintf(fptr, "%d\n", (ptr + 0)->age);

    fprintf(fptr, "%d\n", (ptr + 0)->address[0]);

    fprintf(fptr, "%s\n", (ptr + 0)->address[1]);

    fprintf(fptr, "%s\n", (ptr + 0)->address[2]);

    fprintf(fptr, "%s\n", (ptr + 0)->address[3]);

    fprintf(fptr, "%d\n", (ptr + 0)->phn);

    fprintf(fptr, "%s\n", (ptr + 0)->dis_name);

    fprintf(fptr, "%s\n", (ptr + 0)->doc_name);

    fprintf(fptr, "%s\n", (ptr + 0)->his_desc);

    fprintf(fptr, "%s\n", (ptr + 0)->date_treat);

    fprintf(fptr, "%s\n", (ptr + 0)->treat_given);

    fprintf(fptr, "%s\n", (ptr + 0)->med_pres);
}
void modify_record(struct patient_data *ptr, FILE *fptr) {
        int b;
        do {
            printf("[Enter 1] - Modify Patient's Name\n");
            printf("[Enter 2] - Modify Patient's Guardian's Name\n");
            printf("[Enter 3] - Modify Patient's Gender\n");
            printf("[Enter 4] - Modify Patient's Blood Group\n");
            printf("[Enter 5] - Modify Patient's Age\n");
            printf("[Enter 6] - Modify Patient's House No\n");
            printf("[Enter 7] - Modify Patient's Address Street\n");
            printf("[Enter 8] - Modify Patient's Address City\n");
            printf("[Enter 9] - Modify Patient's Address State\n");
            printf("[Enter 10] - Modify Patient's Phone\n");
            printf("[Enter 11] - Modify Patient's Disease Name\n");
            printf("[Enter 12] - Modify Patient's Doctor's Name\n");
            printf("[Enter 13] - Modify Patient's History(Description)\n");
            printf("[Enter 14] - Modify Patient's History(Treatment Date)\n");
            printf("[Enter 15] - Modify Patient's History(Treatment Given)\n");
            printf("[Enter 16] - Modify Patient's History(Medicine Prescribed)\n");
            int a;
            printf("Choice: ");
            scanf("%d", &a);
            fflush(stdin);

            char temp[100];
            switch(a) {
            case 1:
                printf("Enter Patient's Name - ");
                gets(temp);
                strcpy((ptr + 0)->pat_name, temp);
                break;
            case 2:
                printf("Enter Patient's Guardian's Name - ");
                gets(temp);
                strcpy((ptr + 0)->guar_name, temp);
                break;
            case 3:
                printf("Enter Patient's Gender - ");
                gets(temp);
                strcpy((ptr + 0)->gen, temp);
                break;
            case 4:
                printf("Enter Patient's Blood Group - ");
                gets(temp);
                strcpy((ptr + 0)->bgrp, temp);
                break;
            case 5:
                printf("Enter Patient's Age - ");
                gets(temp);
                strcpy((ptr + 0)->age, temp);
                break;
            case 6:
                printf("Enter Patient's House No - ");
                gets(temp);
                strcpy((ptr + 0)->address[0], temp);
                break;
            case 7:
                printf("Enter Patient's Street - ");
                gets(temp);
                strcpy((ptr + 0)->address[1], temp);
                break;
            case 8:
                printf("Enter Patient's City - ");
                gets(temp);
                strcpy((ptr + 0)->address[2], temp);
                break;
            case 9:
                printf("Enter Patient's Phone Number - ");
                gets(temp);
                strcpy((ptr + 0)->address[3], temp);
                break;
            case 10:
                printf("Enter Patient's Disease Name - ");
                gets(temp);
                strcpy((ptr + 0)->dis_name, temp);
                break;
            case 11:
                printf("Enter Patient's Doctor's Name - ");
                gets(temp);
                strcpy((ptr + 0)->doc_name, temp);
                break;
            case 12:
                printf("Enter Patient's History(Description) - ");
                gets(temp);
                strcpy((ptr + 0)->his_desc, temp);
                break;
            case 13:
                printf("Enter Patient's History(Treatment Date) - ");
                gets(temp);
                strcpy((ptr + 0)->date_treat, temp);
                break;
            case 14:
                printf("Enter Patient's History(Treatment Given) - ");
                gets(temp);
                strcpy((ptr + 0)->treat_given, temp);
                break;
            case 15:
                printf("Enter Patient's History(Medicine Prescribed) - ");
                gets(temp);
                strcpy((ptr + 0)->med_pres, temp);
                break;
            default: 
                printf("Error!\n");
                break;
        }
        file_overwrite(ptr, fptr);
        printf("Enter 1 to modify another record or 0 to exit - ");
        scanf("%d", &b);
        } while (b == 1);
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
    fptr = fopen(fname, "w+");

    if(fptr == NULL) {
        printf("There is no record for %s(%s)", (ptr + 0)->pat_name, (ptr + 0)->reg_no);
    }
    else {
        printf("Record found for %s(%s)\n", (ptr + 0)->pat_name, (ptr + 0)->reg_no);
        printf("Choose what you want to do with this record:\n");
        printf("[Enter 1] - View the Record\n");
        printf("[Enter 2] - Modify the Record\n");
        printf("[Enter 3] - Delete the Record\n\n");
        printf("Choice: ");
        int n;
        scanf("%d", &n);
            if(n == 1) {
                load_record(ptr, fptr);
                print_record(ptr);
            }
            else if(n == 2) {
                load_record(ptr, fptr);
                modify_record(ptr, fptr);
            }
            else if(n == 3) {
                load_record(ptr, fptr);
                //delete_record(ptr);
            }
    }
}
int main() {
    struct patient_data *ptr;
    ptr = (struct patient_data *)malloc(1 * sizeof(struct patient_data));

    search_record(ptr);
    
    return 0;
}
