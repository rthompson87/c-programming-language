#include <stdio.h>

/* Write a program to print the corresponding Celsius
   to Fahrenheit table. */
main()
{
	int lower, upper, step;
	float cels, fahr;
	
	fahr = cels = lower = 0;
	upper = 300;
	step = 2;
	
	printf("Celsius\tFahrenheit\n");
	while (cels <= upper) {
		fahr = ((cels / 5) * 9) + 32;
		printf("%7.0f %10.1f\n", cels, fahr);
		cels += step;
	}
}