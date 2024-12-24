#include<stdio.h>

int main(){
	FILE *fptr;
	fptr = fopen("bt01.txt","r");
	char firstChar;
	firstChar = fgetc(fptr);
	printf("Ki tu dau tien trong file bt01 la: %c", firstChar);
	fclose(fptr);

	return 0;
}

