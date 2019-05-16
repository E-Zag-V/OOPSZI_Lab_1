#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Rus");

	printf("¬ведите значение х = ");
	scanf("%lf", &x)
	f();

	printf("x = %.4f\n", x);
	printf("y = %.4f\n", y);

	system("pause");
	return 0;
}