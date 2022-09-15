#include <stdio.h>
#include <locale.h>
void main()
{
	puts("Hello, world!");
	setlocale(LC_ALL, "RUS");
	puts("Привет, мир!");
}