#include"He.h"
struct MyStruct o;
void nstr(FILE *b) {
	while (1)
	{
		o.n = fgetc(b);
		if (o.n == '\n') {
			o.nstr++;
		}
		if (o.n == EOF)
		{
			o.book = (char**)malloc(o.nstr * sizeof(char*));
			break;
		}
	}
	fseek(b, 0, SEEK_SET);
};
void nstlb(FILE *b) {
	int i = 0; 
	o.r = (int*)malloc(o.nstr * sizeof(int));
	while (1)
	{
		o.n = fgetc(b); o.nstlb++;
		if (o.n == '\n') {
			o.r[i] = o.nstlb;
			o.book[i] = (char*)malloc(o.nstlb * sizeof(char));
			i++;
			o.nstlb = 0;
		}
		if (o.n == EOF)
		{
			o.r[i] = o.nstlb;		
			o.book[i] = (char*)malloc(o.nstlb * sizeof(char));
			break;
		}
	}
	fseek(b, 0, SEEK_SET);
};
void vvod(FILE *b) {
	for (int i = 0; i < o.nstr; i++)
	{
		fgets(o.book[i], 200, b);
	}
};
int sort(FILE *b) {
	int n = 0;
	for (int j = 0; j < o.nstr-1; j++) {
		if (o.r[j] > o.r[j + 1]) {
			int tmpø = o.r[j];
			o.r[j]=o.r[j + 1];
			o.r[j + 1] = tmpø;
			char* tmp = o.book[j];
			o.book[j] = o.book[j + 1];
			o.book[j + 1] = tmp;
			n++;
		}
	}
	return n;
}
void vuvod(FILE *b) {
	for (int i = 0; i < o.nstr; i++)
	{		
		puts(o.book[i]);
	}
};
