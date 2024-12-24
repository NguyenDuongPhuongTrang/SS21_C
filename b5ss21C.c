#include<stdio.h>

int main(){
	FILE *fptr;
	fptr = fopen("bt05.txt","w");
	int line;
	char content[100];
	printf("Moi ban nhap so dong: ");
	scanf("%d",&line);
	fflush(stdin);
	for(int i=0; i<line; i++){
		printf("Moi ban nhap noi dung dong %d: ",i+1);
		fgets(content,100,stdin);
		fputs(content,fptr);
	}
	fclose(fptr);
	
	fptr = fopen("bt05.txt","r");
	char myText[10000];
	printf("Noi dung trong file bt05.txt la:\n");
    while (fgets(myText, sizeof(myText), fptr)) {
        printf("%s", myText);  
    }
	fclose(fptr);

	return 0;
}
//	fgets(myText,10000,fptr);
//	printf("Noi dung trong file bt05 la: %s",myText);
