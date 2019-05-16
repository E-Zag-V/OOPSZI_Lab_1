#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{

	setlocale(LC_ALL, "Rus");

	double x, y;
	x = 5;

	y = cos(x) + cos(2 * x) + cos(6 * x) + cos(7 * x);

	printf("Для исходных данных при х = 5\n" );
	printf("x = %.4f\n", x);
	printf("y = %.4f\n", y);

	printf("Введите значение х = ");

	scanf("%lf", &x);

	y = cos(x) + cos(2 * x) + cos(6 * x) + cos(7 * x);

	printf("x = %.4f\n", x);
	printf("y = %.4f\n", y);

	system("pause");
	return 0;
}