#include<stdio.h>

int main(){
	FILE *fptr;
	fptr = fopen("bt01.txt","r");
	if (fptr == NULL) {
        printf("Khong the mo file\n");
        return 1; 
    }
    char firstLine[100];
    if (fgets(firstLine, sizeof(firstLine), fptr) != NULL) {
        printf("Dong dau trong file la: %s", firstLine);
    } else {
        printf("Khong the doc dong dau tien\n");
    }

	return 0;
}

