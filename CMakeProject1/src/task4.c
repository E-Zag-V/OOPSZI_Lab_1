#include <stdio.h>
#include <math.h>
#include <locale.h>


void f();
double x, result;

int main()
{
	setlocale(LC_ALL, "Rus");

	printf("¬ведите значение х = ");
	scanf("%lf", &x);
	f();

	printf("x = %.4f\n", x);
	printf("result = %.4f\n", result);

	system("pause");
	return 0;
}

void f()
{
	result = cos(x) + cos(2 * x) + cos(6 * x) + cos(7 * x);
}