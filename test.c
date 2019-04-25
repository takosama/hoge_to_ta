#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
	float x, y, u, v;
	x = -7.5;
	y = -5.0;

	FILE *outputfile;
	outputfile = fopen("CircVec.txt", "a");
	
	while (x < 7.5)
	{
		while (y < 5.0)
		{
			u = 1 - (x * x - y * y) / (x * x + y * y) * (x *x + y * y);
			v = -(2 * x * y) / (x * x + y * y)*(x * x + y * y);
			fprintf(outputfile, "%f %f %f %f \n", x, y, u, v);
			y += 0.625;
		}
		y -= 5.0;
		fprintf(outputfile, "%f %f %f %f \n", x, y, u, v);
		x += 0.625;
	}

	fclose(outputfile);
	
	return 0;
}
