#include<stdio.h>
#include<stdlib.h>

int main() {
	int *mass1, *mass2;
	int n, u = 0; bool exit=false;
	printf("Enter size:");
	scanf_s("%d", &n);
	mass1 = (int*)malloc(n*sizeof(int));
	printf("Enter %d values:\n",n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &mass1[i]);
	}
	while (!exit) {
		exit = true;
		for (int i = 0; i < n; i++) {	
				if (mass1[i] > mass1[i+1]) {
					u = mass1[i];
					mass1[i] = mass1[i + 1];
					mass1[i + 1] = u;
					exit = false;
				}else if (mass1[i] == mass1[i + 1]) {
					mass1[i+1] = '\t';
					--n;
					exit = false;
				}

		}
	}
	mass2 = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		mass2[i] = mass1[i];
		printf("%d ", mass2[i]);
	}
	printf("\nsize=%d\n", n);
	system("pause");
	return 0;
}