#include<stdio.h>
#include<stdlib.h>
struct Students{
	int id;
	char name[50];
	int age;
};
int main(){
	FILE *fptr;
	fptr = fopen("students.txt","r");
	int num = 0;
	struct Students sv[100];
	while (fscanf(fptr, "%d,%49[^,],%d\n", &sv[num].id, sv[num].name, &sv[num].age) == 3) {
        num++;
    }
    fclose(fptr);
    printf("Danh sach sinh vien:\n");
    for (int i = 0; i < num; i++) {
        printf("Sinh vien %d: ID = %d, Name = %s, Age = %d\n", i + 1, sv[i].id, sv[i].name, sv[i].age);
    }


	return 0;
}

