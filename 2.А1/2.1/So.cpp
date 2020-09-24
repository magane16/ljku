#include"pas.h"
int prov() {
	int i = 0, n = 0;
	char p[50] = "12345";
	char o[50];
	while (o[i] != EOF) {
		o[i] = _getch();
		if (o[i] == '\r')
			break;
		_putch('*');
		i++;
	}

	if (memcmp(p, o, 5) == 0)
		printf("\nyes\n");
	else
	{
		printf("\nno\n");
		n = 1;
	}
	return n;
};