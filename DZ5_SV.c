#include <locale.h>
#include <math.h>
#include <stdio.h>
#define _USE_MATH_DEFINES
#define y 15.4
#define z 252
void main() {
	setlocale(LC_CTYPE, "RUS");
	float x;
	puts("Введите x\n");
	scanf("%f", &x);
	float partone = (pow(y, x + 1)) / (pow(fabs(y - 2), 1 / 3.f) + 3);
	float parttwo = (x + y / 2) / (2 * fabs(x + y));
	float partthree = (-1 / sin(z));
	float partfour = pow(x + 1, partthree);
	float g = partone + parttwo * partfour;
	printf("Результат:%.6f", g);
}