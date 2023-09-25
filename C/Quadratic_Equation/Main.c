#include <stdio.h>
#include <math.h>

void quadratic(int a, int b, int D, double* x1, double* x2);
double get_discriminant(int a, int b, int c);

int main(void) {
    int a, b, c;
    double x1, x2;
    double D;

    printf("Enter three coefficients for a quadratic equation: ");
    scanf("%d %d %d", &a, &b, &c);
    
quadratic(a, b, c, &x1, &x2);

	if(isnan(x1) || isnan(x2))
	{
		printf("No real numbers available");
}
	else if(a == 0)
	{
		printf("x1 = x2 = %.2lf\n", x1, x2);
}
	else if(x1 == x2)
	{
		printf("x1 = x2 = %.2lf\n", x1, x2);
}
	else
	{
		printf("x1 = %.2lf, x2 = %.2lf\n", x1, x2);
}
    return 0;
}
double get_discriminant(int a, int b, int c)
	{
		double D = b * b - 4 * a * c;
	return D;
}

void quadratic(int a, int b, int c, double* x1, double* x2)
	{
		double D = get_discriminant(a, b, c);

	if(D < 0)
	{
		*x1 = NAN;
		*x2 = NAN;
}
	else if (a == 0)
	{
		*x1 = -c / b;
		*x2 = *x1;
}
	else
	{
		*x1 = (-b + sqrt(D)) / (2 * a);
		*x2 = (-b - sqrt(D)) / (2 * a);
	}
}