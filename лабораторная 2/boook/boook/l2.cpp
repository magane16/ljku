#include"He.h"
void dms(FILE *b) {
	nstr(b);
	nstlb(b);
};
int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "Rus");
	int n;
	FILE *b;
	if (argc > 1) {
		fopen_s(&b, argv[1], "r");
	}
	else
	{
		fopen_s(&b, "book.txt", "r");
	}
	dms(b);
	vvod(b);
	
	do{
		n = sort(b);
	} while (n != 0);
	vuvod(b);
	
	fclose(b);
	system("pause");
	return 0;
}