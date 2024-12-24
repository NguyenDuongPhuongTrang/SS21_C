#include<stdio.h>
#include<stdlib.h>

struct Students{
	int id;
	char name[50];
	int age;
};
int main(){
	FILE *fptr;
	fptr = fopen("students.txt","w");
	int num;
	printf("Nhap so luong sinh vien: ");
	scanf("%d",&num);
	fflush(stdin);
	struct Students sv[num];
	for(int i=0; i<num; i++){
		printf("Nhap thong tin sinh vien\n");
		printf("Nhap id sinh vien: ");
		scanf("%d",&sv[i].id);
		fflush(stdin);
		printf("Nhap ho ten sinh vien: ");
		fgets(sv[i].name,50,stdin);
		sv[i].name[strcspn(sv[i].name, "\n")] = 0;		
		printf("Nhap tuoi sinh vien: ");
		scanf("%d",&sv[i].age);
	}
	for(int i=0; i<num; i++){
		fprintf(fptr, "%d,%s,%d\n", sv[i].id, sv[i].name, sv[i].age);
	}
	fclose(fptr);
	printf("Them hoan tat!");

	return 0;
}

