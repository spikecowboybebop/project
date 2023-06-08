#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct patient_data {
    int reg_no;
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
void newquery(struct patient_data *ptr) {
    printf("Enter Registration Number - ");
        scanf("%d", &(ptr + 0)->reg_no);
        
        printf("Enter Name of the Patient - ");
        gets((ptr + 0)->pat_name);
        
        printf("Enter Name of the Patient's Guardian - ");
        gets((ptr + 0)->guar_name);
        
        printf("Enter Gender (M/F) - ");
        gets((ptr + 0)->gen);

        printf("Enter Blood Group - ");
        gets((ptr + 0)->bgrp);
        
        printf("Enter Age - ");
        scanf("%d", &(ptr + 0)->age);
        
        printf("Enter Address: \n");
            printf("\tHouse No. - ");
            gets((ptr + 0)->house_no);
            
            printf("\tStreet - ");
            gets((ptr + 0)->street);
            
            printf("\tCity - ");
            gets((ptr + 0)->city);
            
            printf("\tState - ");
            gets((ptr + 0)->state);
        
        printf("Enter Phone Number - ");
        scanf("%d", &(ptr + 0)->phn);
        
        printf("Disease Name - ");
        gets((ptr + 0)->dis_name);
        
        printf("Name of Doctor supervising the patient - ");
        gets((ptr + 0)->doc_name);
        
        char n;
        printf("Does the patient have any History(Y/N): ");
        scanf("%c", &n);
        
        if(n == 'Y') {
            printf("History - ");
            gets((ptr + 0)->his_desc);
            
            printf("Date of Treatment - ");
            gets((ptr + 0)->date_treat);
            
            printf("Treatment Given - ");
            gets((ptr + 0)->treat_given);
            
            printf("Medicine Prescribed - ");
            gets((ptr + 0)->med_pres);
        }
	else if (n == 'N') {
	    strcpy((ptr + 0)->his_desc, "None");
	    strcpy((ptr + 0)->date_treat, "None");
	    strcpy((ptr + 0)->treat_given, "None");
	    strcpy((ptr + 0)->med_pres, "None");
	}
}
void newentry(struct patient_data *ptr) {
    FILE *fptr;
    fptr = fopen("patient_records.txt", "a");

    fprintf(fptr, "Registration Number:\t");
    fprintf(fptr, "%d\n", (ptr + 0)->reg_no);
    
    fprintf(fptr, "Patient Name:\t");
    fprintf(fptr, "%s\n", (ptr + 0)->pat_name);

    fprintf(fptr, "Patient's Guardian Name:\t");
    fprintf(fptr, "%s\n", (ptr + 0)->guar_name);
    
    fprintf(fptr, "Patient's Gender:\t");
    fprintf(fptr, "%c\n", (ptr + 0)->gen);

    fprintf(fptr, "Blood Group:\t");
    fprintf(fptr, "%s\n", (ptr + 0)->bgrp);

    fprintf(fptr, "Age:\t");
    fprintf(fptr, "%d\n", (ptr + 0)->age);

    fprintf(fptr, "Address:\n");

    fprintf(fptr, "House No:\t");
    fprintf(fptr, "%d\n", (ptr + 0)->house_no);

    fprintf(fptr, "Street:\t");
    fprintf(fptr, "%s\n", (ptr + 0)->street);

    fprintf(fptr, "City:\t");
    fprintf(fptr, "%s\n", (ptr + 0)->city);

    fprintf(fptr, "State:\t");
    fprintf(fptr, "%s\n", (ptr + 0)->state);

    fprintf(fptr, "Phone Number:\t");
    fprintf(fptr, "%d\n", (ptr + 0)->phn);

    fprintf(fptr, "Disease Name:\t");
    fprintf(fptr, "%s\n", (ptr + 0)->dis_name);

    fprintf(fptr, "Doctor Name:\t");
    fprintf(fptr, "%s\n", (ptr + 0)->doc_name);

    fprintf(fptr, "History:\t");
    fprintf(fptr, "%s\n", (ptr + 0)->his_desc);

    fprintf(fptr, "Treatment Date:\t");
    fprintf(fptr, "%s\n", (ptr + 0)->date_treat);

    fprintf(fptr, "Treatment Given:\t");
    fprintf(fptr, "%s\n", (ptr + 0)->treat_given);

    fprintf(fptr, "Medicine Prescribed:\t");
    fprintf(fptr, "%s\n", (ptr + 0)->med_pres); 
}
int main() {
    int c;
    
    do {
        struct patient_data *ptr;
        ptr = (struct patient_data *)malloc(1 * sizeof(struct patient_data));
        newquery(ptr);
        newentry(ptr);
        
        printf("Enter 1 to enter patient's data | Enter 0 to return to Main Menu\n");
        printf("Enter 1/ 0 - ");
        scanf("%d", &c);
        
    } while(c == 1);

    return 0;
}
