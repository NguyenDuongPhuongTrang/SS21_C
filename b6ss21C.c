#include<stdio.h>
#include<string.h>

int main(){
	FILE *fptr;
	fptr = fopen("bt06.txt","w");
	FILE *file;
	file = fopen("bt01.txt","r");
	char text[1000];
	while (fgets(text,1000, file)) {
        fputs(text, fptr);
    }
    printf("Sao chep thanh cong!");
	fclose(fptr);
	fclose(file);

	return 0;
}

