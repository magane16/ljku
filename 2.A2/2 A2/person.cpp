#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
struct pers {
	char name[20];
	int old;
};
void max( int n, struct pers *O) {
	int m = 0,u=0;
	for (int i = 0; i < n; i++) {
		if (m < (O + i)->old)
		{m = O[i].old; u = i;}
	}
	printf("\n\n%d %s\n", O[u].old, O[u].name);
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	FILE *P;
	fopen_s(&P, "persons.txt", "r");
	fscanf_s(P, "%d", &n);
	struct pers *O = (struct pers *)malloc( n * sizeof(O));	
	for (int i = 0; i < n;i++) {
		fscanf_s(P, "%d", &(O+i)->old);
		fgets((O + i)->name, 100, P);
		printf("%d ",((O + i)->old));
		puts((O + i)->name);
	}
	
	max(n, O);
	fclose(P);	
	system("pause");
	return 0;
}