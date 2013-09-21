#include <stdio.h>

/* Modify the temperature conversion program to print a heading
   above the table.  */
main()
{
	int lower, upper, step;
	float cels, fahr;
	
	fahr = cels = lower = 0;
	upper = 300;
	step = 20;
	
	printf("Fahrenheit\tCelsius\n");
	while (fahr <= upper) {
		cels = 5 * (fahr - 32) / 9;
		printf("%10.0f %12.1f\n", fahr, cels);
		fahr += step;
	}
}