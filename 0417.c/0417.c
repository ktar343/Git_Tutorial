#include <stdio.h>

void main(voide)
{ //5차 방정식
	float a, b, c, d, e, f, y1, y2, y3, x, x1, x2, x3, y, xmin, xmax, xstep, xroot;
	printf("a\n");
	scanf_s("%f", &a);
    printf("b\n");
	scanf_s("%f", &b);
    printf("c\n");
	scanf_s("%f", &c);
    printf("d\n");
	scanf_s("%f", &d);
	printf("e\n");
	scanf_s("%f", &e);
	printf("f\n");
	scanf_s("%f", &f);
	printf("xmin\n");
	scanf_s("%f", &xmin);
	printf("xmax\n");
	scanf_s("%f", &xmax);
	printf("xstep\n");
	scanf_s("%f", &xstep);
    x = xmin;


	while (x <= xmax)
	{
		y1 = a * x * x * x * x * x + b * x * x * x * x + c * x * x * x + d * x * x * +e * x + f;
		printf("%g\n, y1");
		x += xstep;
		y2 = a * x * x * x * x * x + b * x * x * x * x + c * x * x * x + d * x * x * +e * x + f;
		if ((y1 * y2) < 0)
		{
			xroot = x;
			printf("root =%g\n\n", xroot);

         }
			
	 }//while

}//main