#include<stdio.h>

int main(){
	FILE *fptr;
	fptr = fopen("bt01.txt","w");
	char myText[50];
	printf("Moi ban nhap vao file: ");
	fgets(myText,100,stdin);
	fprintf(fptr,"%s", myText);
	fclose(fptr);

	return 0;
}

