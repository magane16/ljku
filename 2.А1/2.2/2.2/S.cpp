#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main() {
	char c,*b;
	int a=0 ;
	printf("Input password length (4...10)\n");
	scanf_s("%d", &a);
	b = (char*)malloc(a);
	for (int i = 0; i < a; i++) {
		c = _getch();
		_putch('*');
		b[i]=c;
	}printf("\nPassword=");
	for (int i = 0; i < a; i++) {
		printf("%c", b[i]);
	}
	system("pause");
	return 0;
	
}