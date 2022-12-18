#include <stdio.h>
#include <locale.h>
#include <math.h>

void main()
{
	setlocale(LC_ALL, "Rus");

	int a;
	char b;
	printf("Введите символ\n");
	scanf_s("%c", &b);
	printf("Введите длину катета\n");
	scanf_s("%d", &a);

	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= a; j++)
			if (j == a || i == a || i == a - j + 1)
				putchar(b);
			else
				putchar(' ');
		putchar('\n');
	}
}