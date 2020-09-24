#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct comp{
	int a=0;
	int b=0;
	int n=0;
	int m=0,m1=0,m2=0;
};
struct comp A;
void maxim(int a, int b) {
	int c = 0;
	c = abs(a) + abs(b);
	if (A.m < c) {
		A.m = c;
		A.m1 = a;
		A.m2 = b;
	}
};
int main() {
	

	FILE *in;
	fopen_s(&in,"input.txt","r");
	fscanf_s(in, "%d", &A.n); 
	for (int i = 0; i < A.n; i++)
	{
		fscanf_s(in, "%d", &A.a);
		fscanf_s(in, "%d", &A.b);	
		printf("%d+%di\n", A.a, A.b);
		maxim(A.a, A.b);
	}
	printf("max=%d+%di\n", A.m1, A.m2);
	system("pause");
	return 0;
}