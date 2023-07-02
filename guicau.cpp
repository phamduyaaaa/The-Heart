#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <cstdlib>
#include <ctime>

void TextColor(int x){
    HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, x);
}
int main(){

	srand(time(NULL));
	for (int i=1;i<=5;i++) printf ("\n");
	for (int g=1;g<=2;g--){
	int r=1 + rand() % (15),r1=1 + rand() % (15),r2=1 + rand() % (15),r3=1 + rand() % (15),r4=1 + rand() % (15),r5=1 + rand() % (15),r6=1 + rand() % (15),r7=1 + rand() % (15),r8=1 + rand() % (15);
	TextColor(5);
	for (int i = 12,j=26,k=10; k>=6;i +=8,j -=8,k-=4){
		printf ("         ");
		for (int t=1;t<=k;t++) printf(" ");
		for (int t=1;t<=i;t++) printf("*");
		for (int t=1;t<=j;t++) printf(" ");
		for (int t=1;t<=i;t++) printf("*");
		
		printf ("\n");}
		TextColor(5);Sleep(300);
	for (int i = 24,j=14,k=4; k>=2;i +=4,j -=4,k-=2){
		printf ("         ");
		for (int t=1;t<=k;t++) printf(" ");
		for (int t=1;t<=i;t++) printf("*");
		for (int t=1;t<=j;t++) printf(" ");
		for (int t=1;t<=i;t++) printf("*");
	
		printf ("\n");}
		Sleep(400);
			TextColor(5);
			
	for (int i = 31,j=6,k=1; k>=0;i +=3,j -=4,k-=1){
		printf ("         ");
		for (int t=1;t<=k;t++) printf(" ");
		for (int t=1;t<=i;t++) printf("*");
		for (int t=1;t<=j;t++) printf(" ");
		for (int t=1;t<=i;t++) printf("*");
		
		printf ("\n");}
			TextColor(5);
			Sleep(300);
		for (int k = 3;k>0;k--){
		printf ("         ");
	for (int i = 1;i<=70;i++) printf("*");
	printf ("\n");
	}
	printf ("          ");
		TextColor(5);
		Sleep(300);
	for (int i =1;i<=68;i++) printf("*");
	printf ("\n");printf ("           ");
	for (int i =1;i<=66;i++) printf("*");
	printf ("\n");
	Sleep(300);
	for (int i=64,j=2,l=1;i>=2;i-=4,j+=2,l++){
		if ( (l % 4== 2) || (l % 4== 1)) {
		TextColor(5);
		Sleep(300);}
		else {
		TextColor(5);
		Sleep(300);}
		printf ("          ");
		for (int k=1;k <= j;k++)
	printf(" ");
	for (int k=1;k <=i ; k++)
	printf("*");
	printf ("\n");
	}
	TextColor(5);Sleep(300);
	for (int i=1;i<=43;i++) printf(" ");
	printf("**");
	Sleep(300);
	
	system("cls");
	
	TextColor(5);
	for (int i = 12,j=26,k=10; k>=6;i +=8,j -=8,k-=4){
		printf ("         ");
		for (int t=1;t<=k;t++) printf(" ");
		for (int t=1;t<=i;t++) printf("*");
		for (int t=1;t<=j;t++) printf(" ");
		for (int t=1;t<=i;t++) printf("*");
		
		printf ("\n");}
		
	for (int i = 24,j=14,k=4; k>=2;i +=4,j -=4,k-=2){
		printf ("         ");
		for (int t=1;t<=k;t++) printf(" ");
		for (int t=1;t<=i;t++) printf("*");
		for (int t=1;t<=j;t++) printf(" ");
		for (int t=1;t<=i;t++) printf("*");
	
		printf ("\n");}
	
			
	for (int i = 31,j=6,k=1; k>=0;i +=3,j -=4,k-=1){
		printf ("         ");
		for (int t=1;t<=k;t++) printf(" ");
		for (int t=1;t<=i;t++) printf("*");
		for (int t=1;t<=j;t++) printf(" ");
		for (int t=1;t<=i;t++) printf("*");
		
		printf ("\n");}
			
		for (int k = 3;k>0;k--){
		printf ("         ");
	for (int i = 1;i<=70;i++) printf("*");
	printf ("\n");
	}
	printf ("          ");
		
	for (int i =1;i<=68;i++) printf("*");
	printf ("\n");printf ("           ");
	for (int i =1;i<=66;i++) printf("*");
	printf ("\n");
	
	for (int i=64,j=2,l=1;i>=2;i-=4,j+=2,l++){
		
		printf ("          ");
		for (int k=1;k <= j;k++)
	printf(" ");
	for (int k=1;k <=i ; k++)
	printf("*");
	printf ("\n");
	}	
	for (int i=1;i<=43;i++) printf(" ");
	printf("**");
	Sleep(500);
	system("cls");
	Sleep(400);

	break;
}	
	return 0;

}
