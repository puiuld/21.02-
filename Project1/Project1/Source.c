#include <stdio.h>
#include <math.h>
int main()
{
	/*double r;
	double PI = 3.14;
	double S;
	printf("Enter r: ");
	scanf_s("%lf", &r);
	printf("S = %lf", S = 4 * PI * pow(r, 2));
	return 0;*/


	double number;
	char symbol;
	printf("Enter number: ");
	scanf_s("%lf", &number);
	printf("Enter symbol: ");
	scanf_s(" %c", &symbol);
	printf("%f\n", (number + (int)symbol) / 2);
	return 0;



	/*double PI = 3.14;
	double r;
	double C;
	printf("Enter r: ");
	scanf_s("%lf", &r);
	printf("C = %lf", C = 2 * PI * r);
	return 0;*/
}