#include <stdio.h>
struct patient_data {
    int reg_no;
    char pat_name[50];
    char guar_name[50];
    char gen[10];
    char bgrp[5];
    int age;
    char address[4][150];
    int phn;
    char dis_name[20];
    char doc_name[50];
    char history[4][200];
};
//void newentry(struct patient_data ) {

//}
int main() {
    int c;
    printf("Enter 1 to enter patient's data | Enter 0 to return to Main Menu\n");
    do {
        printf("Enter 1 / 0 - ");
        scanf("%d", &c);
    } while(c == 1);

    return 0;
}
