#include <stdio.h>

/* Modify the temperature conversion program to print the
   table in reverse order, that is, from 300 degrees to 0.  */
main()
{
	int lower, upper, step;
	float cels, fahr;
	
	cels = lower = 0;
	fahr = 300;
	upper = 300;
	step = 20;
	
	printf("Fahrenheit\tCelsius\n");
	while (fahr >= lower) {
		cels = 5 * (fahr - 32) / 9;
		printf("%10.0f %12.1f\n", fahr, cels);
		fahr -= step;
	}
}