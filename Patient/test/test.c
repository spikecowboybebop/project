#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct test_data {
	char name1[40];
	char name2[40];
	char name3[40];
};
int main() {
	struct test_data *ptr;
	ptr = (struct test_data *)malloc(1 * sizeof(struct test_data));

	FILE *fptr;
	fptr = fopen("test.txt", "r");
	char data[3][40];

	for(int i = 0; (fgets(data[i], sizeof(data), fptr) != NULL && (i < 3)); i++) {
		continue;
	}
	strcpy((ptr+0)->name1, data[0]);
	strcpy((ptr+0)->name2, data[1]);
	strcpy((ptr+0)->name3, data[2]);

	fclose(fptr);

	FILE *fptr1;
	fptr1 = fopen("test.txt", "w");

	printf("Enter Name2 - ");
	scanf("%s", &(ptr+0)->name2);

	fprintf(fptr, "%s", (ptr+0)->name1);
	fprintf(fptr, "%s", (ptr+0)->name2);
	fprintf(fptr, "\n%s", (ptr+0)->name3);

	fclose(fptr1);

	return 0;
}