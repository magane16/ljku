#pragma once
#ifndef HE_H
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
struct MyStruct
{
	char **book;
	int nstr = 1, nstlb = 0, i = 0, n = 0; int *r;
};
void nstr(FILE *b);
void nstlb(FILE *b);
int sort(FILE *b);
void vvod(FILE *b);
void vuvod(FILE *b);

#endif HE_H