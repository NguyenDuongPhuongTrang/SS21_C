#include<stdio.h>

int main(){
	FILE *fptr;
	fptr = fopen("bt01.txt","a");
	char addText[100];
	printf("Moi ban nhap them chuoi: ");
	fgets(addText,100,stdin);
	fprintf(fptr,"%s",addText);
	fclose(fptr);

	return 0;
}

