#include <stdio.h>
#include <math.h>
#include <locale.h>


double f(double x);

int main()
{
	setlocale(LC_ALL, "Rus");

	double x, y;

	printf("������� �������� � = ");
	scanf("%lf", &x);
	y = f(x);

	printf("x = %.4f\n", x);
	printf("y = %.4f\n", y);

	system("pause");
	return 0;
}