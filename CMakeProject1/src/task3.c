#include <stdio.h>
#include <math.h>
#include <locale.h>


double f(double x);

int main()
{
	setlocale(LC_ALL, "Rus");

	double x, y;

	printf("¬ведите значение х = ");
	scanf("%lf", &x);
	y = f(x);

	printf("x = %.4f\n", x);
	printf("y = %.4f\n", y);

	system("pause");
	return 0;
}

double f(double x)
{
	return cos(x) + cos(2 * x) + cos(6 * x) + cos(7 * x);
}