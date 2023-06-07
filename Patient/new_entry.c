#include <stdio.h>
struct patient_data {
    int reg_no;
    char pat_name[50];
    char guar_name[50];
    char gen[1];
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
        fflush(stdin);
        
        printf("Enter Name of the Patient - ");
        scanf("%s", &(ptr + 0)->pat_name);
        fflush(stdin);
        
        printf("Enter Name of the Patient's Guardian - ");
        scanf("%s", &(ptr + 0)->guar_name);
        fflush(stdin);
        
        printf("Enter Gender - M/F");
        scanf("%c", &(ptr + 0)->gen);
        fflush(stdin);
        printf("Enter Blood Group - ");
        scanf("%s", &(ptr + 0)->bgrp);
        fflush(stdin);
        
        printf("Enter Age - ");
        scanf("%d", &(ptr + 0)->age);
        fflush(stdin);
        
        printf("Enter Address: ");
            printf("\tHouse No. - ");
            scanf("%d", &(ptr + 0)->house_no);
            fflush(stdin);
            
            printf("\tHouse No. - ");
            scanf("%s", &(ptr + 0)->street);
            fflush(stdin);
            
            printf("\tHouse No. - ");
            scanf("%s", &(ptr + 0)->city);
            fflush(stdin);
            
            printf("\tHouse No. - ");
            scanf("%s", &(ptr + 0)->state);
            fflush(stdin);
        
        printf("Enter Phone Number - ");
        scanf("%d", &(ptr + 0)->phn);
        fflush(stdin);
        
        printf("Disease Name - ");
        scanf("%s", &(ptr + 0)->dis_name);
        fflush(stdin);
        
        printf("Name of Doctor supervising the patient - ");
        scanf("%s", &(ptr + 0)->doc_name);
        fflush(stdin);
        
        char n;
        printf("Does the patient have any History(Y/N): ");
        scanf("%c", &n);
        
        if(n == 'Y') {
            printf("History - ");
            scanf("%s", &(ptr + 0)->his_desc);
            fflush(stdin);
            
            printf("Date of Treatment - ");
            scanf("%s", &(ptr + 0)->date_treat);
            fflush(stdin);
            
            printf("Treatment Given - ");
            scanf("%s", &(ptr + 0)->treat_given);
            fflush(stdin);
            
            printf("Medicine Prescribed - ");
            scanf("%s", &(ptr + 0)->med_pres);
            fflush(stdin);
        }
}
void newentry(struct patient_data *ptr) {
    FILE *fptr;
    fptr = fopen("patient_records", "w");
    
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
